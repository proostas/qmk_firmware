#include "proostas.h"
#include "tap_dance.h"
#include "os_detection.h"

tap_dance_action_t tap_dance_actions[] = {
  [TD_BOOT_GRV] = ACTION_TAP_DANCE_TAP_HOLD(KC_GRV, QK_BOOT),
  [TD_BOOT_RBRC] = ACTION_TAP_DANCE_TAP_HOLD(KC_RBRC, QK_BOOT)
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

void print_current_os() {
  os_variant_t v = detected_host_os();
  switch (v) {
    case OS_LINUX:   SEND_STRING("Linux"); break;
    case OS_WINDOWS: SEND_STRING("Windows"); break;
    case OS_MACOS:   SEND_STRING("MacOS"); break;
    case OS_IOS:     SEND_STRING("iOS"); break;
    default:         SEND_STRING("Unsure");
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
    case TO_RUS:
      if (!record->event.pressed) {
        layer_on(QWR);
        tap_code16(LCA(KC_2));
      }
      break;
    case TO_ENG:
      if (!record->event.pressed) {
        layer_off(QWR);
        tap_code16(LCA(KC_1));
      }
      break;
    case PRNT_OS:
      if (record->event.pressed) {
        print_current_os();
      }
      break;
  }
  return true;
}
