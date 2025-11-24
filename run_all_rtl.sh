#!/usr/bin/env bash
set -euo pipefail

mkdir -p logs_rtl
CFGs=("4 4" "4 8" "8 4" "8 8")

bash ./ci/blackbox.sh --driver=rtlsim \
  --clusters=1 --cores=4 --warps=4 --threads=4 \
  --app=dot8 --perf=1 --args="-n 256" \
  --log=logs_rtl/warmup.log

for cfg in "${CFGs[@]}"; do
  W=$(awk '{print $1}' <<<"$cfg")
  T=$(awk '{print $2}' <<<"$cfg")

  echo "[DOT8 ] N=256 C=4 W=$W T=$T"
  bash ./ci/blackbox.sh --driver=rtlsim \
    --clusters=1 --cores=4 --warps="$W" --threads="$T" \
    --app=dot8 --perf=1 --args="-n 256" \
    --log="logs_rtl/dot8_w${W}_t${T}.log" &

  echo "[BASE ] N=256 C=4 W=$W T=$T"
  bash ./ci/blackbox.sh --driver=rtlsim \
    --clusters=1 --cores=4 --warps="$W" --threads="$T" \
    --app=dot8_base --perf=1 --args="-n 256" \
    --log="logs_rtl/dot8_base_w${W}_t${T}.log" &
done

wait
echo "All done. Logs in ./logs_rtl"
