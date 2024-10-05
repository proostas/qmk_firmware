#include "proostas.h"
#include "os_detection.h"
#include "features/achordion.h"
#include "features/repeat_key.h"

static inline void print_current_os(void) {
    switch (detected_host_os()) {
        case OS_LINUX:   SEND_STRING("Linux"); break;
        case OS_WINDOWS: SEND_STRING("Windows"); break;
        case OS_MACOS:   SEND_STRING("MacOS"); break;
        case OS_IOS:     SEND_STRING("iOS"); break;
        default:         SEND_STRING("Unsure");
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MOS_ENT:
            return false;
        default:
            return true;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MOS_ENT:
            return true;
        default:
            return false;
    }
}

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        case KC_SCLN:
        case KC_QUOT:
        case KC_LBRC:
        case KC_RBRC:
        case KC_GRAVE:
        case KC_COMMA:
        case KC_DOT:
        case DIK_SHS:
        case DIK_BSHS: {
            switch (get_highest_layer(layer_state|default_layer_state)) {
                case RUS:
                case NUR:
                case SYR:
                    add_weak_mods(MOD_BIT(KC_LSFT));
                    return true;
                default:
                    return false;
            }
        }
        // continue w/Shift
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        // continue wo/Shift
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;
    }
}

static void process_altrep1(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_N: SEND_STRING(/*n*/"amespace "); break;
        case KC_S: SEND_STRING(/*s*/"truct "); break;
        case KC_C: SEND_STRING(/*c*/"lass "); break;
        case KC_E: SEND_STRING(/*e*/"lse "); break;
    }
}

static void process_altrep2(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING(/*c*/"ase "); break;
        case KC_R: SEND_STRING(/*r*/"eturn "); break;
        case KC_S: SEND_STRING(/*s*/"tatic "); break;
        case KC_T: SEND_STRING(/*t*/"rue"); break;
        case KC_F: SEND_STRING(/*f*/"alse"); break;
        case KC_E: SEND_STRING(/*e*/"num "); break;
        case KC_N: SEND_STRING(/*n*/"ew "); break;
        case KC_D: SEND_STRING(/*d*/"efault:"); break;
    }
}

static void process_altrep3(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING(/*c*/"ontinue;");
    }
}

