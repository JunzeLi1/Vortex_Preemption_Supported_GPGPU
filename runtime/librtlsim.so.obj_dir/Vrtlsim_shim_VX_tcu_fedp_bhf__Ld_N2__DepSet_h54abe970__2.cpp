// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__8\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_h2ffd1d50__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h96380549__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h96380549__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h96380549__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__9\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_he3a483a4__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h3491cac1__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h3491cac1__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelf->__VdfgTmp_h3491cac1__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    // Body
    vlSelf->g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hf2991b4d__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_h2ffd1d50__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h96380549__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h96380549__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hf2991b4d__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_h2ffd1d50__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    // Body
    vlSelf->g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelf->__VdfgTmp_hdc032bfa__0) 
                                  >> 9U)) & (7U == (IData)(vlSelf->__VdfgTmp_h42bde904__0))) 
                             | (((~ ((IData)(vlSelf->__VdfgTmp_he3a483a4__0) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelf->__VdfgTmp_h3491cac1__0))) 
                                | (((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelf->__VdfgTmp_h3491cac1__0))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_hdc032bfa__0)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelf->__VdfgTmp_he3a483a4__0))))))) 
                                              << 3U))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__4\n"); );
    // Body
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xfU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x20U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x10U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x21U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x21U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x22U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x11U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x23U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x23U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x24U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x12U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x25U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x25U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x26U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x13U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x27U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x27U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x28U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x14U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x29U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x29U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x15U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x16U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2eU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x17U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x2fU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x2fU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x30U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x18U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x31U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x31U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x32U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x19U] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x33U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x33U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x34U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1aU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x35U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x35U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x36U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1bU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x37U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x37U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x38U]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1cU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x39U] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x39U] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3aU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1dU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3bU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3bU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3cU]);
    vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0x1eU] 
        = (vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x3dU] ? vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3dU] : vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x3eU]);
    vlSelf->__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                               & (((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   (0x1e0U 
                                                    | (0x1fU 
                                                       & (~ 
                                                          vlSelf->__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                          [0U])))
                                                    : 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                          >> 0x1dU)))) 
                                                  + 
                                                  (0x80U 
                                                   | ((0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                              >> 0x1dU))))
                                                       ? 2U
                                                       : 1U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__6\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hf2991b4d__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h5ed1b8fd__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h5ed1b8fd__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__0__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__7\n"); );
    // Init
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xfU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xfU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x10U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x11U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x11U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x12U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x13U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x13U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x14U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x15U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x15U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x16U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x17U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x17U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x18U]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x19U] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x19U] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1aU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1bU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1bU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1cU]);
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] 
        = (vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0x1dU] ? vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1dU] : vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0x1eU]);
    vlSelf->__VdfgTmp_hdc032bfa__0 = (0x3ffU & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x10U)))
                                                 ? 
                                                VL_SHIFTL_III(10,10,32, 
                                                              (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 << 0x1aU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                   >> 6U)) 
                                                               << 
                                                               vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                               [0U]), 1U)
                                                 : 
                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                    >> 6U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelf->__VdfgTmp_h42bde904__0 = (7U & ((3U == 
                                             (3U & 
                                              ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))))
                                             : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0xffffc0U 
                                                          & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                 ? 0U
                                                 : 
                                                ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                 >> 6U))));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelf->__VdfgTmp_h42bde904__0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelf->__VdfgTmp_h42bde904__0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelf->__PVT__g_prod__BRA__2__KET____DOT__g_tf32_even__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}
