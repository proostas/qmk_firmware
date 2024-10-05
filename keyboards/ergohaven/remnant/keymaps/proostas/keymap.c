#include QMK_KEYBOARD_H
#include "proostas.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ENGLISH] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LBRC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, KC_RBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       COL_LP,   GUI_A,   ALT_R,   SFT_S,   CTR_T,   MED_G,                        SYM_M,   CTL_N,   SFT_E,   ALT_I,   GUI_O,  COL_RP,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
       KC_GRV,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          MED_DEL, ENN_BSP, MOS_ENT,    SYE_TAB, NUE_SPC, FUN_ESC
                                      //`--------------------------'  `--------------------------'
  ),

  [_ENGLISH_NAV] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_ESC, KC_CAPS,  TO_RUS, TG(RUS), PRNT_OS,                      KC_PGUP, KC_HOME,   KC_UP,  KC_END,  KC_INS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, TG(BTN),                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, CW_TOGG,  KC_APP, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          XXXXXXX, XXXXXXX, XXXXXXX,     KC_TAB,  KC_SPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_ENGLISH_NUM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      NUM_ABR, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                      XXXXXXX, KC_BSPC,  KC_SPC, XXXXXXX,  KC_ESC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                      XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                           KC_DOT,    KC_0, KC_MINS,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_ENGLISH_SYM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_RABK, KC_LCBR, KC_LPRN, KC_ASTR, KC_RPRN, KC_RCBR,                      XXXXXXX, KC_BSPC,  KC_SPC, XXXXXXX,  KC_ESC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                      XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          KC_COMM, KC_AMPR, KC_UNDS,    _______, XXXXXXX, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_RUSSIAN] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_GRV,    KC_W, DIK_SHS,    KC_Z, DIK_COM, DIK_DOT,                         KC_P,    KC_D,    KC_R,    KC_L,    KC_X,    KC_I,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     DIK_BSHS,   GUI_E,   ALT_B,  SHFT_T,   CTL_J,   MED_F,                        SYM_K,   CTL_Y,   SFT_N,   ALT_C,   GUI_H,    KC_Q,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      KC_BSLS,    KC_A, KC_QUOT, KC_LBRC,    KC_S,  KC_DOT,                      KC_COMM,    KC_V,    KC_G,    KC_U, KC_SCLN,    KC_O,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          MED_DEL, RUN_BSP, MOS_ENT,    SYR_TAB, NUR_SPC, FUN_ESC
                                      //`--------------------------'  `--------------------------'
  ),

  [_RUSSIAN_NAV] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_ESC, KC_CAPS,  TO_ENG, TG(RUS), PRNT_OS,                      KC_PGUP, KC_HOME,   KC_UP,  KC_END,  KC_INS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, TG(BTN),                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, CW_TOGG,  KC_APP, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          XXXXXXX, XXXXXXX, XXXXXXX,     KC_TAB,  KC_SPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_RUSSIAN_NUM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       RN_ABR,  RN_LBR,    KC_7,    KC_8,    KC_9,  RN_RBR,                      XXXXXXX, KC_BSPC,  KC_SPC, XXXXXXX,  KC_ESC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RN_AT, RN_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                      XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX,  RN_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          KC_SLSH,    KC_0, KC_MINS,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_RUSSIAN_SYM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      SRN_ABR, SRN_LBR, KC_LPRN, KC_ASTR, KC_RPRN, SRN_RBR,                      XXXXXXX, KC_BSPC,  KC_SPC, XXXXXXX,  KC_ESC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       SRN_AT,SRN_SCLN,   SRN_4,   SRN_5,   SRN_6, SRN_EQL,                      XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, SRN_GRV,   SRN_1,   SRN_2,   SRN_3,SRN_BSLS,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                         SRN_SLSH,   SRN_0,SRN_MINS,    _______, XXXXXXX, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_FUNCTION] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_PSCR,                      XXXXXXX, XXXXXXX, MO(FN2), XXXXXXX,  KC_ESC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_SCRL,                      XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F10,   KC_F1,   KC_F2,   KC_F3, KC_PAUS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          XXXXXXX, KC_BSPC,  KC_ENT,    _______, XXXXXXX, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_FUNCTION_EXT] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_F24,  KC_F17,  KC_F18,  KC_F19, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_F23,  KC_F14,  KC_F15,  KC_F16, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      _______,  KC_F20,  KC_F21,  KC_F22,  KC_F13, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_MEDIA] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, XXXXXXX, XXXXXXX,                      KC_MSTP, KC_MPLY, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          _______, XXXXXXX, _______,    XXXXXXX,  REPEAT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_MOUSE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      C(KC_Y),  KC_ESC, C(KC_C), C(KC_C), C(KC_V), C(KC_Z),                      KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, C(KC_A), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   C(S(KC_Z)), KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_ACL2,                      KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R,  KC_DEL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ACL0,                      XXXXXXX, KC_BTN4, KC_BTN5, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          _______, XXXXXXX, _______,    KC_BTN2, KC_BTN1, KC_BTN3
                                      //`--------------------------'  `--------------------------'
  ),

  [_BUTTON] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      C(KC_Y),  KC_ESC, C(KC_C), C(KC_C), C(KC_V), C(KC_Z),                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   C(S(KC_Z)), KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_DEL, C(KC_A),                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          KC_BTN3, KC_BTN1, KC_BTN2,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_DANGER_L] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
       QK_RBT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  QK_RBT,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          _______, XXXXXXX, _______,    _______, XXXXXXX, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_DANGER_R] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|
       QK_RBT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  QK_RBT,
  //|--------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+--------|
                        XXXXXXX, XXXXXXX,                                                          XXXXXXX, XXXXXXX,
                    //`--------+--------'                                                        `--------+--------'
                                          _______, XXXXXXX, _______,    _______, XXXXXXX, _______
                                      //`--------------------------'  `--------------------------'
  ),
};
