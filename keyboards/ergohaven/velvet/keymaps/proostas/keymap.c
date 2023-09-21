#include QMK_KEYBOARD_H

#include "tap_dance.h"

enum layer_names {
  _COLEMAK,
  _COLEMAK_NAV,
  _QWERTY,
  _QWERTY_NAV,
  _NUMBER,
  _FUNCTION,
  _MEDIA,
  _MOUSE
};

enum tap_dance_names {
  TD_BOOT_GRV,
  TD_BOOT_RBRC
};

#define COL  _COLEMAK
#define CON  _COLEMAK_NAV
#define QWR  _QWERTY
#define QWN  _QWERTY_NAV
#define NUM  _NUMBER
#define FUN  _FUNCTION
#define MED  _MEDIA
#define MOS  _MOUSE

#define GUI_A  LGUI_T(KC_A)
#define ALT_R  LALT_T(KC_R)
#define SFT_S  LSFT_T(KC_S)
#define CTR_T  LCTL_T(KC_T)
#define CTL_N  RCTL_T(KC_N)
#define SFT_E  RSFT_T(KC_E)
#define ALT_I  RALT_T(KC_I)
#define GUI_O  RALT_T(KC_O)
#define ALT_S  LALT_T(KC_S)
#define SFT_D  LSFT_T(KC_D)
#define CTL_F  LCTL_T(KC_F)
#define CTL_J  RCTL_T(KC_J)
#define SFT_K  RSFT_T(KC_K)
#define ALT_L  RALT_T(KC_L)
#define GUI_SC RGUI_T(KC_SCLN)

#define CON_BSP LT(CON, KC_BSPC)
#define MOS_ENT LT(MOS, KC_ENT)
#define FUN_TAB LT(FUN, KC_TAB)
#define NUM_SPC LT(NUM, KC_SPC)
#define QWN_BSP LT(QWN, KC_BSPC)
#define MED_G   LT(MED, KC_G)
#define MED_M   LT(MED, KC_M)

tap_dance_action_t tap_dance_actions[] = {
  [TD_BOOT_GRV] = ACTION_TAP_DANCE_TAP_HOLD(KC_GRV, QK_BOOT),
  [TD_BOOT_RBRC] = ACTION_TAP_DANCE_TAP_HOLD(KC_RBRC, QK_BOOT)
};
#define GRV_BOOT TD(TD_BOOT_GRV)
#define RBR_BOOT TD(TD_BOOT_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                           KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
    GUI_A,   ALT_R,   SFT_S,   CTR_T,   MED_G,                          MED_M,   CTL_N,   SFT_E,   ALT_I,   GUI_O,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                           KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                      GRV_BOOT,KC_BSLS, CON_BSP, MOS_ENT,      FUN_TAB, NUM_SPC, KC_LBRC, RBR_BOOT
  ),

  [_COLEMAK_NAV] = LAYOUT(
    KC_ESC,  KC_CAPS, TG(QWR), TG(QWR), XXXXXXX,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_APP,  XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_TAB,  KC_SPC,  XXXXXXX, XXXXXXX
  ),

  [_QWERTY] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    GUI_A,   ALT_S,   SFT_D,   CTL_F,   MED_G,                          KC_H,    CTL_J,   SFT_K,   ALT_L,   GUI_SC,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                      XXXXXXX, XXXXXXX, QWN_BSP, MOS_ENT,      FUN_TAB, NUM_SPC, XXXXXXX, XXXXXXX
  ),

  [_QWERTY_NAV] = LAYOUT(
    KC_ESC,  KC_CAPS, TG(QWR), TG(QWR), XXXXXXX,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_APP,  XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_TAB,  KC_SPC,  XXXXXXX, XXXXXXX
  ),

  [_NUMBER] = LAYOUT(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                         XXXXXXX, KC_RCTL, KC_RSFT, KC_RALT, KC_RGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, KC_0,    KC_MINS,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
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
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case TD(TD_BOOT_GRV):
    case TD(TD_BOOT_RBRC):
      return 5000;
    default:
      return TAPPING_TERM;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  tap_dance_action_t *action;

  switch (keycode) {
    case TD(TD_BOOT_GRV):
    case TD(TD_BOOT_RBRC):
      action = &tap_dance_actions[TD_INDEX(keycode)];
      if (!record->event.pressed && action->state.count && !action->state.finished) {
        tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
        tap_code16(tap_hold->tap);
      }
      break;
  }
  return true;
}