static void process_altrep4(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING(/*c*/"onst"); break;
        case KC_S: SEND_STRING(/*s*/"tatic_cast<"); break;
        case KC_N: SEND_STRING(/*n*/"ullptr"); break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }
    if (!process_repeat_key_with_alt(keycode, record, REPEAT, ALTREP)) {
        return false;
    }

    switch (keycode) {
        case TO_RUS:
            if (!record->event.pressed) {
                layer_on(RUS);
                tap_code16(U_TO_RUS_SCUT);
            }

            return false;
        case TO_ENG:
            if (!record->event.pressed) {
                layer_off(RUS);
                tap_code16(U_TO_ENG_SCUT);
            }

            return false;
        case PRNT_OS:
            if (record->event.pressed) {
                print_current_os();
            }

            return false;
        case COL_LP: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_SEMICOLON;
                } else {
                    register_mods(MOD_BIT(KC_RSFT));
                    registered_key = KC_9;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case COL_RP: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_SEMICOLON;
                    unregister_mods(MOD_MASK_SHIFT);
                } else {
                    register_mods(MOD_BIT(KC_LSFT));
                    registered_key = KC_0;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case NUM_ABR: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_DOT;
                } else {
                    register_mods(MOD_BIT(KC_RSFT));
                    registered_key = KC_COMM;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case DIK_SHS: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                uint8_t cag_mods = mods & MOD_MASK_CAG;
                if (shift_mods) {
                    registered_key = KC_RBRC;
                    unregister_mods(MOD_MASK_SHIFT);
                } else if (cag_mods) {
                    registered_key = KC_W;
                } else {
                    registered_key = KC_M;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case DIK_BSHS: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_RBRC;
                } else {
                    register_mods(MOD_BIT(KC_RSFT));
                    registered_key = KC_M;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case DIK_COM: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                uint8_t cag_mods = mods & MOD_MASK_CAG;
                if (shift_mods) {
                    registered_key = KC_7;
                } else if (cag_mods) {
                    registered_key = KC_P;
                } else {
                    register_mods(MOD_BIT(KC_RSFT));
                    registered_key = KC_SLSH;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case DIK_DOT: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                uint8_t cag_mods = mods & MOD_MASK_CAG;
                if (shift_mods) {
                    registered_key = KC_1;
                } else if (cag_mods) {
                    registered_key = KC_B;
                } else {
                    registered_key = KC_SLSH;
                }

                register_code(registered_key);
                set_mods(mods);
            } else {
                unregister_code(registered_key);
            }
            return false;
        }
        case RN_ABR: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods() | get_weak_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;

                if (shift_mods) {
                    registered_key = KC_RIGHT_ANGLE_BRACKET;
                } else {
                    registered_key = KC_LEFT_ANGLE_BRACKET;
                }

                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(registered_key);
            } else {
                unregister_code16(registered_key);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_ABR: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_RIGHT_ANGLE_BRACKET);
            } else {
                unregister_code16(KC_RIGHT_ANGLE_BRACKET);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case RN_LBR: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t hard_mods = get_mods();
                const uint8_t mods = (hard_mods | get_weak_mods());
                if (mods & MOD_MASK_SHIFT) {
                    registered_key = KC_LEFT_CURLY_BRACE;
                } else {
                    registered_key = KC_LEFT_BRACKET;
                }
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(registered_key);
            } else {
                unregister_code16(registered_key);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_LBR: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_LEFT_CURLY_BRACE);
            } else {
                unregister_code16(KC_LEFT_CURLY_BRACE);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case RN_RBR: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = (get_mods() | get_weak_mods());
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_RIGHT_CURLY_BRACE;
                } else {
                    registered_key = KC_RIGHT_BRACKET;
                }
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(registered_key);
            } else {
                unregister_code16(registered_key);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_RBR: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_RIGHT_CURLY_BRACE);
            } else {
                unregister_code16(KC_RIGHT_CURLY_BRACE);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case RN_AT: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_HASH;
                } else {
                    registered_key = KC_AT;
                }
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(registered_key);
            } else {
                unregister_code16(registered_key);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_AT: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_HASH);
            } else {
                unregister_code16(KC_HASH);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case RN_SCLN: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_CIRCUMFLEX;
                } else {
                    registered_key = KC_DOLLAR;
                }
                register_code16(registered_key);
            } else {
                unregister_code16(registered_key);
            }
            return false;
        }
        case SRN_SCLN: {
            if (record->event.pressed) {
                register_code16(KC_CIRCUMFLEX);
            } else {
                unregister_code16(KC_CIRCUMFLEX);
            }
            return false;
        }
        case SRN_4: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_DOLLAR);
            } else {
                unregister_code16(KC_DOLLAR);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_6: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_CIRCUMFLEX);
            } else {
                unregister_code16(KC_CIRCUMFLEX);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_1: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_QUOTE);
            } else {
                unregister_code16(KC_QUOTE);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_0: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_AMPERSAND);
            } else {
                unregister_code16(KC_AMPERSAND);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case RN_GRV: {
            static uint16_t registered_key = KC_NO;
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                uint8_t shift_mods = mods & MOD_MASK_SHIFT;
                if (shift_mods) {
                    registered_key = KC_TILDE;
                } else {
                    registered_key = KC_GRAVE;
                }
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(registered_key);
            } else {
                unregister_code16(registered_key);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case SRN_GRV: {
            if (record->event.pressed) {
                tap_code16(U_TO_ENG_SCUT);
                wait_ms(10);
                register_code16(KC_TILDE);
            } else {
                unregister_code16(KC_TILDE);
                tap_code16(U_TO_RUS_SCUT);
            }
            return false;
        }
        case ALREP1:
            if (record->event.pressed) {
                process_altrep1(get_last_keycode(), get_last_mods());
            }
            return false;
        case ALREP2:
            if (record->event.pressed) {
                process_altrep2(get_last_keycode(), get_last_mods());
            }
            return false;
        case ALREP3:
            if (record->event.pressed) {
                process_altrep3(get_last_keycode(), get_last_mods());
            }
            return false;
        case ALREP4:
            if (record->event.pressed) {
                process_altrep4(get_last_keycode(), get_last_mods());
            }
            return false;
        default:
            return true;
    }
}

void matrix_scan_user(void) {
    achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t *tap_hold_record, uint16_t other_keycode, keyrecord_t *other_record) {
    switch (tap_hold_keycode) {
        // exclude both-hands chords
        case ENN_BSP:
        case SYE_TAB:
        case NUE_SPC:
        case RUN_BSP:
        case NUR_SPC:
        case SYR_TAB:
        case MOS_ENT:
        case FUN_ESC:
            return true;
    }
    return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode) {
        case MOS_ENT:
            return 0;
    }

    return 800;
}

