#pragma once

#include QMK_KEYBOARD_H
#include "process_key_override.h"

#define ko_make_with_layers_negmods_and_options_no_suppress(trigger_mods_, trigger_key, replacement_key, layer_mask, negative_mask, options_) \
    ((const key_override_t){                                                                \
        .trigger_mods                           = (trigger_mods_),                          \
        .layers                                 = (layer_mask),                             \
        .suppressed_mods                        = (0),                                      \
        .options                                = (options_),                               \
        .negative_mod_mask                      = (negative_mask),                          \
        .custom_action                          = NULL,                                     \
        .context                                = NULL,                                     \
        .trigger                                = (trigger_key),                            \
        .replacement                            = (replacement_key),                        \
        .enabled                                = NULL                                      \
    })

enum {
    NUM_0,
    NUM_7,
    NUM_9,
    NUM_DOT,
    DIKTOR_W,
    DIKTOR_Z,
    DIKTOR_P,
    DIKTOR_D,
    DIKTOR_R,
    DIKTOR_L,
    DIKTOR_E,
    DIKTOR_B,
    DIKTOR_T,
    DIKTOR_J,
    DIKTOR_F,
    DIKTOR_K,
    DIKTOR_Y,
    DIKTOR_N,
    DIKTOR_C,
    DIKTOR_H,
    DIKTOR_A,
    DIKTOR_QUOTE,
    DIKTOR_LBRC,
    DIKTOR_S,
    DIKTOR_DOT,
    DIKTOR_COMMA,
    DIKTOR_V,
    RNUM_4,
    RNUM_6,
    RNUM_1,
    RNUM_SLASH,
    RNUM_0,
    KEY_OVERRIDE_COUNT,
};

extern const key_override_t *key_overrides[KEY_OVERRIDE_COUNT];
