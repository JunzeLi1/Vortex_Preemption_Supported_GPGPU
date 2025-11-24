// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                   << 1U))))))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = (0xffU & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
                     ? ((IData)(1U) << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r))
                     : ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
                        & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in))));
    vlSelf->ready_in = ((0xffffff80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                         << 7U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                        | ((0xffffffc0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 6U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                           | ((0xffffffe0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                               << 5U) 
                                              & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                              | ((0xfffffff0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  << 4U) 
                                                 & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                 | ((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                       << 3U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                    | ((0xfffffffcU 
                                        & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 2U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                       | (3U & ((- (IData)((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__scoreboard_ready_in) 
                    >> (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                              >> 9U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                                                >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0xffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.scoreboard.out_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        } else {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
        }
    }
    if (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 4U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 5U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 6U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 7U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                   << 1U))))))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = (0xffU & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
                     ? ((IData)(1U) << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r))
                     : ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
                        & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in))));
    vlSelf->ready_in = ((0xffffff80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                         << 7U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                        | ((0xffffffc0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 6U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                           | ((0xffffffe0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                               << 5U) 
                                              & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                              | ((0xfffffff0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  << 4U) 
                                                 & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                 | ((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                       << 3U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                    | ((0xfffffffcU 
                                        & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 2U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                       | (3U & ((- (IData)((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__scoreboard_ready_in) 
                    >> (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                              >> 9U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                                                >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0xffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.scoreboard.out_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        } else {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
        }
    }
    if (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 4U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 5U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 6U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 7U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                   << 1U))))))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = (0xffU & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
                     ? ((IData)(1U) << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r))
                     : ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
                        & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in))));
    vlSelf->ready_in = ((0xffffff80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                         << 7U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                        | ((0xffffffc0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 6U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                           | ((0xffffffe0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                               << 5U) 
                                              & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                              | ((0xfffffff0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  << 4U) 
                                                 & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                 | ((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                       << 3U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                    | ((0xfffffffcU 
                                        & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 2U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                       | (3U & ((- (IData)((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__scoreboard_ready_in) 
                    >> (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                              >> 9U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                                                >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0xffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.scoreboard.out_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        } else {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
        }
    }
    if (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 4U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 5U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 6U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 7U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)) 
                                                   << 1U))))))));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = (0xffU & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
                     ? ((IData)(1U) << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r))
                     : ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
                        & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in))));
    vlSelf->ready_in = ((0xffffff80U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                         << 7U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                        | ((0xffffffc0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 6U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                           | ((0xffffffe0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                               << 5U) 
                                              & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                              | ((0xfffffff0U & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  << 4U) 
                                                 & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                 | ((0xfffffff8U & 
                                     (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                       << 3U) & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                    | ((0xfffffffcU 
                                        & (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 2U) 
                                           & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                       | (3U & ((- (IData)((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__scoreboard_ready_in) 
                    >> (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                              >> 9U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in)))) 
                                    | ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                        [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                                                >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                       & ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0xffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.scoreboard.out_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        } else {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
        }
    }
    if (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r = 0U;
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] & (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)));
        }
        if ((vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6a_Az190_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    // Body
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 4U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 5U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 6U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 7U));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x34fU >= (0x3ffU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0x1fU & (((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0x1fU & (((IData)(0x6aU) 
                                                   * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0x1fU & (((IData)(0x6aU) 
                                            * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x6aU) * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelf->__Vxrand_h275508a7__0[0U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelf->__Vxrand_h275508a7__0[1U];
        vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelf->__Vxrand_h275508a7__0[2U];
    }
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 0xaU) | (0x3ffU & ((0x34fU >= (0x3ffU 
                                              & ((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                        ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                                ((IData)(4U) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(0x6aU) 
                                                      * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x6aU) 
                                                     * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0x6aU) 
                                                 * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x6aU) 
                                                * (IData)(vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                   : vlSelf->__Vxrand_h275508a7__0[3U])));
}
