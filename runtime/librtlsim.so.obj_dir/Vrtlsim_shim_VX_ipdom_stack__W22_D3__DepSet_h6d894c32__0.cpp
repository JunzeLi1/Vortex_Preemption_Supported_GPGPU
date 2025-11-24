// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_ipdom_stack__W22_D3.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    CData/*4:0*/ __Vdlyvdim0__ipdom_store__DOT__ram__v0;
    __Vdlyvdim0__ipdom_store__DOT__ram__v0 = 0;
    VlWide<3>/*68:0*/ __Vdlyvval__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __Vdlyvval__ipdom_store__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ipdom_store__DOT__ram__v0;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (0x10U | (0xfU & vlSelf->__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            __Vdlyvval__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U];
            __Vdlyvset__ipdom_store__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ipdom_store__DOT__ram__v0 
                = vlSelf->__PVT__waddr;
        }
    }
    vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelf->__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelf->__PVT__waddr;
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][2U];
        } else {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[2U];
        }
        if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__Vdlyvset__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][0U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][1U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][2U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelf->wr_ptr = (((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                       << 0xeU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                    << 0xcU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelf->__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                             ? ((0x18U & (((IData)(vlSelf->wr_ptr) 
                                           >> (0xfU 
                                               & VL_SHIFTL_III(4,4,32, 
                                                               (7U 
                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 1U) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x1fU))), 1U))) 
                                          << 3U)) | 
                                (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))))
                             : (IData)(__PVT__raddr));
    if (((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][2U];
    } else {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    CData/*4:0*/ __Vdlyvdim0__ipdom_store__DOT__ram__v0;
    __Vdlyvdim0__ipdom_store__DOT__ram__v0 = 0;
    VlWide<3>/*68:0*/ __Vdlyvval__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __Vdlyvval__ipdom_store__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ipdom_store__DOT__ram__v0;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (0x10U | (0xfU & vlSelf->__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            __Vdlyvval__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U];
            __Vdlyvset__ipdom_store__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ipdom_store__DOT__ram__v0 
                = vlSelf->__PVT__waddr;
        }
    }
    vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelf->__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelf->__PVT__waddr;
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][2U];
        } else {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[2U];
        }
        if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__Vdlyvset__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][0U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][1U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][2U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelf->wr_ptr = (((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                       << 0xeU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                    << 0xcU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelf->__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                             ? ((0x18U & (((IData)(vlSelf->wr_ptr) 
                                           >> (0xfU 
                                               & VL_SHIFTL_III(4,4,32, 
                                                               (7U 
                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 1U) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x1fU))), 1U))) 
                                          << 3U)) | 
                                (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))))
                             : (IData)(__PVT__raddr));
    if (((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][2U];
    } else {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    CData/*4:0*/ __Vdlyvdim0__ipdom_store__DOT__ram__v0;
    __Vdlyvdim0__ipdom_store__DOT__ram__v0 = 0;
    VlWide<3>/*68:0*/ __Vdlyvval__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __Vdlyvval__ipdom_store__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ipdom_store__DOT__ram__v0;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (0x10U | (0xfU & vlSelf->__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            __Vdlyvval__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U];
            __Vdlyvset__ipdom_store__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ipdom_store__DOT__ram__v0 
                = vlSelf->__PVT__waddr;
        }
    }
    vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelf->__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelf->__PVT__waddr;
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][2U];
        } else {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[2U];
        }
        if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__Vdlyvset__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][0U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][1U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][2U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelf->wr_ptr = (((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                       << 0xeU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                    << 0xcU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelf->__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                             ? ((0x18U & (((IData)(vlSelf->wr_ptr) 
                                           >> (0xfU 
                                               & VL_SHIFTL_III(4,4,32, 
                                                               (7U 
                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 1U) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x1fU))), 1U))) 
                                          << 3U)) | 
                                (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))))
                             : (IData)(__PVT__raddr));
    if (((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][2U];
    } else {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    CData/*4:0*/ __Vdlyvdim0__ipdom_store__DOT__ram__v0;
    __Vdlyvdim0__ipdom_store__DOT__ram__v0 = 0;
    VlWide<3>/*68:0*/ __Vdlyvval__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __Vdlyvval__ipdom_store__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ipdom_store__DOT__ram__v0;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
                }
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdlyvset__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                           & (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name(),64,
                              VL_TIME_UNITED_Q(1),-12);
                    VL_STOP_MT("/home/andyl/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
                }
            }
        }
    }
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U] 
                = vlSelf->__Vcellout__ipdom_store__rdata[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U] 
                = (0x10U | (0xfU & vlSelf->__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            __Vdlyvval__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[0U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[1U];
            __Vdlyvval__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_h1a47a203__0[2U];
            __Vdlyvset__ipdom_store__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ipdom_store__DOT__ram__v0 
                = vlSelf->__PVT__waddr;
        }
    }
    vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelf->__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelf->__PVT__waddr;
        if ((0x17U >= (IData)(vlSelf->__PVT__waddr))) {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->__PVT__ipdom_store__DOT__ram
                [vlSelf->__PVT__waddr][2U];
        } else {
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[0U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[1U];
            vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__0[2U];
        }
        if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelf->__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__Vdlyvset__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][0U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][1U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__Vdlyvdim0__ipdom_store__DOT__ram__v0][2U] 
            = __Vdlyvval__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelf->wr_ptr = (((IData)(vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                       << 0xeU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                    << 0xcU) | (((IData)(vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelf->__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                             ? ((0x18U & (((IData)(vlSelf->wr_ptr) 
                                           >> (0xfU 
                                               & VL_SHIFTL_III(4,4,32, 
                                                               (7U 
                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 1U) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x1fU))), 1U))) 
                                          << 3U)) | 
                                (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))))
                             : (IData)(__PVT__raddr));
    if (((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[__PVT__raddr][2U];
    } else {
        vlSelf->__Vcellout__ipdom_store__rdata[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[0U];
        vlSelf->__Vcellout__ipdom_store__rdata[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[1U];
        vlSelf->__Vcellout__ipdom_store__rdata[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h91116a9f__1[2U];
    }
}
