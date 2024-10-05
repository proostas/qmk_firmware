#pragma once
#include "quantum.h"

#include "combos.h"
#include "overrides.h"

enum layer_names {
    _ENGLISH,
    _ENGLISH_NAV,
    _ENGLISH_NUM,
    _ENGLISH_SYM,
    _RUSSIAN,
    _RUSSIAN_NAV,
    _RUSSIAN_NUM,
    _RUSSIAN_SYM,
    _NUMBER,
    _FUNCTION,
    _FUNCTION_EXT,
    _MEDIA,
    _MOUSE,
    _BUTTON,
    _DANGER_L,
    _DANGER_R
};

enum custom_keycodes {
    TO_RUS = SAFE_RANGE,
    TO_ENG,
    PRNT_OS,
    COL_LP,
    COL_RP,
    NUM_ABR,
    DIK_SHS,
    DIK_BSHS,
    DIK_COM,
    DIK_DOT,
    RN_ABR,
    SRN_ABR,
    RN_LBR,
    SRN_LBR,
    RN_RBR,
    SRN_RBR,
    RN_AT,
    SRN_AT,
    RN_SCLN,
    SRN_SCLN,
    SRN_4,
    SRN_6,
    SRN_1,
    SRN_0,
    RN_GRV,
    SRN_GRV,
    REPEAT,
    ALTREP,
    ALREP1,
    ALREP2,
    ALREP3,
    ALREP4
};

#define SRN_5    S(KC_5)
#define SRN_EQL  S(KC_EQL)
#define SRN_2    S(KC_2)
#define SRN_3    S(KC_3)
#define SRN_BSLS S(KC_BSLS)
#define SRN_SLSH S(KC_SLSH)
#define SRN_MINS S(KC_MINS)

#define ENG  _ENGLISH
#define ENN  _ENGLISH_NAV
#define NUE  _ENGLISH_NUM
#define SYE  _ENGLISH_SYM
#define RUS  _RUSSIAN
#define RUN  _RUSSIAN_NAV
#define NUR  _RUSSIAN_NUM
#define SYR  _RUSSIAN_SYM
#define FUN  _FUNCTION
#define FN2  _FUNCTION_EXT
#define MED  _MEDIA
#define MOS  _MOUSE
#define BTN  _BUTTON

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
#define GUI_E  LGUI_T(KC_E)
#define ALT_B  LALT_T(KC_B)
#define SHFT_T  LSFT_T(KC_T)
#define CTL_Y  RCTL_T(KC_Y)
#define SFT_N  RSFT_T(KC_N)
#define ALT_C  RALT_T(KC_C)
#define GUI_H  RGUI_T(KC_H)

#define ENN_BSP LT(ENN, KC_BSPC)
#define MOS_ENT LT(MOS, KC_ENT)
#define FUN_ESC LT(FUN, KC_ESC)
#define SYE_TAB LT(SYE, KC_TAB)
#define SYR_TAB LT(SYR, KC_TAB)
#define MED_DEL LT(MED, KC_DEL)
#define NUE_SPC LT(NUE, KC_SPC)
#define NUR_SPC LT(NUR, KC_SPC)
#define RUN_BSP LT(RUN, KC_BSPC)
#define MED_G   LT(MED, KC_G)
#define SYM_M   LT(SYE, KC_M)
#define MED_F   LT(MED, KC_F)
#define SYM_K   LT(SYR, KC_K)

#define U_TO_RUS_SCUT LCTL(LSFT(KC_2))
#define U_TO_ENG_SCUT LCTL(LSFT(KC_1))
