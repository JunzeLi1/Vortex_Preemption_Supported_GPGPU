// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"
#include "Vvortex_afu_shim_VX_scoreboard_if.h"
#include "Vvortex_afu_shim__Syms.h"

void Vvortex_afu_shim_VX_scoreboard_if___ctor_var_reset(Vvortex_afu_shim_VX_scoreboard_if* vlSelf);

Vvortex_afu_shim_VX_scoreboard_if::Vvortex_afu_shim_VX_scoreboard_if(Vvortex_afu_shim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvortex_afu_shim_VX_scoreboard_if___ctor_var_reset(this);
}

void Vvortex_afu_shim_VX_scoreboard_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvortex_afu_shim_VX_scoreboard_if::~Vvortex_afu_shim_VX_scoreboard_if() {
}
