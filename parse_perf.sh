#!/usr/bin/env bash
set -euo pipefail
echo "app,warps,threads,instrs,cycles" > perf.csv

for f in logs/*.log; do
  base=$(basename "$f" .log)
  app=$(sed -E 's/(.*)_w[0-9]+_t[0-9]+/\1/' <<<"$base")
  w=$(sed -E 's/.*_w([0-9]+)_t[0-9]+/\1/' <<<"$base")
  t=$(sed -E 's/.*_t([0-9]+)/\1/' <<<"$base")

  line=$(grep -m1 -E '^PERF: instrs=[0-9]+' "$f" || true)
  if [[ -z "$line" ]]; then
    echo "WARN: no PERF line in $f" >&2
    continue
  fi
  instrs=$(sed -E 's/.*instrs=([0-9]+).*/\1/' <<<"$line")
  cycles=$(sed -E 's/.*cycles=([0-9]+).*/\1/' <<<"$line")
  echo "${app},${w},${t},${instrs},${cycles}" >> perf.csv
done

echo "Wrote perf.csv"
