#include QMK_KEYBOARD_H

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
#define CTL_T  LCTL_T(KC_T)
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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                           KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
    GUI_A,   ALT_R,   SFT_S,   CTL_T,   KC_G,                           KC_M,    CTL_N,   SFT_E,   ALT_I,   GUI_O,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                           KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                      MO(MED), XXXXXXX, CON_BSP, MOS_ENT,      FUN_TAB, NUM_SPC, XXXXXXX, MO(MED)
  ),

  [_COLEMAK_NAV] = LAYOUT(
    KC_ESC,  KC_CAPS, TG(QWR), TG(QWR), XXXXXXX,                        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_APP,  XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_TAB,  KC_SPC,  XXXXXXX, XXXXXXX
  ),

  [_QWERTY] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    GUI_A,   ALT_S,   SFT_D,   CTL_F,   KC_G,                           KC_H,    CTL_J,   SFT_K,   ALT_L,   GUI_SC,
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
