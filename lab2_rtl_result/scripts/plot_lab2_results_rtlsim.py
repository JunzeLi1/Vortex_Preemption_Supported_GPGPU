#!/usr/bin/env python3
import os
from pathlib import Path

import matplotlib.pyplot as plt

# --------------------------------------------------------------------
# Config
# --------------------------------------------------------------------
SCRIPT_DIR = Path(__file__).resolve().parent
# scripts/ -> parent is /home/andyl/vortex/lab2_rtl_result
LOG_DIR = SCRIPT_DIR.parent
OUT_DIR = LOG_DIR

FORMATS = ["fp16", "bf16", "tf32"]   # formats we care about


# --------------------------------------------------------------------
# Parsing helpers
# --------------------------------------------------------------------
def parse_logs():
    """
    Parse all *.log files under LOG_DIR for RTLSim runs.

    Returns: list of records, each like:
      {
        'fmt': 'fp16'/'bf16'/'tf32',
        'warps': 4,
        'threads': 8,
        'instrs': 455128,
        'cycles': 161679,
        'ipc': 2.81501,
      }
    """
    records = []

    log_files = sorted(LOG_DIR.glob("*.log"))
    if not log_files:
        print(f"[WARN] No .log files found in {LOG_DIR}")
        return records

    for log_path in log_files:
        with log_path.open() as f:
            current = None
            for raw in f:
                line = raw.strip()

                # New CONFIGS block (RTLSim build/run)
                if line.startswith("CONFIGS="):
                    # save previous if complete
                    if (
                        current is not None
                        and {"fmt", "warps", "threads", "instrs", "cycles"} <= current.keys()
                    ):
                        records.append(current)
                    current = {}

                    # Example:
                    # CONFIGS=-DEXT_TCU_ENABLE -DTCU_BHF -DNUM_CORES=4 -DNUM_WARPS=4 -DNUM_THREADS=4 -DPERF_ENABLE ...
                    tokens = line.split()
                    for tok in tokens:
                        if tok.startswith("-DNUM_WARPS="):
                            try:
                                current["warps"] = int(tok.split("=", 1)[1])
                            except ValueError:
                                pass
                        if tok.startswith("-DNUM_THREADS="):
                            try:
                                current["threads"] = int(tok.split("=", 1)[1])
                            except ValueError:
                                pass

                # Input format line
                elif "input data type:" in line and current is not None:
                    # line like: input data type: bf16 (id=2)
                    try:
                        after = line.split("input data type:")[1].strip()
                        fmt = after.split()[0]
                        current["fmt"] = fmt
                    except Exception:
                        pass

                # Aggregate PERF summary (all cores)
                elif line.startswith("PERF: instrs=") and current is not None:
                    # Example:
                    # PERF: instrs=455133, cycles=172488, IPC=2.638636
                    no_commas = line.replace(",", "")
                    parts = no_commas.split()
                    try:
                        instrs = int(parts[1].split("=", 1)[1])
                        cycles = int(parts[2].split("=", 1)[1])
                        ipc = float(parts[3].split("=", 1)[1])
                        current["instrs"] = instrs
                        current["cycles"] = cycles
                        current["ipc"] = ipc
                    except Exception:
                        continue

                    # assume one summary per CONFIGS block
                    records.append(current)
                    current = None

            # Flush last record in file if still open & complete
            if (
                current is not None
                and {"fmt", "warps", "threads", "instrs", "cycles"} <= current.keys()
            ):
                records.append(current)

    return records


# --------------------------------------------------------------------
# Plotting
# --------------------------------------------------------------------
def make_plots(records):
    if not records:
        print("[ERROR] No records to plot.")
        return

    # Map (fmt, warps, threads) -> metrics
    data_map = {}
    for r in records:
        key = (r["fmt"], r["warps"], r["threads"])
        data_map[key] = {
            "instrs": r["instrs"],
            "cycles": r["cycles"],
            "ipc": r.get("ipc", 0.0),
        }

    # Find (warps, threads) configs that have all three formats
    all_configs = sorted({(r["warps"], r["threads"]) for r in records})
    valid_configs = []
    for (w, t) in all_configs:
        if all((fmt, w, t) in data_map for fmt in FORMATS):
            valid_configs.append((w, t))

    if not valid_configs:
        print("[ERROR] No (warps,threads) config has fp16/bf16/tf32 for RTL. Check logs.")
        return

    print("Using configs (warps, threads):", valid_configs)

    # Nice text table for your lab report
    print("\n=== RTL Summary Table ===")
    print("fmt\twarps\tthreads\tinstrs\tcycles\tIPC")
    for (w, t) in valid_configs:
        for fmt in FORMATS:
            m = data_map[(fmt, w, t)]
            print(f"{fmt}\t{w}\t{t}\t{m['instrs']}\t{m['cycles']}\t{m['ipc']:.3f}")

    labels = [f"W{w}T{t}" for (w, t) in valid_configs]
    x = range(len(valid_configs))
    bar_width = 0.25

    # ---- Plot 1: total instruction count ----
    plt.figure(figsize=(8, 4))
    for i, fmt in enumerate(FORMATS):
        ys = [data_map[(fmt, w, t)]["instrs"] for (w, t) in valid_configs]
        xs_shifted = [xi + i * bar_width for xi in x]
        plt.bar(xs_shifted, ys, width=bar_width, label=fmt)

    mid_points = [xi + bar_width for xi in x]
    plt.xticks(mid_points, labels)
    plt.xlabel("Config (Warps x Threads)")
    plt.ylabel("Total Instructions")
    plt.title("sgemm_tcu @ RTL (BHF): Instruction Count vs. Format")
    plt.legend()
    plt.tight_layout()
    instrs_png = OUT_DIR / "lab2_rtl_instrs.png"
    plt.savefig(instrs_png)
    plt.close()
    print(f"\nSaved: {instrs_png}")

    # ---- Plot 2: total cycles ----
    plt.figure(figsize=(8, 4))
    for i, fmt in enumerate(FORMATS):
        ys = [data_map[(fmt, w, t)]["cycles"] for (w, t) in valid_configs]
        xs_shifted = [xi + i * bar_width for xi in x]
        plt.bar(xs_shifted, ys, width=bar_width, label=fmt)

    mid_points = [xi + bar_width for xi in x]
    plt.xticks(mid_points, labels)
    plt.xlabel("Config (Warps x Threads)")
    plt.ylabel("Total Cycles")
    plt.title("sgemm_tcu @ RTL (BHF): Cycle Count vs. Format")
    plt.legend()
    plt.tight_layout()
    cycles_png = OUT_DIR / "lab2_rtl_cycles.png"
    plt.savefig(cycles_png)
    plt.close()
    print(f"Saved: {cycles_png}")


def main():
    print(f"LOG_DIR = {LOG_DIR}")
    records = parse_logs()
    print(f"Parsed {len(records)} RTL runs.")
    make_plots(records)


if __name__ == "__main__":
    main()
