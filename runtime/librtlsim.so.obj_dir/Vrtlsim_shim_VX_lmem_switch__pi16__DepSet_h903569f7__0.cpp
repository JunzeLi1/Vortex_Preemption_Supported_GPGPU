// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lmem_switch__pi16.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Body
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_ready 
        = ((vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U] & (IData)(vlSelf->__PVT__is_addr_global)) 
           | (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
              [0U] & (IData)(vlSelf->__PVT__is_addr_local)));
}

extern const VlWide<18>/*575:0*/ Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0;
extern const VlWide<9>/*287:0*/ Vrtlsim_shim__ConstPool__CONST_h52851367_0;
extern const VlWide<9>/*287:0*/ Vrtlsim_shim__ConstPool__CONST_h52851f67_0;
extern const VlWide<18>/*575:0*/ Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_11;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                    | (((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                        & ((IData)(vlSelf->__Vcellinp__rsp_arb__valid_in) 
                                           >> (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))) 
                                       & ((((IData)(vlSelf->__VdfgTmp_h3f0d0d4b__0) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.g_lmem_switches[0].lmem_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    vlSelf->__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x20U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0xeU)) 
                                            | ((0x10U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 0xcU)) 
                                               | (8U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x80U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0x12U)) 
                                            | (0x40U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x10U))));
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out)));
    if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    vlSelf->__PVT__is_addr_global = (0U != (0xffU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[0U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[1U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[2U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[3U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[4U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[5U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[6U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[7U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = ((0x800U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
               | (0xfffU & (Vrtlsim_shim__ConstPool__CONST_h52851367_0[8U] 
                            & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]);
    } else {
        if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                = ((0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
                   | (0x80000U & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
                = ((0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x800U & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]));
        }
    }
    vlSelf->__VdfgTmp_h3f0d0d4b__0 = (IData)((2U == (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    __Vtemp_8[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0U] 
                                       >> 2U)) | (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                                             >> 0x20U)))));
    __Vtemp_8[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_8[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_8[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_8[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_8[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_8[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_8[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_8[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_8[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_8[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_8[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_8[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_8[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_8[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_8[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_8[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_11[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(1U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[(0x1fU & (((IData)(0x10aU) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                 >> 5U))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(2U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(1U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(3U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(2U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(4U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(3U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(5U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(4U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(6U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(5U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(7U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(6U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(8U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(7U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(9U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(8U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_11[0U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[0U];
        __Vtemp_11[1U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[1U];
        __Vtemp_11[2U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[2U];
        __Vtemp_11[3U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[3U];
        __Vtemp_11[4U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[4U];
        __Vtemp_11[5U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[5U];
        __Vtemp_11[6U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[6U];
        __Vtemp_11[7U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[7U];
        __Vtemp_11[8U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[8U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_11[0U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_11[1U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_11[2U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_11[3U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_11[4U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_11[5U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_11[6U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_11[7U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_11[8U])));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1\n"); );
    // Body
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
    } else if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0x80000U & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
    }
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelf->__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2\n"); );
    // Body
    vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__Vcellout__stream_unpack__ready_in;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Body
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_ready 
        = ((vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U] & (IData)(vlSelf->__PVT__is_addr_global)) 
           | (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
              [0U] & (IData)(vlSelf->__PVT__is_addr_local)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_11;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                    | (((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                        & ((IData)(vlSelf->__Vcellinp__rsp_arb__valid_in) 
                                           >> (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))) 
                                       & ((((IData)(vlSelf->__VdfgTmp_h3f0d0d4b__0) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.g_lmem_switches[0].lmem_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    vlSelf->__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x20U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0xeU)) 
                                            | ((0x10U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 0xcU)) 
                                               | (8U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x80U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0x12U)) 
                                            | (0x40U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x10U))));
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                   >> 1U)));
    if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    vlSelf->__PVT__is_addr_global = (0U != (0xffU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[0U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[1U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[2U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[3U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[4U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[5U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[6U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[7U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = ((0x800U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
               | (0xfffU & (Vrtlsim_shim__ConstPool__CONST_h52851367_0[8U] 
                            & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]);
    } else {
        if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                = ((0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
                   | (0x80000U & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
                = ((0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x800U & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]));
        }
    }
    vlSelf->__VdfgTmp_h3f0d0d4b__0 = (IData)((2U == (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    __Vtemp_8[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[8U] 
                                       >> 6U)) | (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                                             >> 0x20U)))));
    __Vtemp_8[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_8[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_8[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_8[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_8[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_8[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_8[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_8[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_8[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_8[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_8[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_8[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_8[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_8[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_8[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_8[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_11[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(1U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[(0x1fU & (((IData)(0x10aU) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                 >> 5U))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(2U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(1U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(3U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(2U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(4U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(3U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(5U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(4U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(6U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(5U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(7U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(6U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(8U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(7U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(9U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(8U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_11[0U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[0U];
        __Vtemp_11[1U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[1U];
        __Vtemp_11[2U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[2U];
        __Vtemp_11[3U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[3U];
        __Vtemp_11[4U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[4U];
        __Vtemp_11[5U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[5U];
        __Vtemp_11[6U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[6U];
        __Vtemp_11[7U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[7U];
        __Vtemp_11[8U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[8U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_11[0U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_11[1U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_11[2U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_11[3U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_11[4U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_11[5U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_11[6U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_11[7U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_11[8U])));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1\n"); );
    // Body
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
    } else if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0x80000U & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
    }
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelf->__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2\n"); );
    // Body
    vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__Vcellout__stream_unpack__ready_in;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Body
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_ready 
        = ((vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U] & (IData)(vlSelf->__PVT__is_addr_global)) 
           | (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
              [0U] & (IData)(vlSelf->__PVT__is_addr_local)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_11;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                    | (((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                        & ((IData)(vlSelf->__Vcellinp__rsp_arb__valid_in) 
                                           >> (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))) 
                                       & ((((IData)(vlSelf->__VdfgTmp_h3f0d0d4b__0) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.mem_unit.g_lmem_switches[0].lmem_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    vlSelf->__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x20U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0xeU)) 
                                            | ((0x10U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 0xcU)) 
                                               | (8U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x80U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0x12U)) 
                                            | (0x40U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x10U))));
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                   >> 2U)));
    if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    vlSelf->__PVT__is_addr_global = (0U != (0xffU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[0U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[1U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[2U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[3U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[4U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[5U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[6U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[7U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = ((0x800U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
               | (0xfffU & (Vrtlsim_shim__ConstPool__CONST_h52851367_0[8U] 
                            & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]);
    } else {
        if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                = ((0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
                   | (0x80000U & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
                = ((0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x800U & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]));
        }
    }
    vlSelf->__VdfgTmp_h3f0d0d4b__0 = (IData)((2U == (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    __Vtemp_8[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x10U] 
                                       >> 0xaU)) | 
                                (1U & (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                               >> 0x20U)))));
    __Vtemp_8[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_8[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_8[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_8[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_8[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_8[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_8[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_8[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_8[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_8[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_8[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_8[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_8[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_8[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_8[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_8[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_11[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(1U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[(0x1fU & (((IData)(0x10aU) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                 >> 5U))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(2U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(1U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(3U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(2U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(4U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(3U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(5U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(4U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(6U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(5U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(7U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(6U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(8U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(7U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(9U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(8U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_11[0U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[0U];
        __Vtemp_11[1U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[1U];
        __Vtemp_11[2U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[2U];
        __Vtemp_11[3U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[3U];
        __Vtemp_11[4U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[4U];
        __Vtemp_11[5U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[5U];
        __Vtemp_11[6U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[6U];
        __Vtemp_11[7U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[7U];
        __Vtemp_11[8U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[8U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_11[0U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_11[1U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_11[2U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_11[3U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_11[4U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_11[5U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_11[6U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_11[7U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_11[8U])));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1\n"); );
    // Body
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
    } else if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0x80000U & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
    }
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelf->__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2\n"); );
    // Body
    vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__Vcellout__stream_unpack__ready_in;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Body
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_ready 
        = ((vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U] & (IData)(vlSelf->__PVT__is_addr_global)) 
           | (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
              [0U] & (IData)(vlSelf->__PVT__is_addr_local)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<9>/*287:0*/ __Vtemp_11;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                    | (((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                        & ((IData)(vlSelf->__Vcellinp__rsp_arb__valid_in) 
                                           >> (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))) 
                                       & ((((IData)(vlSelf->__VdfgTmp_h3f0d0d4b__0) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.mem_unit.g_lmem_switches[0].lmem_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
                }
            }
        }
    }
    vlSelf->__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x20U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0xeU)) 
                                            | ((0x10U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 0xcU)) 
                                               | (8U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((0x80U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 0x12U)) 
                                            | (0x40U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x10U))));
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                   >> 3U)));
    if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    vlSelf->__PVT__is_addr_global = (0U != (0xffU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                             << 0x15U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               >> 0xbU)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[0U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[1U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[2U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[3U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[4U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[5U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[6U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h52851367_0[7U] 
               & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = ((0x800U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
               | (0xfffU & (Vrtlsim_shim__ConstPool__CONST_h52851367_0[8U] 
                            & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]);
    } else {
        if (vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                = ((0x7ffffU & vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
                   | (0x80000U & vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
            [0U]) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
                = ((0x7ffU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x800U & vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]));
        }
    }
    vlSelf->__VdfgTmp_h3f0d0d4b__0 = (IData)((2U == (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    __Vtemp_8[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x18U] 
                                       >> 0xeU)) | 
                                (1U & (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                               >> 0x20U)))));
    __Vtemp_8[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_8[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_8[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_8[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_8[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_8[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_8[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_8[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_dout 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_8[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_8[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_8[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_8[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_8[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_8[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_8[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_8[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_11[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(1U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[(0x1fU & (((IData)(0x10aU) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                 >> 5U))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(2U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(1U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(3U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(2U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(4U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(3U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(5U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(4U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(6U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(5U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(7U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(6U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(8U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(7U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_11[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                            ? 0U : (__Vtemp_8[((IData)(9U) 
                                               + (0x1fU 
                                                  & (((IData)(0x10aU) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                     >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x10aU) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                          | (__Vtemp_8[((IData)(8U) 
                                        + (0x1fU & 
                                           (((IData)(0x10aU) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                            >> 5U)))] 
                             >> (0x1fU & ((IData)(0x10aU) 
                                          * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_11[0U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[0U];
        __Vtemp_11[1U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[1U];
        __Vtemp_11[2U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[2U];
        __Vtemp_11[3U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[3U];
        __Vtemp_11[4U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[4U];
        __Vtemp_11[5U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[5U];
        __Vtemp_11[6U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[6U];
        __Vtemp_11[7U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[7U];
        __Vtemp_11[8U] = vlSelf->rsp_arb__DOT____Vxrand_h1d68d900__0[8U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_11[0U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_11[1U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_11[2U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_11[3U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_11[4U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_11[5U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_11[6U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_11[7U]);
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_11[8U])));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__1\n"); );
    // Body
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
        [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[1U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[2U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[3U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[4U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[5U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[6U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[7U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[7U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[8U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[8U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[9U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xaU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xbU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xcU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xdU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xeU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0xfU] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
            = (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x10U] 
               & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U]);
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x80000U & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xfffffU & (Vrtlsim_shim__ConstPool__CONST_h6e92a94f_0[0x11U] 
                              & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U])));
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = (0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]);
    } else if (vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
               [0U]) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0x7ffffU & vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0x80000U & vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U]));
    }
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelf->__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__2\n"); );
    // Body
    vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__Vcellout__stream_unpack__ready_in;
}
