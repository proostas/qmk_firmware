#include QMK_KEYBOARD_H
#include "proostas.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                           KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
    GUI_A,   ALT_R,   SFT_S,   CTR_T,   MED_G,                          SYM_M,   CTL_N,   SFT_E,   ALT_I,   GUI_O,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                           KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                      GRV_BOOT,KC_BSLS, CON_BSP, MOS_ENT,      FUN_TAB, NUM_SPC, KC_LBRC, RBR_BOOT
  ),

  [_COLEMAK_NAV] = LAYOUT(
    KC_ESC,  KC_CAPS, TO_RUS, TG(QWR),  PRNT_OS,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_APP,  XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_TAB,  KC_SPC,  XXXXXXX, XXXXXXX
  ),

  [_QWERTY] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    GUI_A,   ALT_S,   SFT_D,   CTL_F,   MED_G,                          SYM_H,   CTL_J,   SFT_K,   ALT_L,   GUI_SC,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                      KC_QUOT, KC_BSLS, QWN_BSP, MOS_ENT,      FUN_TAB, NUM_SPC, KC_LBRC, KC_RBRC
  ),

  [_QWERTY_NAV] = LAYOUT(
    KC_ESC,  KC_CAPS, TO_ENG, TG(QWR),  PRNT_OS,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_APP,  XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_TAB,  KC_SPC,  XXXXXXX, XXXXXXX
  ),

  [_NUMBER] = LAYOUT(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                         XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      KC_COMM, KC_DOT,  KC_0,    KC_MINS,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_FUNCTION] = LAYOUT(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                        XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, KC_SPC,  KC_TAB,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_MEDIA] = LAYOUT(
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_MSTP, KC_MPLY, KC_VOLU, XXXXXXX, QK_BOOT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT, KC_RGUI,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_MUTE, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_MOUSE] = LAYOUT(
    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, XXXXXXX,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_BTN2, KC_BTN1, XXXXXXX, XXXXXXX
  ),

  [_SYMBOL] = LAYOUT(
    SH_LBRC, SH_7,    SH_8,    SH_9,    SH_RBRC,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,
    SH_SCLN, SH_4,    SH_5,    SH_6,    SH_EQL,                         XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI,
    SH_GRV,  SH_1,    SH_2,    SH_3,    SH_BSLS,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, SH_0,    SH_MINS,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};


