// Copyright 2022 GEIST @geigeigeist
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define VIAL_KEYBOARD_UID \
    { 0xCB, 0x37, 0x36, 0xFE, 0xEE, 0xED, 0xEE, 0x77 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0 }

// #define TAPPING_TERM 170
#define TAPPING_TERM 170

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
//#define NO_ACTION_ONESHOT

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
#define CAPS_WORD_IDLE_TIMEOUT 3000  // 3 seconds.