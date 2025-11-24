// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N8_O3.h"
#include "Vrtlsim_shim__Syms.h"

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N8_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__4(Vrtlsim_shim_VX_fpu_dpi__N8_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N8_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__4\n"); );
    // Body
    if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
            = ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs));
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
            = ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs));
    } else {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
            = ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests));
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
            = ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests));
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 2U))));
    vlSelf->__PVT__g_fma__DOT__fma_ready = (1U & ((~ 
                                                   (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U] 
                                                    >> 0x1bU)) 
                                                  | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelf->__Vcellinp__div_sqrt_arb__ready_out = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U));
    vlSelf->__PVT__g_fncp__DOT__fncp_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                                   >> 0xfU)) 
                                               | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 3U))));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_valid) 
                                             & (IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__g_fma__DOT__fma_valid) 
                                           & (IData)(vlSelf->__PVT__g_fma__DOT__fma_ready));
    vlSelf->__PVT__div_ready_in = (1U & ((~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x7bU] 
                                             >> 8U)) 
                                         | ((IData)(vlSelf->__Vcellinp__div_sqrt_arb__ready_out) 
                                            & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x7bU] 
                                               >> 8U))));
    vlSelf->__PVT__sqrt_ready_in = (1U & ((~ (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x52U] 
                                              >> 5U)) 
                                          | ((IData)(vlSelf->__Vcellinp__div_sqrt_arb__ready_out) 
                                             & (IData)(vlSelf->__VdfgTmp_h0b103dc0__0))));
    vlSelf->__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__g_fncp__DOT__fncp_valid) 
                                             & (IData)(vlSelf->__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_h7a492887__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_hf8470200__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_h4de11764__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[0U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fcvt__DOT__fflags_itof));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[0U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fcvt__DOT__fflags_utof));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[0U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fcvt__DOT__fflags_ftou));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[0U]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[2U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[2U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[2U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[2U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 5U)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[2U]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[4U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[4U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[4U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[4U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[4U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[4U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[4U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[4U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[4U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 0xaU)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[4U]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[6U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[6U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[6U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[6U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[6U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[6U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[6U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[6U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[6U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 0xfU)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[6U]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[8U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[8U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[8U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[8U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[8U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[8U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[8U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[8U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[8U];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 0x14U)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[8U]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0xaU] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_itof__32__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0xaU] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_utof__33__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xaU] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xaU] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_ftou__35__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xaU] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_f2f__36__result 
                                                            >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[0xaU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[0xaU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xaU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xaU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 0x19U)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xaU]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0xcU] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_itof__32__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0xcU] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_utof__33__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xcU] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xcU] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_ftou__35__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xcU] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_f2f__36__result 
                                                            >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[0xcU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[0xcU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xcU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xcU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 0x1eU)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xcU]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0xeU] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_itof__32__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hc6ecf2f4__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hc6ecf2f4__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0xeU] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_utof__33__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h7a492887__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h7a492887__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xeU] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hf8470200__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hf8470200__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xeU] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_ftou__35__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h4de11764__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h4de11764__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xeU] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_f2f__36__result 
                                                            >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[0xeU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[0xeU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0xeU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[0xeU];
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                                            >> 0x23U)));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[0xeU]
                : 0U);
        vlSelf->__Vlvbound_hd91558f6__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd91558f6__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xffffffffe0ULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | (IData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xffffffffe0ULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | (IData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xffffffffe0ULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | (IData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xffffffffe0ULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | (IData)((IData)(vlSelf->__Vlvbound_h010e4292__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xffffffffe0ULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | (IData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fadd));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fsub));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fmul));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fmadd));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fmsub));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fnmadd));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[0U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fnmsub));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xffffffffe0ULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | (IData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xfffffffc1fULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xfffffffc1fULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xfffffffc1fULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffffffc1fULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffffffc1fULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 5U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 5U)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[2U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 5U)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xfffffffc1fULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[4U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xffffff83ffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[4U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xffffff83ffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[4U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xffffff83ffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xffffff83ffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xffffff83ffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 0xaU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 0xaU)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[4U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 0xaU)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xffffff83ffULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[6U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xfffff07fffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[6U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xfffff07fffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[6U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xfffff07fffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffff07fffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffff07fffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 0xfU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 0xfU)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[6U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 0xfU)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xfffff07fffULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[8U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xfffe0fffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[8U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xfffe0fffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[8U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xfffe0fffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[8U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[8U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[8U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[9U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffe0fffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[8U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[9U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffe0fffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 0x14U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 0x14U)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[8U];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 0x14U)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[4U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xfffe0fffffULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0xaU] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fadd__23__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xffc1ffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0xaU] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsub__24__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xffc1ffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0xaU] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fmul__25__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xffc1ffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0xaU] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0xaU] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fnmadd__28__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xffc1ffffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fnmsub__29__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xffc1ffffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 0x19U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 0x19U)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xaU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 0x19U)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[5U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xffc1ffffffULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0xcU] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fadd__23__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xf83fffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0xcU] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsub__24__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xf83fffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0xcU] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fmul__25__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xf83fffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0xcU] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0xcU] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fnmadd__28__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xf83fffffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fnmsub__29__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xf83fffffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 0x1eU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 0x1eU)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xcU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 0x1eU)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[6U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xf83fffffffULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0xeU] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fadd__23__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hc0c5948c__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0x7ffffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0c5948c__0)) 
                                                 << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0xeU] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsub__24__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h2e9052e4__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0x7ffffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h2e9052e4__0)) 
                                                 << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0xeU] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fmul__25__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h16f1c727__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0x7ffffffffULL 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h16f1c727__0)) 
                                                 << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0xeU] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hb7683f4f__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hb7683f4f__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0xeU] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h99a2a95b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h99a2a95b__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fnmadd__28__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_h010e4292__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0x7ffffffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_h010e4292__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fnmsub__29__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_hae7f62dc__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0x7ffffffffULL 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((QData)((IData)(vlSelf->__Vlvbound_hae7f62dc__0)) 
                                                   << 0x23U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                                            >> 0x23U)));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[0xeU];
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & (IData)(
                                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                                            >> 0x23U)));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[7U] = 0U;
        vlSelf->__Vlvbound_hdc22cc53__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0x7ffffffffULL 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((QData)((IData)(vlSelf->__Vlvbound_hdc22cc53__0)) 
                                                << 0x23U));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_valid) 
                                             & (IData)(vlSelf->__PVT__div_ready_in));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                               & (IData)(vlSelf->__PVT__sqrt_ready_in));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xffffffffe0ULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | (IData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xffffffffe0ULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | (IData)((IData)(vlSelf->__Vlvbound_h80423a93__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xffffffffe0ULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | (IData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_hd2362817__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xfffffffc1fULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xfffffffc1fULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xfffffffc1fULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[4U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[4U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xffffff83ffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[4U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xffffff83ffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[4U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xffffff83ffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[4U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[4U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[6U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[6U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xfffff07fffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[6U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xfffff07fffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[6U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xfffff07fffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[6U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[6U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[8U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[9U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[8U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xfffe0fffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[8U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xfffe0fffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[8U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[9U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xfffe0fffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[8U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[8U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[8U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[9U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[8U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[9U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[8U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[9U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fclss__37__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0xaU] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fle__38__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xffc1ffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0xaU] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_flt__39__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xffc1ffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0xaU] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0xbU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_feq__40__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xffc1ffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0xaU] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmin__41__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0xaU] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmax__42__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnj__43__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnjn__44__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnjx__45__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fclss__37__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0xcU] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fle__38__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xf83fffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0xcU] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_flt__39__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xf83fffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0xcU] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0xdU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_feq__40__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xf83fffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0xcU] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmin__41__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0xcU] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmax__42__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnj__43__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnjn__44__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnjx__45__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fclss__37__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0xeU] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fle__38__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h0086e09f__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0x7ffffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h0086e09f__0)) 
                                                 << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0xeU] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_flt__39__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_h80423a93__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0x7ffffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_h80423a93__0)) 
                                                 << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0xeU] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0xfU] = (IData)(
                                                           (vlSelf->__Vtask_dpi_feq__40__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hc0443ef1__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0x7ffffffffULL 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((QData)((IData)(vlSelf->__Vlvbound_hc0443ef1__0)) 
                                                 << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0xeU] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmin__41__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h2cd705fa__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_h2cd705fa__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0xeU] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fmax__42__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_hd2362817__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_hd2362817__0)) 
                                                  << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnj__43__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnjn__44__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fsgnjx__45__result 
                   >> 0x20U));
    vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 1U)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 2U)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 3U)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 6U)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 7U)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 8U)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0xbU)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0xcU)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0xdU)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x10U)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x11U)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x12U)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x13U)) << 4U))));
    }
    vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__g_fma__DOT__fflags_fma))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 1U)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 2U)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 3U)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 6U)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 7U)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 8U)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0xbU)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0xcU)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0xdU)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x10U)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x11U)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x12U)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x14U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x15U)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x16U)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x17U)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x18U)) << 4U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x14U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x15U)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x16U)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x17U)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x19U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1aU)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1bU)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1cU)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x1dU)) << 4U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x19U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1aU)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1bU)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1cU)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x1dU)) << 4U))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x1eU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1fU)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x20U)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x21U)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x22U)) << 4U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x1eU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1fU)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x20U)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x21U)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x22U)) << 4U))));
    }
    if ((0x1000000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x23U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x24U)) << 1U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x25U)) << 2U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x26U)) << 3U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                      >> 0x27U))) << 4U));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x23U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x24U)) << 1U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x25U)) << 2U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x26U)) << 3U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                      >> 0x27U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffffffffe0ULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | (IData)((IData)(vlSelf->__Vlvbound_he532869c__0)));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffffffc1fULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 5U));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[4U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffffff83ffULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 0xaU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[6U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffff07fffULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 0xfU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[6U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[8U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[9U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffe0fffffULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 0x14U));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[4U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[8U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xaU] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xbU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffc1ffffffULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 0x19U));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[5U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xaU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xcU] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xdU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xf83fffffffULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 0x1eU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[6U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xcU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xeU] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xfU] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_he532869c__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0x7ffffffffULL 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((QData)((IData)(vlSelf->__Vlvbound_he532869c__0)) 
                                                  << 0x23U));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[7U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0xeU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xffffffffe0ULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | (IData)((IData)(vlSelf->__Vlvbound_h0c600381__0)));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xfffffffc1fULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 5U));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[4U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xffffff83ffULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 0xaU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[6U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xfffff07fffULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 0xfU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[6U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[8U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[9U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xfffe0fffffULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 0x14U));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[4U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[8U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xaU] 
        = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xbU] 
        = (IData)((vlSelf->__Vtask_dpi_fsqrt__31__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xffc1ffffffULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 0x19U));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[5U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xaU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xcU] 
        = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xdU] 
        = (IData)((vlSelf->__Vtask_dpi_fsqrt__31__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xf83fffffffULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 0x1eU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[6U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xcU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xeU] 
        = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xfU] 
        = (IData)((vlSelf->__Vtask_dpi_fsqrt__31__result 
                   >> 0x20U));
    vlSelf->__Vlvbound_h0c600381__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0x7ffffffffULL 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((QData)((IData)(vlSelf->__Vlvbound_h0c600381__0)) 
                                                    << 0x23U));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[7U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0xeU];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] = vlSelf->__Vxrand_h4196b273__0[0U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] = vlSelf->__Vxrand_h4196b273__0[1U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] = vlSelf->__Vxrand_h4196b273__0[2U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] = vlSelf->__Vxrand_h4196b273__0[3U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] = vlSelf->__Vxrand_h4196b273__0[4U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] = vlSelf->__Vxrand_h4196b273__0[5U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] = vlSelf->__Vxrand_h4196b273__0[6U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] = vlSelf->__Vxrand_h4196b273__0[7U];
    vlSelf->__PVT__g_fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h7c8dd175__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)))) {
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[0xeU];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0xeU];
            }
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__g_fncp__DOT__fflags_fle));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffffffe0ULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)((IData)(vlSelf->__Vlvbound_h76311d57__0)));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 5U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffffffc1fULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 5U));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 0xaU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffff83ffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 0xaU));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 0xfU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffff07fffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 0xfU));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 0x14U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0fffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 0x14U));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 0x19U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1ffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 0x19U));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 0x1eU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83fffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 0x1eU));
            vlSelf->__Vlvbound_h76311d57__0 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                          >> 0x23U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7ffffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__0)) 
                      << 0x23U));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[0xeU];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0xeU];
            }
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__g_fncp__DOT__fflags_flt));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffffffe0ULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)((IData)(vlSelf->__Vlvbound_h76311d57__1)));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 5U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffffffc1fULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 5U));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 0xaU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffff83ffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 0xaU));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 0xfU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffff07fffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 0xfU));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 0x14U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0fffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 0x14U));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 0x19U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1ffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 0x19U));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 0x1eU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83fffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 0x1eU));
            vlSelf->__Vlvbound_h76311d57__1 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                          >> 0x23U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7ffffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__1)) 
                      << 0x23U));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[0xeU];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0xeU];
            }
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__g_fncp__DOT__fflags_feq));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffffffe0ULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)((IData)(vlSelf->__Vlvbound_h76311d57__2)));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 5U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffffffc1fULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 5U));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 0xaU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffff83ffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 0xaU));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 0xfU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffff07fffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 0xfU));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 0x14U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0fffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 0x14U));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 0x19U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1ffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 0x19U));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 0x1eU)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83fffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 0x1eU));
            vlSelf->__Vlvbound_h76311d57__2 = (0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                          >> 0x23U)));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7ffffffffULL & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__2)) 
                      << 0x23U));
        } else {
            if ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[0xeU];
            } else if ((4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[0xeU];
            } else if ((5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[0xeU];
            } else if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[0xeU];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[6U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[8U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[0xaU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[0xcU];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[0xeU];
            }
            if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                        if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(vlSelf->__PVT__g_fncp__DOT__fflags_fmin));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffffffe0ULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)((IData)(vlSelf->__Vlvbound_h76311d57__3)));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 5U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffffffc1fULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 5U));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0xaU)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffff83ffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0xfU)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffff07fffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 0xfU));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x14U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0fffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 0x14U));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x19U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1ffffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 0x19U));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x1eU)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83fffffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 0x1eU));
                            vlSelf->__Vlvbound_h76311d57__3 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x23U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7ffffffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__3)) 
                                      << 0x23U));
                        } else {
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(vlSelf->__PVT__g_fncp__DOT__fflags_fmax));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffffffe0ULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)((IData)(vlSelf->__Vlvbound_h76311d57__4)));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 5U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffffffc1fULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 5U));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0xaU)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffff83ffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0xfU)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffff07fffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 0xfU));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x14U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0fffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 0x14U));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x19U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1ffffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 0x19U));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x1eU)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83fffffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 0x1eU));
                            vlSelf->__Vlvbound_h76311d57__4 
                                = (0x1fU & (IData)(
                                                   (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x23U)));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7ffffffffULL 
                                    & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelf->__Vlvbound_h76311d57__4)) 
                                      << 0x23U));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[0U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            << 5U) | (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[1U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[3U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[4U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[5U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[4U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[6U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[5U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[7U] 
        = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[6U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fcvt__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[7U] 
                                 >> 0x1bU)));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[0U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[0U] 
            << 5U) | (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[1U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[0U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[1U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[2U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[1U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[2U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[3U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[2U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[3U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[4U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[3U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[4U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[5U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[4U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[5U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[6U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[5U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[6U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[7U] 
        = ((vlSelf->__PVT__g_fma__DOT__result_fma[6U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[7U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fma__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelf->__PVT__g_fma__DOT__fma_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelf->__PVT__g_fma__DOT__result_fma[7U] 
                                 >> 0x1bU)));
    vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 1U)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 2U)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 3U)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 6U)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 7U)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 8U)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0xbU)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0xcU)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0xdU)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x10U)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x11U)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x12U)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x14U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x15U)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x16U)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x17U)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x19U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1aU)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1bU)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1cU)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x1dU)) << 4U))));
    }
    vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 1U)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 2U)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 3U)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 6U)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 7U)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 8U)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0xbU)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0xcU)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0xdU)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x10U)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x11U)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x12U)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x14U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x15U)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x16U)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x17U)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x19U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1aU)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1bU)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1cU)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x1dU)) << 4U))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x1eU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1fU)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x20U)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x21U)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x22U)) << 4U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x1eU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1fU)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x20U)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x21U)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x22U)) << 4U))));
    }
    vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 1U)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 2U)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 3U)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 6U)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 7U)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 8U)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0xbU)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0xcU)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0xdU)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x10U)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x11U)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x12U)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x14U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x15U)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x16U)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x17U)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x19U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1aU)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1bU)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1cU)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x1dU)) << 4U))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x1eU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1fU)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x20U)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x21U)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x22U)) << 4U))));
    }
    if ((0x1000000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x23U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x24U)) << 1U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x25U)) << 2U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x26U)) << 3U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                      >> 0x27U))) << 4U));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x23U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x24U)) << 1U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x25U)) << 2U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x26U)) << 3U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                      >> 0x27U))) << 4U));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x23U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x24U)) << 1U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x25U)) << 2U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x26U)) << 3U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                      >> 0x27U))) << 4U));
    }
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[0U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
            << 5U) | (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[1U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[3U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[4U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[4U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[5U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[4U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[5U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[6U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[5U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[6U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[7U] 
        = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[6U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[7U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fdiv__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[7U] 
                                 >> 0x1bU)));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[0U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
            << 5U) | (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[1U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[3U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[4U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[4U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[5U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[4U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[5U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[6U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[5U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[6U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[7U] 
        = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[6U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[7U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[7U] 
                                 >> 0x1bU)));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[0U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
            << 5U) | (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[1U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[3U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[4U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[5U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[4U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[6U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[5U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[7U] 
        = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[6U] 
            >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                         << 5U));
    vlSelf->__Vcellinp__g_fncp__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelf->__PVT__g_fncp__DOT__fncp_valid) 
            << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 6U) | ((((6U <= (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
                                   | (IData)(vlSelf->__PVT__is_fcmp)) 
                                  << 5U) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[7U] 
                                            >> 0x1bU))));
}
