// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_bhf_fmul__pi50.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (IData)(vlSelf->__Vcellinp__pipe_add__data_in);
        vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = ((0xffffffe0U & vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
               | (IData)((vlSelf->__Vcellinp__pipe_add__data_in 
                          >> 0x20U)));
        vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = ((0x1fU & vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
               | ((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U]))))) 
                  << 5U));
        vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (0x3ffU & (((IData)((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U]))))) 
                          >> 0x1bU) | ((IData)(((0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])))) 
                                                >> 0x20U)) 
                                       << 5U)));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x16U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x16U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x16U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x16U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x16U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x16U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x16U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x16U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x16U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
           >> 0x1fU);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1eU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1dU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1cU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1bU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1aU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x19U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x18U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x17U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x16U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U]))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 5U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__0\n"); );
    // Body
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__fp16_mul__1\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x10U))) ? 
                     (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0x1fU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U))) 
                    + (0x10U | ((0U == (0x1fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                 >> 0x10U)))
                                 ? 2U : 1U))));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                        & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 5U))))) 
                 << 0x25U) | ((QData)((IData)((((((~ 
                                                   (((0x40U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x1c0U
                                                      : 0U) 
                                                    | ((0x80U 
                                                        & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                        ? 0x40U
                                                        : 0U))) 
                                                  & ((IData)(0xe0U) 
                                                     + 
                                                     (VL_EXTENDS_II(9,7, 
                                                                    (0x7fU 
                                                                     & ((vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                         << 2U) 
                                                                        | (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                           >> 0x1eU)))) 
                                                      + 
                                                      (1U 
                                                       & (VL_SHIFTL_III(27,27,32, 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                            >> 8U)), 5U) 
                                                          >> 0x1aU))))) 
                                                 | (((0x80U 
                                                      & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                      ? 0x180U
                                                      : 0U) 
                                                    | ((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                        ? 0x1c0U
                                                        : 0U))) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)
                                                    ? 0x400000U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                       ? 0U
                                                       : 
                                                      (0x400000U 
                                                       & vlSelf->__PVT__rounding__DOT__common_fractOut)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlSelf->__PVT__rounding__DOT__isNaNOut)) 
                                                            & (~ 
                                                               (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                >> 6U))))
                                                         ? 
                                                        (0x3fffffU 
                                                         & vlSelf->__PVT__rounding__DOT__common_fractOut)
                                                         : 0U)))))) 
                              << 5U)) | (QData)((IData)(
                                                        (0x10U 
                                                         & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                            >> 5U)))));
    }
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x1fffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U];
    vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
        = vlSelf->__Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U];
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__rounding__DOT__isNaNOut = (IData)(
                                                     (0U 
                                                      != 
                                                      (0x300U 
                                                       & vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    vlSelf->__PVT__rounding__DOT__common_fractOut = 
        (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                  (0x3fffffU 
                                                   & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      >> 8U)), 5U))
                       ? (0xfffffcU & VL_SHIFTL_III(27,27,32, 
                                                    (0x3fffffU 
                                                     & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 8U)), 2U))
                       : (0x1fffff8U & VL_SHIFTL_III(27,27,32, 
                                                     (0x3fffffU 
                                                      & (vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         >> 8U)), 3U))));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
    vlSelf->__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                              (((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_hea088396__0) 
                                                                  >> 9U)) 
                                                                & (7U 
                                                                   == (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0))) 
                                                               | (((~ 
                                                                    ((IData)(vlSelf->__VdfgTmp_h4fe743ab__0) 
                                                                     >> 9U)) 
                                                                   & (7U 
                                                                      == (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))) 
                                                                  | (((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                      & (0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))) 
                                                                     | ((IData)(vlSelf->__PVT__multiplier__DOT__isInfB) 
                                                                        & (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)))))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (((3U 
                                                                    == 
                                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)) 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                                                  | ((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)) 
                                                                     & (IData)(vlSelf->__VdfgTmp_h3ac613bc__0))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->__PVT__multiplier__DOT__isInfA) 
                                                                     | (IData)(vlSelf->__PVT__multiplier__DOT__isInfB)))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       ((0U 
                                                                         == 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                        | (0U 
                                                                           == 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U))))) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                               ^ 
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                              >> 0x15U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                               + 
                                                                               VL_EXTENDS_II(7,7, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                              - (IData)(0x20U)) 
                                                                             << 0x19U) 
                                                                            | (0x1fffff8U 
                                                                               & (((((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hea088396__0)) 
                                                                                * 
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 3U)) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h4fe743ab__0))) 
                                                                                << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__2(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__2\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hea088396__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h1bd7ae29__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h1bd7ae29__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelf->__VdfgTmp_h1bd7ae29__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__3(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi50___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__fp16_mul__3\n"); );
    // Init
    CData/*5:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h4fe743ab__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0xaU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 0x16U)) 
                                                               << 
                                                               vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0xaU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x3fU & (((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                      ? (0x30U | (0xfU & (~ vlSelf->__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                     (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                    + (0x10U | ((0U == (0x1fU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U]))
                                 ? 2U : 1U))));
    vlSelf->__VdfgTmp_h3ac613bc__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 4U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x16U)))
                                             : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                 & (0U 
                                                    == 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x16U)))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 3U))));
    vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3ac613bc__0) 
            << 3U) | (7U & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelf->__VdfgTmp_h3ac613bc__0)) 
                                              & (3U 
                                                 == 
                                                 VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 4U)));
}
