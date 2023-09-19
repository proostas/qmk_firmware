// Copyright 2023 proostas (@proostas)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0xD2, 0x79, 0x71, 0xCF, 0x57, 0x27, 0xA0, 0x6C}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define DYNAMIC_KEYMAP_LAYER_COUNT 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 109

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U // Specify a optional status led which blinks when entering the bootloader

/* Serial settings */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define USB_VBUS_PIN        GP28
#define SPLIT_HAND_PIN      GP24

#define BOOTMAGIC_LITE_ROW          0
#define BOOTMAGIC_LITE_COLUMN       0
#define BOOTMAGIC_LITE_ROW_RIGHT    6
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

// Mouse
#define MOUSEKEY_DELAY              10
#define MOUSEKEY_INTERVAL           15
#define MOUSEKEY_MOVE_DELTA         4
#define MOUSEKEY_MAX_SPEED          7
#define MOUSEKEY_TIME_TO_MAX        30
#define MOUSEKEY_WHEEL_DELAY        10
#define MOUSEKEY_WHEEL_INTERVAL     80
#define MOUSEKEY_WHEEL_MAX_SPEED    8
#define MOUSEKEY_WHEEL_TIME_TO_MAX  40

// Tap-Hold
#define TAPPING_TERM                200
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM              100
