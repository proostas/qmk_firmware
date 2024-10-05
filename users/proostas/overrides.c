#include "overrides.h"
#include "definitions/keycodes.h"

const key_override_t num_0_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, S(KC_7), (1<<NUE));
const key_override_t num_7_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_7, KC_LPRN, (1<<NUE|1<<NUR));
const key_override_t num_9_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_9, KC_RPRN, (1<<NUE|1<<NUR));
const key_override_t num_dot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COMM, (1<<NUE));

const key_override_t diktor_w_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_W, KC_Q, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_z_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_Z, KC_F, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_p_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_P, KC_J, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_d_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_D, KC_L, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_r_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_R, KC_U, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_l_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_L, KC_Y, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_e_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, GUI_E, KC_A, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_b_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, ALT_B, KC_R, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_t_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, SHFT_T, KC_S, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_j_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, CTL_J, KC_T, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_f_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_F, KC_G, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_k_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_K, KC_M, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_y_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, CTL_Y, KC_N, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_n_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, SFT_N, KC_E, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_c_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, ALT_C, KC_I, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_h_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, GUI_H, KC_O, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_a_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_A, KC_Z, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_quote_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_QUOT, KC_X, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_lbrc_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_LBRC, KC_C, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_s_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_S, KC_D, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_dot_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_DOT, KC_V, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_comma_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_COMM, KC_K, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);
const key_override_t diktor_v_override = ko_make_with_layers_negmods_and_options_no_suppress(MOD_MASK_CAG, KC_V, KC_H, 1<<RUS, MOD_MASK_SHIFT, ko_option_no_reregister_trigger|ko_option_one_mod);

bool eng_kp_action(bool key_down, void *keycode) {
    uint16_t kc = (uint16_t)(uintptr_t)keycode;
    if (key_down) {
        const uint8_t mods = get_mods() | get_weak_mods();
        tap_code16(U_TO_ENG_SCUT);
        wait_ms(10);
        if (IS_QK_MODS(kc) && !(QK_MODS_GET_MODS(kc) & MOD_LSFT)) {
            register_code16(kc);
        } else {
            del_weak_mods(MOD_MASK_SHIFT);
            unregister_mods(MOD_MASK_SHIFT);
            register_code16(kc);
            set_mods(mods);
        }
    } else {
        unregister_code16(kc);
        tap_code16(U_TO_RUS_SCUT);
    }

    return false;
}

const key_override_t rnum_4_override = {
    .trigger_mods       = MOD_MASK_SHIFT,
    .layers             = (1<<NUR),
    .suppressed_mods    = 0,
    .options            = ko_option_no_reregister_trigger,
    .negative_mod_mask  = 0,
    .custom_action      = eng_kp_action,
    .context            = (void *)KC_DOLLAR,
    .trigger            = KC_4,
    .replacement        = KC_NO,
    .enabled            = NULL
};

const key_override_t rnum_6_override = {
    .trigger_mods       = MOD_MASK_SHIFT,
    .layers             = (1<<NUR),
    .suppressed_mods    = 0,
    .options            = ko_option_no_reregister_trigger,
    .negative_mod_mask  = 0,
    .custom_action      = eng_kp_action,
    .context            = (void *)KC_CIRCUMFLEX,
    .trigger            = KC_6,
    .replacement        = KC_NO,
    .enabled            = NULL
};

const key_override_t rnum_1_override = {
    .trigger_mods       = MOD_MASK_SHIFT,
    .layers             = (1<<NUR),
    .suppressed_mods    = 0,
    .options            = ko_option_no_reregister_trigger,
    .negative_mod_mask  = 0,
    .custom_action      = eng_kp_action,
    .context            = (void *)KC_QUOTE,
    .trigger            = KC_1,
    .replacement        = KC_NO,
    .enabled            = NULL
};

const key_override_t rnum_slash_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_SLASH, KC_QUESTION, (1<<NUR));

const key_override_t rnum_0_override = {
    .trigger_mods       = MOD_MASK_SHIFT,
    .layers             = (1<<NUR),
    .suppressed_mods    = 0,
    .options            = ko_option_no_reregister_trigger,
    .negative_mod_mask  = 0,
    .custom_action      = eng_kp_action,
    .context            = (void *)KC_AMPERSAND,
    .trigger            = KC_0,
    .replacement        = KC_NO,
    .enabled            = NULL
};

const key_override_t *key_overrides[] = {
    [NUM_0] = &num_0_override,
    [NUM_7] = &num_7_override,
    [NUM_9] = &num_9_override,
    [NUM_DOT] = &num_dot_override,
    [DIKTOR_W] = &diktor_w_override,
    [DIKTOR_Z] = &diktor_z_override,
    [DIKTOR_P] = &diktor_p_override,
    [DIKTOR_D] = &diktor_d_override,
    [DIKTOR_R] = &diktor_r_override,
    [DIKTOR_L] = &diktor_l_override,
    [DIKTOR_E] = &diktor_e_override,
    [DIKTOR_B] = &diktor_b_override,
    [DIKTOR_T] = &diktor_t_override,
    [DIKTOR_J] = &diktor_j_override,
    [DIKTOR_F] = &diktor_f_override,
    [DIKTOR_K] = &diktor_k_override,
    [DIKTOR_Y] = &diktor_y_override,
    [DIKTOR_N] = &diktor_n_override,
    [DIKTOR_C] = &diktor_c_override,
    [DIKTOR_H] = &diktor_h_override,
    [DIKTOR_A] = &diktor_a_override,
    [DIKTOR_QUOTE] = &diktor_quote_override,
    [DIKTOR_LBRC] = &diktor_lbrc_override,
    [DIKTOR_S] = &diktor_s_override,
    [DIKTOR_DOT] = &diktor_dot_override,
    [DIKTOR_COMMA] = &diktor_comma_override,
    [DIKTOR_V] = &diktor_v_override,
    [RNUM_4] = &rnum_4_override,
    [RNUM_6] = &rnum_6_override,
    [RNUM_1] = &rnum_1_override,
    [RNUM_SLASH] = &rnum_slash_override,
    [RNUM_0] = &rnum_0_override,
};
