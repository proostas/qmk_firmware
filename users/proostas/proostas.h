#pragma once
#include "quantum.h"

enum layer_names {
  _COLEMAK,
  _COLEMAK_NAV,
  _QWERTY,
  _QWERTY_NAV,
  _NUMBER,
  _FUNCTION,
  _MEDIA,
  _MOUSE,
  _SYMBOL
};

enum tap_dance_names {
  TD_BOOT_GRV,
  TD_BOOT_RBRC
};

enum custom_keycodes {
  TO_RUS = SAFE_RANGE,
  TO_ENG,
  PRNT_OS
};

#define COL  _COLEMAK
#define CON  _COLEMAK_NAV
#define QWR  _QWERTY
#define QWN  _QWERTY_NAV
#define NUM  _NUMBER
#define FUN  _FUNCTION
#define MED  _MEDIA
#define MOS  _MOUSE
#define SYM  _SYMBOL

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
#define SYM_M   LT(SYM, KC_M)
#define SYM_H   LT(SYM, KC_H)

#define GRV_BOOT TD(TD_BOOT_GRV)
#define RBR_BOOT TD(TD_BOOT_RBRC)

#define SH_LBRC LSFT(KC_LBRC)
#define SH_RBRC LSFT(KC_RBRC)
#define SH_SCLN LSFT(KC_SCLN)
#define SH_GRV  LSFT(KC_GRV)
#define SH_EQL  LSFT(KC_EQL)
#define SH_BSLS LSFT(KC_BSLS)
#define SH_MINS LSFT(KC_MINS)
#define SH_0    LSFT(KC_0)
#define SH_1    LSFT(KC_1)
#define SH_2    LSFT(KC_2)
#define SH_3    LSFT(KC_3)
#define SH_4    LSFT(KC_4)
#define SH_5    LSFT(KC_5)
#define SH_6    LSFT(KC_6)
#define SH_7    LSFT(KC_7)
#define SH_8    LSFT(KC_8)
#define SH_9    LSFT(KC_9)