uint16_t achordion_streak_chord_timeout(uint16_t tap_hold_keycode, uint16_t next_keycode) {
    // disable for layer-tap keys
    if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
        return 0;
    }

    uint8_t mod = mod_config(QK_MOD_TAP_GET_MODS(tap_hold_keycode));
    // disable for shifts
    if (mod & (MOD_LSFT|MOD_RSFT)) {
        return 0;
    }

    return 150;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _MOUSE, _MEDIA, _DANGER_L);
    state = update_tri_layer_state(state, _FUNCTION, _ENGLISH_SYM, _DANGER_R);
    return state;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    HSV hsv = (HSV){HSV_BLACK};
    uint8_t layer = get_highest_layer(layer_state|default_layer_state);
    switch(layer) {
        case ENG:
            hsv = (HSV){HSV_AZURE};
            break;
        case RUS:
            hsv = (HSV){HSV_GOLD};
            break;
        case ENN:
        case RUN:
            hsv = (HSV){HSV_SPRINGGREEN};
            break;
        case NUE:
        case NUR:
        case SYE:
        case SYR:
            hsv = (HSV){HSV_GREEN};
            break;
        case FUN:
            hsv = (HSV){HSV_WHITE};
            break;
        case MED:
            hsv = (HSV){HSV_PURPLE};
            break;
        case MOS:
            hsv = (HSV){HSV_CORAL};
            break;
        case _DANGER_L:
        case _DANGER_R:
            hsv = (HSV){HSV_RED};
            break;
        default:
            break;
    }
    // limit brightness
    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }
    RGB rgb = hsv_to_rgb(hsv);
    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED) {
                if (keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                } else {
                    rgb_matrix_set_color(index, RGB_BLACK);
                }
            }
        }
    }
    return false;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    if ((mods & MOD_MASK_CTRL)) {
        switch (keycode) {
            case KC_Y: return C(KC_Z);
            case KC_Z: return C(KC_Y);
            case KC_C: return C(KC_V);
        }
    }

    // same-finger bigrams
    switch (keycode) {
        case KC_S: return KC_C;
        case KC_E: return KC_COMMA;
        case KC_U: return KC_E;
        case KC_P: return KC_T;
        case KC_Y: return KC_DOT;
    }

    // C++ operators
    switch (keycode) {
        case KC_PLUS:
        case KC_MINUS:
        case KC_EXCLAIM:
        case KC_ASTERISK:
        case KC_SLASH:
        case KC_LEFT_ANGLE_BRACKET:
        case KC_RIGHT_ANGLE_BRACKET:
            return KC_EQUAL;
        case KC_LEFT_PAREN:
            return KC_RIGHT_PAREN;
    }

    return KC_TRNS; // defer to the defaults
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t *record, uint8_t *remembered_mods) {
    switch (keycode) {
        case ALREP1:
        case ALREP2:
        case ALREP3:
        case ALREP4:
            return false;
    }

    return true;
}

void leader_start_user(void) {

}

void leader_end_user(void) {
    // I'
    if (leader_sequence_two_keys(KC_I, KC_QUOTE)) {
        SEND_STRING("#include \"\"" SS_TAP(X_LEFT));
    // I.
    } else if (leader_sequence_two_keys(KC_I, KC_DOT)) {
        SEND_STRING("#include <>" SS_TAP(X_LEFT));
    // D
    } else if (leader_sequence_one_key(KC_D)) {
        SEND_STRING("#define ");
    // H
    } else if (leader_sequence_one_key(KC_H)) {
        SEND_STRING("Hello");
    // GC
    } else if (leader_sequence_two_keys(KC_G, KC_C)) {
        SEND_STRING("git commit -m \"\"" SS_TAP(X_LEFT));
    // GR
    } else if (leader_sequence_two_keys(KC_G, KC_R)) {
        SEND_STRING("git reset --soft HEAD^");
    // GPF
    } else if (leader_sequence_three_keys(KC_G, KC_P, KC_F)) {
        SEND_STRING("git push --force");
    // GPH
    } else if (leader_sequence_three_keys(KC_G, KC_P, KC_H)) {
        SEND_STRING("git push");
    // GPL
    } else if (leader_sequence_three_keys(KC_G, KC_P, KC_L)) {
        SEND_STRING("git pull");
    // G
    } else if (leader_sequence_one_key(KC_G)) {
        if (get_highest_layer(layer_state|default_layer_state) == _RUSSIAN) {
            SEND_STRING("Ghbdtn");
        } else {
            SEND_STRING("Goodbuy");
        }
    // L
    } else if (leader_sequence_one_key(KC_L)) {
        SEND_STRING("Ljcdblfybz");
    }
}

