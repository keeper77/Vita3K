// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <SceDeci4p/exports.h>

EXPORT(int, sceKernelDeci4pClose) {
    return unimplemented("sceKernelDeci4pClose");
}

EXPORT(int, sceKernelDeci4pCreateHostProcess) {
    return unimplemented("sceKernelDeci4pCreateHostProcess");
}

EXPORT(int, sceKernelDeci4pCreateHostProcessAndWait) {
    return unimplemented("sceKernelDeci4pCreateHostProcessAndWait");
}

EXPORT(int, sceKernelDeci4pDisableWatchpoint) {
    return unimplemented("sceKernelDeci4pDisableWatchpoint");
}

EXPORT(int, sceKernelDeci4pEnableWatchpoint) {
    return unimplemented("sceKernelDeci4pEnableWatchpoint");
}

EXPORT(int, sceKernelDeci4pIsProcessAttached) {
    return unimplemented("sceKernelDeci4pIsProcessAttached");
}

EXPORT(int, sceKernelDeci4pOpen) {
    return unimplemented("sceKernelDeci4pOpen");
}

EXPORT(int, sceKernelDeci4pRead) {
    return unimplemented("sceKernelDeci4pRead");
}

EXPORT(int, sceKernelDeci4pRegisterCallback) {
    return unimplemented("sceKernelDeci4pRegisterCallback");
}

EXPORT(int, sceKernelDeci4pWrite) {
    return unimplemented("sceKernelDeci4pWrite");
}

BRIDGE_IMPL(sceKernelDeci4pClose)
BRIDGE_IMPL(sceKernelDeci4pCreateHostProcess)
BRIDGE_IMPL(sceKernelDeci4pCreateHostProcessAndWait)
BRIDGE_IMPL(sceKernelDeci4pDisableWatchpoint)
BRIDGE_IMPL(sceKernelDeci4pEnableWatchpoint)
BRIDGE_IMPL(sceKernelDeci4pIsProcessAttached)
BRIDGE_IMPL(sceKernelDeci4pOpen)
BRIDGE_IMPL(sceKernelDeci4pRead)
BRIDGE_IMPL(sceKernelDeci4pRegisterCallback)
BRIDGE_IMPL(sceKernelDeci4pWrite)
