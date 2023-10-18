#include "proostas.h"
#include "os_detection.h"

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
  switch (keycode) {
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
