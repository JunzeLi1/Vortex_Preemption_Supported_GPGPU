#!/usr/bin/env bash
set -euo pipefail

APPS=("dot8_base" "dot8")
CFGs=("4 4" "4 8" "8 4 " "8 8")
mkdir -p logs

for APP in "${APPS[@]}"; do
  for cfg in "${CFGs[@]}"; do
    W=$(awk '{print $1}' <<<"$cfg")
    T=$(awk '{print $2}' <<<"$cfg")
    LOG="logs/${APP}_w${W}_t${T}.log"
    echo "[RUN] $APP  warps=$W threads=$T"
    OPTS=-n256 bash ./ci/blackbox.sh \
      --driver=simx \
      --clusters=1 --cores=4 \
      --warps="${W}" --threads="${T}" \
      --app="${APP}" \
      --perf=1 \
      --debug=0 \
      --log="${LOG}"
  done
done
echo "All done. Logs in ./logs"
