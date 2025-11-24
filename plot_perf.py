import csv
from collections import defaultdict
import matplotlib.pyplot as plt

data = defaultdict(dict)  # key=(w,t) -> {'dot8':(instr,cycles), 'dot8_base':(...)}
with open("perf.csv") as f:
    for r in csv.DictReader(f):
        key = (int(r["warps"]), int(r["threads"]))
        data[key][r["app"]] = (int(r["instrs"]), int(r["cycles"]))

cfgs = sorted(data.keys())
labels = [f"w{w}-t{t}" for (w,t) in cfgs]

def series(idx, app):
    return [data[cfg][app][idx] for cfg in cfgs]

# 处理 app 名可能是目录名的情况，归一到短名
def normalize(app):
    return 'dot8' if app.endswith('dot8') else 'dot8_base'

apps_present = {normalize(a) for v in data.values() for a in v.keys()}
assert {'dot8', 'dot8_base'} <= apps_present, "缺少 dot8 或 dot8_base 的数据"

base_instrs = series(0, 'dot8_base') if 'dot8_base' in data[cfgs[0]] else series(0, 'tests/regressions/dot8_base')
dot8_instrs = series(0, 'dot8') if 'dot8' in data[cfgs[0]] else series(0, 'tests/regressions/dot8')

base_cycles = series(1, 'dot8_base') if 'dot8_base' in data[cfgs[0]] else series(1, 'tests/regressions/dot8_base')
dot8_cycles = series(1, 'dot8') if 'dot8' in data[cfgs[0]] else series(1, 'tests/regressions/dot8')

x = range(len(cfgs)); bw = 0.35

plt.figure()
plt.bar([i-bw/2 for i in x], base_instrs, width=bw, label="baseline")
plt.bar([i+bw/2 for i in x], dot8_instrs, width=bw, label="dot8")
plt.xticks(list(x), labels)
plt.title("Total Instructions (N=256, 4 cores)")
plt.ylabel("instructions (lower is better)")
plt.legend(); plt.tight_layout(); plt.savefig("instructions.png", dpi=160)

plt.figure()
plt.bar([i-bw/2 for i in x], base_cycles, width=bw, label="baseline")
plt.bar([i+bw/2 for i in x], dot8_cycles, width=bw, label="dot8")
plt.xticks(list(x), labels)
plt.title("Total Cycles (N=256, 4 cores)")
plt.ylabel("cycles (lower is better)")
plt.legend(); plt.tight_layout(); plt.savefig("cycles.png", dpi=160)

print("Speedup (baseline_cycles / dot8_cycles):")
for (w,t), bc, dc in zip(cfgs, base_cycles, dot8_cycles):
    s = bc / dc if dc else float('inf')
    print(f"  w{w}-t{t}: {s:.3f}x")
