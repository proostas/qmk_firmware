#pragma once

// Mouse
#define MK_COMBINED
#define MOUSEKEY_DELAY              30
#define MOUSEKEY_INTERVAL           16
#define MOUSEKEY_MOVE_DELTA         1
#define MOUSEKEY_MOVE_MAX           50
#define MOUSEKEY_MAX_SPEED          15
#define MOUSEKEY_TIME_TO_MAX        15
#define MOUSEKEY_WHEEL_DELAY        10
#define MOUSEKEY_WHEEL_INTERVAL     80
#define MOUSEKEY_WHEEL_MAX_SPEED    8
#define MOUSEKEY_WHEEL_TIME_TO_MAX  40

// Tap-Hold (and Tap-Dance)
#define TAPPING_TERM                200
//#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define QUICK_TAP_TERM              0

// Combos
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_TERM 50
#define COMBO_TERM_PER_COMBO

// Caps Word
#define CAPS_WORD_INVERT_ON_SHIFT

// Repeat Key
#define NO_ALT_REPEAT_KEY

// Achordion
#define ACHORDION_STREAK

// Leader Key
#define LEADER_TIMEOUT 250
#define LEADER_PER_KEY_TIMING
#define LEADER_NO_TIMEOUT
