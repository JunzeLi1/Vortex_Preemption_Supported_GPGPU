// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_bhf_fmul__pi51.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi51___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi51* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi51___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [2U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [4U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [6U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [8U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xaU] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xcU] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xeU] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi51___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi51* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi51___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1\n"); );
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [2U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [4U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [6U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [8U] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xaU] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xcU] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xeU] | vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU]);
}
