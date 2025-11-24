#!/usr/bin/env bash
set -e

FMT="$1"   # fp16 / bf16 / tf32
W="$2"     # warps per core
T="$3"     # threads per warp

OUTDIR="/home/andyl/vortex/lab2_rtl_result"
APP="tests/regression/sgemm_tcu"

if [ -z "$FMT" ] || [ -z "$W" ] || [ -z "$T" ]; then
  echo "Usage: $0 <fp16|bf16|tf32> <NUM_WARPS> <NUM_THREADS>"
  exit 1
fi

mkdir -p "${OUTDIR}"
LOG="${OUTDIR}/rtl_${FMT}_w${W}_t${T}.log"

echo "=== RTL: FMT=${FMT}, WARPS=${W}, THREADS=${T} ==="
echo "Log: ${LOG}"

# 1) Rebuild sgemm_tcu app for this NUM_THREADS
make -C ${APP} clean

CONFIGS="-DITYPE=${FMT} -DOTYPE=fp32 -DNUM_THREADS=${T}" \
  make -C ${APP}

# 2) Run RTL sim with matching NUM_THREADS / NUM_WARPS / NUM_CORES
CONFIGS="-DEXT_TCU_ENABLE -DTCU_BHF -DNUM_CORES=4 -DNUM_WARPS=${W} -DNUM_THREADS=${T} -DPERF_ENABLE" \
  ./ci/blackbox.sh \
    --driver=rtlsim \
    --cores=4 \
    --warps=${W} \
    --threads=${T} \
    --perf=1 \
    --app=sgemm_tcu \
    > "${LOG}" 2>&1

echo "Done: ${LOG}"
