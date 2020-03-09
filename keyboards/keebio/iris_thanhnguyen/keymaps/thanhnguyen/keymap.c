#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//     `~     1     2     3     4     5                        6     7     8     9     0     ⌫ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
//   TAB     Q     W     E     R     T                        Y     U     I     O     P       
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     A     S     D     F     G                        H     J     K     L   SCLN   QUOT 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                SPC  RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐   ┌────────┐   ┌────────┐   ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        TG_LOWR,     TG_RAIS,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(T_ESCTAB),KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_SPC,      KC_ENT,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        TT_LOWR,     TT_RAIS,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, LCTL_T(KC_QUOT),
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ┌────────┼────────┼────────┼────────┼────────┼────────┤
   TD(T_SHFCAP), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_LGUI,     TD_CTRL,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT
  //└────────┴────────┴────────┴────────┴────────┴────────┘   └────────┘   └────────┘   └────────┴────────┴────────┴────────┴────────┴────────┘
  ),

   [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐   ┌────────┐   ┌────────┐   ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        TG_LOWR,     TG_RAIS,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(T_ESCTAB),KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_SPC,      KC_ENT,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        TT_LOWR,     TT_RAIS,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, LCTL_T(KC_QUOT),
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ┌────────┼────────┼────────┼────────┼────────┼────────┤
   TD(T_SHFCAP), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_LCTL,     TD_CTRL,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT
  //└────────┴────────┴────────┴────────┴────────┴────────┘   └────────┘   └────────┘   └────────┴────────┴────────┴────────┴────────┴────────┘
  ),

   //   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
   //     F1    F2    F3    F4    F5     F6                      F7    F8    F9    F10   F11   F12
   //   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
   //      ⇥    Q     W     E     R     T                         Y     U     I     O     P     ⌦ 
   //   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
   //     LCTL  A     S     D     F     G                         ←     ↓     ↑     →   SCLN    ⌫ 
   //   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   //      ⇧     Z     X     C     V     B  TG_LOWR        DEL    N     M     ,     .     /     ⇧ 
   //   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
   //                         LGUI  LOWER  ENT                 SPC RAISE RALT
   //                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐   ┌────────┐   ┌────────┐   ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6 ,      TG_LOWR,     TG_RAIS,      KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11, KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┤
     TD(T_ESCTAB),KC_Q, KC_W,   KC_E,    KC_R,     KC_T,       KC_SPC,      KC_ENT,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        TT_LOWR,     TT_RAIS,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤   ├────────┤   ├────────┤   ┌────────┼────────┼────────┼────────┼────────┼────────┤
     TD(T_SHFCAP), KC_Z, KC_X,  KC_C,    KC_V,    KC_B,        KC_LGUI,     TD_CTRL,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RESET
  //└────────┴────────┴────────┴────────┴────────┴────────┘   └────────┘   └────────┘   └────────┴────────┴────────┴────────┴────────┴────────┘
  ),

//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//    ESC    1      2     3     4     5                        6     7     8     9     0     - 
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
//      *     `     <     `     >     !                        @     [     -     ]     -     ⌦ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
//      ^     \     {     =     }     #                        _     (     "     )           ⌫ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     %     :     *     +     ~  TG_LOWR        DEL    $     &     ,     ?     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                 SPC RAISE RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_LPRN,         _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_GRV , KC_LT  , KC_GRV , KC_GT  , KC_EXLM,  _______,         _______, KC_AT,   KC_LBRC, KC_MINS, KC_RBRC, KC_MINS, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_BSLS, KC_LCBR, KC_EQL , KC_RCBR, KC_HASH , _______,         _______, KC_UNDS, KC_LPRN, KC_DQT , KC_RPRN, KC_PIPE, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_PERC, KC_COLN, KC_ASTR, KC_PLUS, KC_TILD, _______,          _______, KC_DLR , KC_AMPR, KC_CIRC, _______, KC_QUES,  RESET
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_QWERTY:
      if (record->event.pressed) {
        layer_off(_ADJUST);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_on(_QWERTY);
      }
      return false;
      break;
    case ON_LOWER:
      if (record->event.pressed) {
        layer_off(_ADJUST);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_LOWER);
      }
      return false;
      break;

    case ON_ADJUST:
      if (record->event.pressed) {
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_ADJUST);
      }
      return false;
      break;
  }

  #ifdef RGBLIGHT_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}