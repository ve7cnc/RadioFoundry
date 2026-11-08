// SPDX-License-Identifier: MIT
// Copyright (c) 2026 The RadioFoundry Authors
// FD6818 set-up of the newer DM-32UV RF section (DM32_RF=nrf in board.mk): the DM-1801 Pro's tables. On such a radio
// (stock DM32.NRFB.01.050, Puya data flash) the classic DM-32 tables leave the synthesizer unlocked and the receiver
// dead (RSSI 0, noise 127, 0x0C bit 9 clear); these lock it (0x0C = 0x0280, noise 45-48). Measured 2026-11-07
#if DM32_RF_NRF
#include "../dm1801pro/rf_tables_dm1801pro.c"
#endif
