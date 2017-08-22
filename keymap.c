#include "satan.h"
#include "action_layer.h"

#define _BL 0
#define _FL 1
#define _UL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /*
   *  Base layer, pretty standard ANSI layout.
   * ,-----------------------------------------------------------.
   * |ESC | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Caps/Fn|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space             |Alt |Fn0 |Fn3 |Ctrl|
   * `-----------------------------------------------------------'
   */


[0] = KEYMAP_ANSI(
  KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS, \
  F(3)   , KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT,  \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,         KC_RSFT, \
  KC_LCTL, KC_LGUI,KC_LALT,                KC_SPC,                                 KC_RALT,F(1), F(4),KC_RCTL),
/*
	[_BL] = KEYMAP(
        KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC, \
	KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS, \
        F(2),KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_NO,KC_ENT,  \
        KC_LSFT,KC_NO,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_NO,KC_RSFT, \
        KC_LCTL,KC_LGUI,KC_LALT,        KC_SPC,      KC_NO,KC_RALT,F(0),F(3),KC_RCTL),

*/

   /*
   * Primary function layer, mostly the same as the traditional Pok3r layout.
   * ,-------------------------------------------------------------.
   * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9| F10| F11| F12|DEL   |
   * |-------------------------------------------------------------|
   * |`~ |   |   |   |   |   |    |   |   |    |    |    |PrSc |   |
   * |-------------------------------------------------------------|
   * |      |Mute|VolDn|VolUp|   |PgUp|Left|Down|Up|Right|  | |    |
   * |-------------------------------------------------------------|
   * |        |   |   |   |   |PgDn|Home|End |   |   |   |         |
   * |-------------------------------------------------------------|
   * |    |    |    |                          |    |    |    |    |
   * `-------------------------------------------------------------'
   */

[1] = KEYMAP_ANSI(
  KC_TRNS, KC_F1  ,KC_F2  ,KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,  KC_F11 , KC_F12, KC_DELETE, \
  KC_GRAVE,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_PSCR,KC_TRNS, \
  KC_TRNS,KC_MUTE,KC__VOLDOWN,KC__VOLUP,KC_TRNS,KC_PGUP,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,KC_TRNS,KC_TRNS,         KC_TRNS,  \
  KC_TRNS,         KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PGDN,KC_HOME,KC_END, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,         KC_TRNS, \
  KC_TRNS, KC_TRNS,KC_TRNS,                KC_TRNS,                                 KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS),
/*
	[_FL] = KEYMAP(
        KC_TRNS,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_DELETE, \
        KC_GRAVE,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_TRNS, \
        KC_TRNS,KC_MUTE,KC__VOLDOWN,KC__VOLUP,KC_TRNS,KC_PGUP,KC_LEFT,KC_DOWN,KC_UP,KC_RGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PGDN,KC_HOME,KC_END,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),

  */

  /* Keymap _FL: Function Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |  RESET|
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |BL-|BL+|BL   |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |       |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        | F1|F2 | F3|F4 | F5| F6| F7| F8|   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[2] = KEYMAP_ANSI(
  #ifdef RGBLIGHT_ENABLE
  KC_GRV, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,RESET,  \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, BL_DEC,BL_INC, BL_TOGG, \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,        KC_NO, \
  KC_NO,RGB_TOG,RGB_MOD,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD,KC_NO,KC_NO,KC_NO, \
  KC_NO,KC_NO,KC_NO,                 KC_NO,                       KC_NO,KC_NO,KC_TRNS, KC_NO),
  #else
  KC_GRV, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,RESET,  \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, BL_DEC, BL_INC,BL_TOGG, \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO, \
  KC_NO,KC_NO,KC_NO,                KC_NO,                        KC_NO,KC_NO,KC_TRNS,KC_NO),
  #endif
};

enum function_id {
    RGBLED_TOGGLE,
    RGBLED_STEP_MODE,
    RGBLED_INCREASE_HUE,
    RGBLED_DECREASE_HUE,
    RGBLED_INCREASE_SAT,
    RGBLED_DECREASE_SAT,
    RGBLED_INCREASE_VAL,
    RGBLED_DECREASE_VAL,
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
    [1]  = ACTION_LAYER_MOMENTARY(1),  // Momentary Fn overlay
    [2]  = ACTION_LAYER_TOGGLE(1),     // Toggle Arrow Layer overlay
    [3]  = ACTION_LAYER_TAP_KEY(1, KC_CAPS), // Tap to toggle caps lock and hold to activate function layer
    [4]  = ACTION_LAYER_MOMENTARY(2),     // Toggle Underglow Layer overlay
    [5]  = ACTION_FUNCTION(RGBLED_TOGGLE), //Turn on/off underglow
    [6]  = ACTION_FUNCTION(RGBLED_STEP_MODE), // Change underglow mode
};


void matrix_scan_user(void) {

};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
};
