#!/usr/bin/env bash
set -e

FMT="$1"   # fp16 / bf16 / tf32
W="$2"     # warps per core
T="$3"     # threads per warp

OUTDIR="/home/andyl/vortex/lab2_simx_result"
APP="tests/regression/sgemm_tcu"

if [ -z "$FMT" ] || [ -z "$W" ] || [ -z "$T" ]; then
  echo "Usage: $0 <fp16|bf16|tf32> <NUM_WARPS> <NUM_THREADS>"
  exit 1
fi

LOG="${OUTDIR}/simx_${FMT}_w${W}_t${T}.log"

echo "=== Running FMT=${FMT}, WARPS=${W}, THREADS=${T} ==="
echo "Log: ${LOG}"

# Rebuild app
make -C ${APP} clean

CONFIGS="-DITYPE=${FMT} -DOTYPE=fp32 -DNUM_THREADS=${T}" \
    make -C ${APP}

# Run on SimX (4 cores)
CONFIGS="-DEXT_TCU_ENABLE" \
    ./ci/blackbox.sh \
        --driver=simx \
        --cores=4 \
        --warps=${W} \
        --threads=${T} \
        --perf=1 \
        --app=sgemm_tcu \
        > "${LOG}" 2>&1

echo "Done: ${LOG}"
