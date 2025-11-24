// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3.h"
#include "Vrtlsim_shim_VX_stream_xbar__pi48.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h846c4f4b__0;
    __VdfgTmp_h846c4f4b__0 = 0;
    // Body
    __VdfgTmp_h846c4f4b__0 = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in)))))))));
    vlSelf->ready_in = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                  | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                        | ((0x40U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                           | ((0x20U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                              | ((0x10U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                 | ((8U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                    | ((4U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                       | ((2U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                          | (0U != (IData)(__VdfgTmp_h846c4f4b__0)))))))));
    vlSelf->__PVT__per_cycle_collision = 0U;
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                               & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                  >> 1U)) 
                                              & ((7U 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                     >> 3U)))) 
                                             & ((IData)(vlSelf->ready_in) 
                                                | ((IData)(vlSelf->ready_in) 
                                                   >> 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 2U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 6U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 2U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 3U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 9U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 3U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 4U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xcU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 4U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 5U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xfU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 5U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 6U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x12U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 6U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 7U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x15U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 7U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (6U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xaU 
                                                                 == 
                                                                 (0xaU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xaU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x12U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x12U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x22U 
                                                                 == 
                                                                 (0x22U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x22U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x42U 
                                                                 == 
                                                                 (0x42U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x42U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x82U 
                                                                 == 
                                                                 (0x82U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x82U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x14U 
                                                                 == 
                                                                 (0x14U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x14U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x24U 
                                                                 == 
                                                                 (0x24U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x24U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x44U 
                                                                 == 
                                                                 (0x44U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x44U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x84U 
                                                                 == 
                                                                 (0x84U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x84U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x18U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x28U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x48U 
                                                                 == 
                                                                 (0x48U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x48U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x88U 
                                                                 == 
                                                                 (0x88U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x88U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x50U 
                                                              == 
                                                              (0x50U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x50U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x90U 
                                                              == 
                                                              (0x90U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x90U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x60U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xa0U 
                                                              == 
                                                              (0xa0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xa0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xbfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x40U 
                                             & ((0xffffffc0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 6U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_xbar__pi48___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi48___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0\n"); );
    // Body
    vlSelf->valid_out = (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                          << 7U) | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     << 6U) | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))))))));
    vlSelf->sel_out = ((0xe00000U & ((IData)((vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                              >> 0x30U)) 
                                     << 0x15U)) | (
                                                   (0x1c0000U 
                                                    & ((IData)(
                                                               (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                >> 0x30U)) 
                                                       << 0x12U)) 
                                                   | ((0x38000U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                   >> 0x30U)) 
                                                          << 0xfU)) 
                                                      | ((0x7000U 
                                                          & ((IData)(
                                                                     (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                      >> 0x30U)) 
                                                             << 0xcU)) 
                                                         | ((0xe00U 
                                                             & ((IData)(
                                                                        (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                         >> 0x30U)) 
                                                                << 9U)) 
                                                            | ((0x1c0U 
                                                                & ((IData)(
                                                                           (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                            >> 0x30U)) 
                                                                   << 6U)) 
                                                               | ((0x38U 
                                                                   & ((IData)(
                                                                              (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                               >> 0x30U)) 
                                                                      << 3U)) 
                                                                  | (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 0x30U))))))))));
    vlSelf->data_out[0U] = (IData)((0xffffffffffffULL 
                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r));
    vlSelf->data_out[1U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             << 0x10U) | (IData)(((0xffffffffffffULL 
                                                   & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                  >> 0x20U)));
    vlSelf->data_out[2U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             >> 0x10U) | ((IData)((
                                                   (0xffffffffffffULL 
                                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelf->data_out[3U] = (((0xffffU & (IData)((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))) 
                             | ((IData)(((0xffffffffffffULL 
                                          & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                         >> 0x20U)) 
                                >> 0x10U)) | (0xffff0000U 
                                              & (IData)(
                                                        (0xffffffffffffULL 
                                                         & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
    vlSelf->data_out[4U] = ((0xffffU & (IData)(((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                >> 0x20U))) 
                            | ((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               << 0x10U));
    vlSelf->data_out[5U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             >> 0x10U) | ((IData)((
                                                   (0xffffffffffffULL 
                                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelf->data_out[6U] = (((0xffffU & (IData)((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))) 
                             | ((IData)(((0xffffffffffffULL 
                                          & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                         >> 0x20U)) 
                                >> 0x10U)) | (0xffff0000U 
                                              & (IData)(
                                                        (0xffffffffffffULL 
                                                         & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
    vlSelf->data_out[7U] = ((0xffffU & (IData)(((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                >> 0x20U))) 
                            | ((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               << 0x10U));
    vlSelf->data_out[8U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             >> 0x10U) | ((IData)((
                                                   (0xffffffffffffULL 
                                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelf->data_out[9U] = (((0xffffU & (IData)((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))) 
                             | ((IData)(((0xffffffffffffULL 
                                          & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                         >> 0x20U)) 
                                >> 0x10U)) | (0xffff0000U 
                                              & (IData)(
                                                        (0xffffffffffffULL 
                                                         & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
    vlSelf->data_out[0xaU] = (((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               << 0x10U) | (0xffffU 
                                            & (IData)(
                                                      ((0xffffffffffffULL 
                                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                       >> 0x20U))));
    vlSelf->data_out[0xbU] = (((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               >> 0x10U) | ((IData)(
                                                    ((0xffffffffffffULL 
                                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__collisions_r = 0ULL;
        vlSelf->__PVT_____05Fbuffer_ex220__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0U;
    } else {
        vlSelf->__PVT__collisions_r = (0xfffffffffffULL 
                                       & (vlSelf->__PVT__collisions_r 
                                          + (QData)((IData)(
                                                            (0xfU 
                                                             & VL_COUNTONES_I((IData)(vlSelf->__PVT_____05Fbuffer_ex220__DOT__g_shift_register__DOT__g_shift__DOT__pipe)))))));
        vlSelf->__PVT_____05Fbuffer_ex220__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = vlSelf->__PVT__per_cycle_collision;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h846c4f4b__0;
    __VdfgTmp_h846c4f4b__0 = 0;
    // Body
    __VdfgTmp_h846c4f4b__0 = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in)))))))));
    vlSelf->ready_in = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                  | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                        | ((0x40U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                           | ((0x20U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                              | ((0x10U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                 | ((8U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                    | ((4U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                       | ((2U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                          | (0U != (IData)(__VdfgTmp_h846c4f4b__0)))))))));
    vlSelf->__PVT__per_cycle_collision = 0U;
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                               & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                  >> 1U)) 
                                              & ((7U 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                     >> 3U)))) 
                                             & ((IData)(vlSelf->ready_in) 
                                                | ((IData)(vlSelf->ready_in) 
                                                   >> 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 2U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 6U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 2U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 3U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 9U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 3U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 4U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xcU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 4U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 5U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xfU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 5U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 6U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x12U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 6U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 7U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x15U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 7U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (6U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xaU 
                                                                 == 
                                                                 (0xaU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xaU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x12U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x12U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x22U 
                                                                 == 
                                                                 (0x22U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x22U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x42U 
                                                                 == 
                                                                 (0x42U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x42U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x82U 
                                                                 == 
                                                                 (0x82U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x82U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x14U 
                                                                 == 
                                                                 (0x14U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x14U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x24U 
                                                                 == 
                                                                 (0x24U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x24U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x44U 
                                                                 == 
                                                                 (0x44U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x44U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x84U 
                                                                 == 
                                                                 (0x84U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x84U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x18U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x28U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x48U 
                                                                 == 
                                                                 (0x48U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x48U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x88U 
                                                                 == 
                                                                 (0x88U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x88U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x50U 
                                                              == 
                                                              (0x50U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x50U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x90U 
                                                              == 
                                                              (0x90U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x90U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x60U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xa0U 
                                                              == 
                                                              (0xa0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xa0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xbfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x40U 
                                             & ((0xffffffc0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 6U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h846c4f4b__0;
    __VdfgTmp_h846c4f4b__0 = 0;
    // Body
    __VdfgTmp_h846c4f4b__0 = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in)))))))));
    vlSelf->ready_in = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                  | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                        | ((0x40U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                           | ((0x20U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                              | ((0x10U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                 | ((8U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                    | ((4U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                       | ((2U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                          | (0U != (IData)(__VdfgTmp_h846c4f4b__0)))))))));
    vlSelf->__PVT__per_cycle_collision = 0U;
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                               & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                  >> 1U)) 
                                              & ((7U 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                     >> 3U)))) 
                                             & ((IData)(vlSelf->ready_in) 
                                                | ((IData)(vlSelf->ready_in) 
                                                   >> 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 2U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 6U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 2U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 3U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 9U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 3U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 4U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xcU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 4U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 5U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xfU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 5U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 6U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x12U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 6U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 7U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x15U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 7U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (6U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xaU 
                                                                 == 
                                                                 (0xaU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xaU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x12U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x12U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x22U 
                                                                 == 
                                                                 (0x22U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x22U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x42U 
                                                                 == 
                                                                 (0x42U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x42U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x82U 
                                                                 == 
                                                                 (0x82U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x82U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x14U 
                                                                 == 
                                                                 (0x14U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x14U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x24U 
                                                                 == 
                                                                 (0x24U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x24U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x44U 
                                                                 == 
                                                                 (0x44U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x44U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x84U 
                                                                 == 
                                                                 (0x84U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x84U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x18U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x28U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x48U 
                                                                 == 
                                                                 (0x48U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x48U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x88U 
                                                                 == 
                                                                 (0x88U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x88U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x50U 
                                                              == 
                                                              (0x50U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x50U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x90U 
                                                              == 
                                                              (0x90U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x90U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x60U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xa0U 
                                                              == 
                                                              (0xa0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xa0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xbfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x40U 
                                             & ((0xffffffc0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 6U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi48___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h846c4f4b__0;
    __VdfgTmp_h846c4f4b__0 = 0;
    // Body
    __VdfgTmp_h846c4f4b__0 = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        << 7U)) | (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in)))))))));
    vlSelf->ready_in = ((0x80U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                  | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                        | ((0x40U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                     | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                           | ((0x20U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                        | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                              | ((0x10U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                 | ((8U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                           | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                    | ((4U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                              | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                       | ((2U & ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                 | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                    | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                       | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                          | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                             | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                | ((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__ready_in) 
                                                                   | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__ready_in))))))))) 
                                          | (0U != (IData)(__VdfgTmp_h846c4f4b__0)))))))));
    vlSelf->__PVT__per_cycle_collision = 0U;
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                               & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                  >> 1U)) 
                                              & ((7U 
                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                     >> 3U)))) 
                                             & ((IData)(vlSelf->ready_in) 
                                                | ((IData)(vlSelf->ready_in) 
                                                   >> 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 2U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 6U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 2U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 3U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 9U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 3U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 4U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xcU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 4U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 5U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0xfU)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 5U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 6U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x12U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 6U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfeU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (1U & ((IData)(vlSelf->__PVT__per_cycle_collision) 
                                                   | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in) 
                                                           >> 7U)) 
                                                       & ((7U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                              >> 0x15U)))) 
                                                      & ((IData)(vlSelf->ready_in) 
                                                         | ((IData)(vlSelf->ready_in) 
                                                            >> 7U))))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (6U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xaU 
                                                                 == 
                                                                 (0xaU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xaU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x12U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x12U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x22U 
                                                                 == 
                                                                 (0x22U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x22U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x42U 
                                                                 == 
                                                                 (0x42U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x42U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfdU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (2U & (
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x82U 
                                                                 == 
                                                                 (0x82U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 3U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x82U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 1U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x14U 
                                                                 == 
                                                                 (0x14U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x14U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x24U 
                                                                 == 
                                                                 (0x24U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x24U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x44U 
                                                                 == 
                                                                 (0x44U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x44U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xfbU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x84U 
                                                                 == 
                                                                 (0x84U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 6U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x84U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 2U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xcU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x18U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x28U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0xfU)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x28U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x48U 
                                                                 == 
                                                                 (0x48U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x12U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x48U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xf7U & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                   | ((((IData)(
                                                                (0x88U 
                                                                 == 
                                                                 (0x88U 
                                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                        & ((7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 9U)) 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                               >> 0x15U)))) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x88U 
                                                                   & (IData)(vlSelf->ready_in))))) 
                                                      << 3U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x30U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x50U 
                                                              == 
                                                              (0x50U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x50U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xefU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x90U 
                                                              == 
                                                              (0x90U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xcU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x90U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 4U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x60U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xdfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xa0U 
                                                              == 
                                                              (0xa0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0xfU)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xa0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 5U))));
    vlSelf->__PVT__per_cycle_collision = ((0xbfU & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                          | (0x40U 
                                             & ((0xffffffc0U 
                                                 & (IData)(vlSelf->__PVT__per_cycle_collision)) 
                                                | ((((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_valid_in)))) 
                                                     & ((7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x12U)) 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_bank_idx 
                                                            >> 0x15U)))) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->ready_in))))) 
                                                   << 6U))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_xbar__pi48___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__pi48* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi48___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__0\n"); );
    // Body
    vlSelf->valid_out = (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                          << 7U) | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     << 6U) | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))))))));
    vlSelf->sel_out = ((0xe00000U & ((IData)((vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                              >> 0x30U)) 
                                     << 0x15U)) | (
                                                   (0x1c0000U 
                                                    & ((IData)(
                                                               (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                >> 0x30U)) 
                                                       << 0x12U)) 
                                                   | ((0x38000U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                   >> 0x30U)) 
                                                          << 0xfU)) 
                                                      | ((0x7000U 
                                                          & ((IData)(
                                                                     (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                      >> 0x30U)) 
                                                             << 0xcU)) 
                                                         | ((0xe00U 
                                                             & ((IData)(
                                                                        (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                         >> 0x30U)) 
                                                                << 9U)) 
                                                            | ((0x1c0U 
                                                                & ((IData)(
                                                                           (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                            >> 0x30U)) 
                                                                   << 6U)) 
                                                               | ((0x38U 
                                                                   & ((IData)(
                                                                              (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                               >> 0x30U)) 
                                                                      << 3U)) 
                                                                  | (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 0x30U))))))))));
    vlSelf->data_out[0U] = (IData)((0xffffffffffffULL 
                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r));
    vlSelf->data_out[1U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             << 0x10U) | (IData)(((0xffffffffffffULL 
                                                   & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                  >> 0x20U)));
    vlSelf->data_out[2U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             >> 0x10U) | ((IData)((
                                                   (0xffffffffffffULL 
                                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelf->data_out[3U] = (((0xffffU & (IData)((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))) 
                             | ((IData)(((0xffffffffffffULL 
                                          & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                         >> 0x20U)) 
                                >> 0x10U)) | (0xffff0000U 
                                              & (IData)(
                                                        (0xffffffffffffULL 
                                                         & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
    vlSelf->data_out[4U] = ((0xffffU & (IData)(((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                >> 0x20U))) 
                            | ((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               << 0x10U));
    vlSelf->data_out[5U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             >> 0x10U) | ((IData)((
                                                   (0xffffffffffffULL 
                                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelf->data_out[6U] = (((0xffffU & (IData)((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))) 
                             | ((IData)(((0xffffffffffffULL 
                                          & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                         >> 0x20U)) 
                                >> 0x10U)) | (0xffff0000U 
                                              & (IData)(
                                                        (0xffffffffffffULL 
                                                         & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
    vlSelf->data_out[7U] = ((0xffffU & (IData)(((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                >> 0x20U))) 
                            | ((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               << 0x10U));
    vlSelf->data_out[8U] = (((IData)((0xffffffffffffULL 
                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                             >> 0x10U) | ((IData)((
                                                   (0xffffffffffffULL 
                                                    & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelf->data_out[9U] = (((0xffffU & (IData)((0xffffffffffffULL 
                                                 & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))) 
                             | ((IData)(((0xffffffffffffULL 
                                          & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                         >> 0x20U)) 
                                >> 0x10U)) | (0xffff0000U 
                                              & (IData)(
                                                        (0xffffffffffffULL 
                                                         & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
    vlSelf->data_out[0xaU] = (((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               << 0x10U) | (0xffffU 
                                            & (IData)(
                                                      ((0xffffffffffffULL 
                                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                       >> 0x20U))));
    vlSelf->data_out[0xbU] = (((IData)((0xffffffffffffULL 
                                        & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)) 
                               >> 0x10U) | ((IData)(
                                                    ((0xffffffffffffULL 
                                                      & vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__collisions_r = 0ULL;
        vlSelf->__PVT_____05Fbuffer_ex220__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0U;
    } else {
        vlSelf->__PVT__collisions_r = (0xfffffffffffULL 
                                       & (vlSelf->__PVT__collisions_r 
                                          + (QData)((IData)(
                                                            (0xfU 
                                                             & VL_COUNTONES_I((IData)(vlSelf->__PVT_____05Fbuffer_ex220__DOT__g_shift_register__DOT__g_shift__DOT__pipe)))))));
        vlSelf->__PVT_____05Fbuffer_ex220__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = vlSelf->__PVT__per_cycle_collision;
    }
}
