# plot_rtl_perf.py
import re, pathlib, csv
from collections import defaultdict
import matplotlib.pyplot as plt

LOG_DIR = pathlib.Path("logs_rtl")  # 你的日志目录
PAT = re.compile(r"^PERF:\s+instrs=(\d+),\s+cycles=(\d+)", re.M)

# 期望文件名模式：dot8_w4_t8.log / dot8_base_w4_t8.log
def parse_wt(name):
    # 返回 (W, T)
    m = re.search(r"_w(\d+)_t(\d+)\.log$", name)
    return (int(m.group(1)), int(m.group(2))) if m else (None, None)

rows = []  # 每个配置的聚合（跨4 cores取“总instrs”和“max cycles”）
for log in sorted(LOG_DIR.glob("*.log")):
    text = log.read_text(errors="ignore")
    # 从“总汇”行抓 instrs/cycles（最后那几行里的 “PERF: instrs=..., cycles=...”）
    m = PAT.search(text)
    if not m:
        print(f"[WARN] no PERF totals in {log.name}")
        continue
    instrs, cycles = int(m.group(1)), int(m.group(2))
    W, T = parse_wt(log.name)
    kind = "dot8" if "dot8_" in log.name and "base" not in log.name else "baseline"
    rows.append({"kind": kind, "W": W, "T": T, "instrs": instrs, "cycles": cycles, "file": log.name})

# 汇总到 (W,T,kind)
by_cfg = defaultdict(dict)
for r in rows:
    by_cfg[(r["W"], r["T"])][r["kind"]] = r

labels = []
base_cycles = []
dot8_cycles = []
base_instrs = []
dot8_instrs = []

for (W, T) in sorted(by_cfg.keys()):
    labels.append(f"w{W}-t{T}")
    base_cycles.append(by_cfg[(W,T)].get("baseline", {}).get("cycles", None))
    dot8_cycles.append(by_cfg[(W,T)].get("dot8", {}).get("cycles", None))
    base_instrs.append(by_cfg[(W,T)].get("baseline", {}).get("instrs", None))
    dot8_instrs.append(by_cfg[(W,T)].get("dot8", {}).get("instrs", None))

# 保存 CSV
with open("summary.csv", "w", newline="") as f:
    w = csv.writer(f)
    w.writerow(["cfg","baseline_cycles","dot8_cycles","baseline_instrs","dot8_instrs"])
    for i,l in enumerate(labels):
        w.writerow([l, base_cycles[i], dot8_cycles[i], base_instrs[i], dot8_instrs[i]])

# 画图（不要指定颜色，按要求用默认）
def bar2(fname, title, ylab, base, acc):
    import numpy as np
    x = np.arange(len(labels))
    width = 0.35
    fig, ax = plt.subplots(figsize=(8,6))
    ax.bar(x - width/2, base, width, label="baseline")
    ax.bar(x + width/2, acc,  width, label="dot8")
    ax.set_ylabel(ylab)
    ax.set_title(title)
    ax.set_xticks(x, labels)
    ax.legend()
    ax.grid(axis="y", linestyle="--", alpha=0.3)
    plt.tight_layout()
    plt.savefig(fname, dpi=160)
    plt.close(fig)

bar2("cycles.png", "Total Cycles (N=256, 4 cores)", "cycles (lower is better)", base_cycles, dot8_cycles)
bar2("instrs.png", "Total Instructions (N=256, 4 cores)", "instructions (lower is better)", base_instrs, dot8_instrs)

print("Done. Wrote: cycles.png, instrs.png, summary.csv")
