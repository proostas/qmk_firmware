#pragma once

#include QMK_KEYBOARD_H
#include "process_combo.h"

enum combos {
    SWITCH_LANG,
    FORCE_LANG,
    REPEAT_COMBO,
    CAPSWORD_COMBO,
    COMBO_COUNT,
};

extern combo_t key_combos[COMBO_COUNT];
