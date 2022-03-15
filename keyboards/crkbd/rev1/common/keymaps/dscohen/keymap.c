/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_GRV, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, OSL(7), OSL(7), LALT_T(KC_A), LGUI_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LGUI_T(KC_I), LALT_T(KC_O), KC_NO, OSL(1), KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(3,KC_TAB), LT(1,KC_BSPC), LT(2,KC_ESC), LT(4,KC_ENT), LT(5,KC_SPC), LT(6,KC_WBAK)),

[_LAYER1] = LAYOUT(KC_NO, KC_NO, KC_NO, LGUI(KC_V), LGUI(KC_C), KC_NO, SGUI(KC_Z), LGUI(KC_Z), LGUI(KC_C), LGUI(KC_V), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER2] = LAYOUT(KC_NO, KC_NO, LCAG(KC_UP), LCA(KC_UP), LCAG(KC_RGHT), KC_NO, KC_NO, LGUI(KC_LBRC), LGUI(KC_W), LGUI(KC_RBRC), KC_NO, KC_NO, KC_NO, SGUI(KC_UP), LCA(KC_LEFT), LCA(KC_F), LCA(KC_RGHT), SGUI(KC_DOWN), LCTL(KC_BSLS), LGUI(KC_TAB), LGUI(KC_GRV), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCAG(KC_LEFT), LCA(KC_DOWN), LCAG(KC_DOWN), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER3] = LAYOUT(KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, BL_TOGG, BL_STEP, BL_INC, BL_ON, BL_OFF, RGB_SAI, KC_NO, KC_COLN, KC_4, KC_5, KC_6, KC_EQL, KC_MPRV, KC_VOLD, BL_DEC, KC_MNXT, RGB_MOD, RGB_HUI, KC_NO, KC_PLUS, KC_1, KC_2, KC_3, KC_BSLS, KC_MSTP, KC_MPLY, KC_MUTE, RGB_TOG, RGB_VAI, KC_NO, KC_DOT, KC_0, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER4] = LAYOUT(KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_LPRN, KC_RPRN, KC_CIRC, KC_NO, KC_NO, KC_NO, KC_COLN, KC_4, KC_5, KC_6, KC_EQL, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_PLUS, KC_1, KC_2, KC_3, KC_SCLN, KC_COLN, KC_LBRC, KC_RBRC, KC_UNDS, KC_NO, KC_NO, KC_DOT, KC_0, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER5] = LAYOUT(KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_RCBR, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_DLR, KC_PERC, KC_CIRC, KC_GRV, KC_NO, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER6] = LAYOUT(KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, SGUI(KC_E), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER7] = LAYOUT(KC_NO, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRNS, KC_TRNS, KC_M, KC_N, KC_E, KC_I, KC_O, KC_A, KC_R, KC_S, KC_T, KC_G, KC_NO, KC_NO, KC_K, KC_H, KC_COMM, KC_DOT, KC_QUES, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_NO, KC_BSPC, KC_NO) 

};

void matrix_init_user(void) {
  rgblight_enable();
  rgblight_setrgb(0x00,  0xFF, 0xFF);
};

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case _LAYER1:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _LAYER2:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case _LAYER3:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case _ADJUST:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
