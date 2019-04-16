#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  RGB_SLD,
  HSV_0_4_241,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(KC_EQUAL,KC_1,KC_2,KC_3,KC_4,KC_5,KC_UNDS,KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,TG(3),KC_CAPSLOCK,KC_A,LSFT_T(KC_S),LCTL_T(KC_D),LALT_T(KC_F),KC_G,KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_LBRACKET,KC_LALT,KC_LABK,KC_RABK,KC_LPRN,KC_RPRN,LCA_T(KC_KP_PLUS),KC_DELETE,KC_DQUO,KC_BSPACE,LT(4,KC_ESCAPE),LGUI_T(KC_QUOTE),KC_HYPR,KC_6,KC_7,KC_8,KC_9,KC_0,KC_BSLASH,TG(1),KC_Y,KC_U,KC_I,KC_O,KC_P,KC_TILD,KC_H,RSFT_T(KC_J),RCTL_T(KC_K),RALT_T(KC_L),LT(2,KC_SCOLON),KC_MINUS,KC_RBRACKET,KC_N,KC_M,KC_UP,KC_COMMA,KC_DOT,KC_RSHIFT,KC_LEFT,KC_DOWN,KC_RIGHT,KC_SLASH,KC_RALT,KC_HOME,KC_DLR,KC_END,RGUI_T(KC_KP_ASTERISK),LT(2,KC_ENTER),LT(3,KC_SPACE)),

  [1] = LAYOUT_ergodox(KC_EQUAL,KC_1,KC_2,KC_3,KC_4,KC_5,KC_TRANSPARENT,KC_TAB,KC_Q,KC_W,KC_F,KC_P,KC_G,KC_LALT,KC_CAPSLOCK,KC_A,KC_R,KC_S,KC_T,KC_D,KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_LBRACKET,KC_LALT,KC_LABK,KC_RABK,KC_LPRN,KC_RPRN,LCA_T(KC_KP_PLUS),KC_DELETE,KC_DQUO,KC_BSPACE,LT(4,KC_ESCAPE),LGUI_T(KC_QUOTE),KC_TRANSPARENT,KC_6,KC_7,KC_8,KC_9,KC_0,KC_BSLASH,KC_TRANSPARENT,KC_J,KC_L,KC_U,KC_Y,KC_SCOLON,KC_TILD,KC_H,KC_N,RCTL_T(KC_E),KC_I,KC_O,KC_MINUS,KC_RBRACKET,KC_K,KC_M,KC_UP,KC_COMMA,KC_DOT,KC_RSHIFT,KC_LEFT,KC_DOWN,KC_RIGHT,KC_SLASH,KC_RALT,KC_HOME,KC_DLR,KC_END,RGUI_T(KC_KP_ASTERISK),LT(2,KC_ENTER),LT(3,KC_SPACE)),

  [2] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_UP,KC_R,KC_TRANSPARENT,KC_MS_WH_UP,RESET,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_ACCEL0,KC_MS_ACCEL1,KC_MS_ACCEL2,KC_TRANSPARENT,LGUI_T(KC_NO),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_BSPACE,LGUI_T(KC_NO),KC_MS_BTN1,KC_MS_BTN2,KC_MS_BTN3,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_BSPACE,KC_TRANSPARENT,KC_MS_ACCEL2,KC_TRANSPARENT,KC_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_DELETE,KC_MS_ACCEL1,KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,RGUI_T(KC_NO),KC_MS_ACCEL0,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [3] = LAYOUT_ergodox(KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MINUS,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRANSPARENT,RESET,KC_TRANSPARENT,KC_EXLM,KC_LPRN,KC_RPRN,KC_UNDS,KC_TRANSPARENT,KC_TRANSPARENT,KC_PERC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,RGB_MOD,HSV_0_4_241,KC_KP_PLUS,KC_DELETE,KC_TRANSPARENT,KC_MINUS,KC_TRANSPARENT,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_TRANSPARENT,KC_KP_ASTERISK,KC_DLR,KC_CIRC,KC_AT,KC_TRANSPARENT,KC_F12,KC_AMPR,KC_SLASH,KC_PIPE,KC_BSLASH,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_QUES,KC_LABK,KC_RABK,KC_DOT,RSFT_T(KC_NO),KC_TRANSPARENT,KC_TRANSPARENT,KC_KP_DOT,KC_EQUAL,KC_TRANSPARENT,RGB_TOG,RGB_SLD,KC_TRANSPARENT,KC_KP_DOT,KC_TRANSPARENT,KC_TRANSPARENT),

  [4] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,KC_TRANSPARENT,RESET,KC_1,KC_2,KC_3,KC_4,KC_5,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_CIRC,KC_AMPR,KC_KP_ASTERISK,KC_LPRN,KC_RPRN,KC_PIPE,KC_6,KC_7,KC_8,KC_9,KC_0,KC_DQUO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LABK,KC_RABK,KC_QUES,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};

rgblight_config_t rgblight_config;

bool suspended = false;
const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;
    case HSV_0_4_241:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(0,4,241);
        #endif
      }
      return false;
      break;
  }
  return true;
}

void matrix_init_user (void) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
}



uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 0:
        rgblight_config.raw = eeconfig_read_rgblight();
        if(rgblight_config.enable == true) {
          rgblight_enable();
          rgblight_mode(rgblight_config.mode);
          rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
        }
        else {
          rgblight_disable();
        }
        break;
      case 1:
        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(1);
        rgblight_sethsv_noeeprom(289,201,226);
        break;
      case 2:
        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(1);
        rgblight_sethsv_noeeprom(122,234,250);
        break;
      case 3:
        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(1);
        rgblight_sethsv_noeeprom(0,251,199);
        break;
      case 4:
        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(1);
        rgblight_sethsv_noeeprom(198,196,238);
        break;
    }
    return state;

}

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
    } else {
        ergodox_right_led_1_off();
        ergodox_right_led_2_off();
        ergodox_right_led_3_off();
    }
};
