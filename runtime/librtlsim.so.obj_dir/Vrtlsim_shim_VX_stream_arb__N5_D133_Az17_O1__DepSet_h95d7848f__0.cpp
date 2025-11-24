// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                     << 1U)) | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                       << 1U)) | ((4U 
                                                   & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                      << 1U)) 
                                                  | (2U 
                                                     & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                         | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                        << 1U)))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
}

extern const VlWide<10>/*319:0*/ Vrtlsim_shim__ConstPool__CONST_h3c95891d_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

extern const VlWide<10>/*319:0*/ Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((4U 
                                                 >= 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 ? 
                                                ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                                                 >> 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 : (IData)(vlSelf->g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96565c__0))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0x1fU 
                                              & ((IData)(1U) 
                                                 << 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.commit.g_commit_arbs[0].commit_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[0U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[1U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[2U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[3U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[4U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[5U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[6U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[7U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[8U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x400000U & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x7fffffU & (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[9U] 
                               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]);
    } else if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x400000U & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 4U));
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                     << 1U)) | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                       << 1U)) | ((4U 
                                                   & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                      << 1U)) 
                                                  | (2U 
                                                     & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                         | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                        << 1U)))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((4U 
                                                 >= 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 ? 
                                                ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                                                 >> 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 : (IData)(vlSelf->g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96565c__0))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0x1fU 
                                              & ((IData)(1U) 
                                                 << 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.commit.g_commit_arbs[0].commit_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[0U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[1U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[2U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[3U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[4U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[5U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[6U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[7U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[8U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x400000U & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x7fffffU & (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[9U] 
                               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]);
    } else if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x400000U & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 4U));
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                     << 1U)) | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                       << 1U)) | ((4U 
                                                   & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                      << 1U)) 
                                                  | (2U 
                                                     & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                         | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                        << 1U)))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((4U 
                                                 >= 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 ? 
                                                ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                                                 >> 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 : (IData)(vlSelf->g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96565c__0))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0x1fU 
                                              & ((IData)(1U) 
                                                 << 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.commit.g_commit_arbs[0].commit_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[0U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[1U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[2U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[3U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[4U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[5U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[6U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[7U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[8U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x400000U & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x7fffffU & (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[9U] 
                               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]);
    } else if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x400000U & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 4U));
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__3\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                     << 1U)) | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                       << 1U)) | ((4U 
                                                   & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                      << 1U)) 
                                                  | (2U 
                                                     & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                         | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)) 
                                                        << 1U)))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((4U 
                                                 >= 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 ? 
                                                ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                                                 >> 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U])
                                                 : (IData)(vlSelf->g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96565c__0))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0x1fU 
                                              & ((IData)(1U) 
                                                 << 
                                                 vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.commit.g_commit_arbs[0].commit_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[0U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[1U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[2U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[3U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[4U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[5U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[6U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[7U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[8U] 
               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x400000U & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x7fffffU & (Vrtlsim_shim__ConstPool__CONST_h3c5d891d_0[9U] 
                               & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]);
    } else if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = ((0x3fffffU & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U]) 
               | (0x400000U & vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1(Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_D133_Az17_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb__1\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__valid_in) 
                 >> 4U));
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[1U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(2U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(1U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[1U]));
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[2U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(3U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(2U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[2U]));
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[3U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(3U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[3U]));
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[4U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(5U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(4U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[4U]));
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[5U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(6U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(5U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[5U]));
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[6U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(7U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(6U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[6U]));
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[7U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(8U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(7U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[7U]));
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[8U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(9U) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(8U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[8U]));
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[9U] 
                     & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                         ? (((0U == (0x1fU & ((IData)(0x133U) 
                                              * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                              [0U])))
                              ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                      ((IData)(0xaU) 
                                       + (0x3fU & (
                                                   ((IData)(0x133U) 
                                                    * 
                                                    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                    [0U]) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x133U) 
                                                * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                [0U]))))) 
                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                               ((IData)(9U) + (0x3fU 
                                               & (((IData)(0x133U) 
                                                   * 
                                                   vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x133U) 
                                            * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                            [0U]))))
                         : vlSelf->__Vxrand_hfda20f8f__0[9U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c95891d_0[0U] 
           & ((0x5feU >= (0x7ffU & ((IData)(0x133U) 
                                    * vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                    [0U]))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x133U) 
                                                     * 
                                                     vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                     [0U])))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__data_in[
                                                  (0x3fU 
                                                   & (((IData)(0x133U) 
                                                       * 
                                                       vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x133U) 
                                                      * 
                                                      vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                      [0U]))))
               : vlSelf->__Vxrand_hfda20f8f__0[0U]));
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = __Vtemp_4[5U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = __Vtemp_4[6U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = __Vtemp_4[7U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = __Vtemp_4[8U];
    vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
            [0U] << 0x16U) | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                               [0U] << 0x13U) | __Vtemp_4[9U]));
}
