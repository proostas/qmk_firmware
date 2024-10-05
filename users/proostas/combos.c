#include "proostas.h"
#include "features/repeat_key.h"

const uint16_t PROGMEM switch_lang_combo[] = {MOS_ENT, SYE_TAB, COMBO_END};
const uint16_t PROGMEM force_lang_combo[] = {KC_B, KC_J, COMBO_END};
const uint16_t PROGMEM repeat_combo[] = {MED_G, SYM_M, COMBO_END};
const uint16_t PROGMEM capsword_combo[] = {CTR_T, CTL_N, COMBO_END};

combo_t key_combos[] = {
    [SWITCH_LANG] = COMBO_ACTION(switch_lang_combo),
    [FORCE_LANG] = COMBO_ACTION(force_lang_combo),
    [REPEAT_COMBO] = COMBO(repeat_combo, REPEAT),
    [CAPSWORD_COMBO] = COMBO(capsword_combo, CW_TOGG),
};

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (index) {
        case CAPSWORD_COMBO:
            return 40;
    }

    return COMBO_TERM;
}

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case SWITCH_LANG: {
            if (pressed) {
                switch(get_highest_layer(layer_state)) {
                    case ENG:
                        layer_on(RUS);
                        tap_code16(U_TO_RUS_SCUT);
                        break;
                    case RUS:
                        layer_off(RUS);
                        tap_code16(U_TO_ENG_SCUT);
                        break;
                }
            }
            break;
        }
        case FORCE_LANG: {
            if (pressed) {
                switch(get_highest_layer(layer_state)) {
                    case ENG:
                        tap_code16(U_TO_ENG_SCUT);
                        break;
                    case RUS:
                        tap_code16(U_TO_RUS_SCUT);
                        break;
                }
            }
            break;
        }
    }
}
