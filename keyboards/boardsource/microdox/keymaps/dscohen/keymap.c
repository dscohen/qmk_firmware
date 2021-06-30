/*
Copyright 2020 Cole Smith <cole@boadsource.xyz>

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

enum layers {
    _QWERTY,
    _NUM,
    _NAV,
    _SYMB,
    _TMUX,
    _GAME ,
};

enum custom_keycodes {
    _T_NEW_,               // tmux new
    _T_PREV,               // tmux prev-window
    _T_NEXT,               // tmux next-window
    _T_LAST,               // tmux last-window
    _T_BEGI,               // tmux go to front of line
    _T_CMD_,               // tmux command
    _T_COPY,               // tmux copy-mode
    _T_PAST,               // tmux paste-buffer
    _T_SCRL,               // tmux scroll
    _T_MOVE,               // tmux move-window
    _T_RNAM,               // tmux rename-window
    _T_LEFT,               // tmux net panel
    _T_DOWN,               // tmux prev panel
    _T_RGHT,               // tmux net panel
    _T_VSPT,               // tmux vert split panel
    _T_HSPT,               // tmux hori split panel
    _T_KPAN,               // tmux hori split panel
    _T_UP__,               // tmux prev panel
    _T_1___,               // tmux select-window -t 1
    _T_2___,               // tmux select-window -t 2
    _T_3___,               // tmux select-window -t 3
    _T_4___,               // tmux select-window -t 4
    _T_5___,               // tmux select-window -t 5
    _T_6___,               // tmux select-window -t 6
    _T_7___,               // tmux select-window -t 7
    _T_8___,               // tmux select-window -t 8
    _T_9___,               // tmux select-window -t 9
    _T_0___,               // tmux select-window -t 0
    _ITERM_,               // tmux select-window -t 0
};
// enum combo_events {

// ZC_COPY,

// XV_PASTE

// };

// const uint16_t PROGMEM esc_combo[] =        {KC_X, KC_C,    COMBO_END};
// const uint16_t PROGMEM sptlght_combo[] =    {KC_U, KC_Y,    COMBO_END};
const uint16_t PROGMEM backslash_combo[] =      {KC_J, KC_L,       COMBO_END};
const uint16_t PROGMEM iterm_combo[] =      {KC_M, KC_N,       COMBO_END};
const uint16_t PROGMEM tabs_combo[] =        {KC_S, KC_T,    COMBO_END};
const uint16_t PROGMEM bkspc_combo[] =      {KC_R, KC_S,    COMBO_END};
const uint16_t PROGMEM bkspc1_combo[] =     {KC_4, KC_5,    COMBO_END};
const uint16_t PROGMEM bkspc2_combo[] =     {KC_DLR,  KC_LPRN, COMBO_END};
const uint16_t PROGMEM ent_combo[] =        {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM quote_combo[] =        {KC_K, KC_H, COMBO_END};
const uint16_t PROGMEM tilde_combo[] =        {KC_U, KC_L, COMBO_END};

const uint16_t PROGMEM underscore_combo[] =      {KC_COMM, KC_H, COMBO_END};
const uint16_t PROGMEM eq_combo[] =     {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM left_click_combo[] =     {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM right_click_combo[] =     {KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM copy_combo[] =      {KC_T, KC_G,       COMBO_END};
const uint16_t PROGMEM spotlight_combo[] =      {KC_L, KC_N,    COMBO_END};
const uint16_t PROGMEM paste_combo[] =      {KC_D, KC_V,       COMBO_END};

// const uint16_t PROGMEM copy1_combo[] =      {KC_D, KC_C, COMBO_END};
// const uint16_t PROGMEM paste1_combo[] =     {KC_D, KC_V, COMBO_END};
// const uint16_t PROGMEM copy2_combo[] =      {KC_K, KC_H, COMBO_END};
// const uint16_t PROGMEM paste2_combo[] =     {KC_H, KC_COMM, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {//COMBO(esc_combo, KC_ESC),
                                    COMBO(iterm_combo, LCTL(KC_BSLS)),
                                    COMBO(tabs_combo, KC_TAB),
                                    COMBO(spotlight_combo,LGUI(KC_SPC)),
                                    COMBO(backslash_combo,KC_BSLASH),
                                    COMBO(bkspc_combo,KC_BSPC),
                                    COMBO(bkspc1_combo,KC_BSPC),
                                    COMBO(bkspc2_combo,KC_BSPC),
                                    COMBO(ent_combo,KC_ENT),
                                    COMBO(quote_combo,KC_QUOT),
                                    COMBO(tilde_combo,KC_TILDE),
                                    COMBO(copy_combo,LGUI(KC_C)),
                                    // COMBO(copy2_combo,LGUI(KC_C)),
                                    COMBO(paste_combo,LGUI(KC_V)),
                                    // COMBO(paste2_combo,LGUI(KC_V)),
                                    COMBO(underscore_combo,KC_UNDS),
                                    COMBO(eq_combo,KC_EQL),
                                    COMBO(left_click_combo,KC_BTN1),
                                    COMBO(right_click_combo,KC_BTN2),


};

// #define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_split_3x5_3(
  MT(MOD_LCTL,KC_Q),    MT(MOD_LGUI,KC_W),    KC_F,    KC_P,    KC_B,         KC_J,    KC_L,    KC_U,    MT(MOD_LGUI,KC_Y),    MT(MOD_LCTL,KC_SCLN),
  MT(MOD_LSFT,KC_A),    KC_R,    KC_S,    KC_T,    KC_G,                  KC_M,    KC_N,    KC_E,    KC_I,    MT(MOD_RSFT,KC_O),
  MT(MOD_LALT, KC_Z),    KC_X,    KC_C,    KC_D,    KC_V,              KC_K,    KC_H,    KC_COMM, KC_DOT,  MT(MOD_LALT, KC_SLSH),
                    KC_LCTL, LT(_NAV,KC_BSPC), LT(_SYMB,KC_ESC),            LT(_NUM, KC_SPACE), LT(_TMUX,KC_LGUI),  KC_ENT
),

[_NUM] = LAYOUT_split_3x5_3(
  KC_1,    KC_7,    KC_8,    KC_9,    KC_5,           LGUI(KC_LEFT),    LALT(KC_LEFT),    LALT(KC_RIGHT),    LGUI(KC_RIGHT), KC_MEDIA_PLAY_PAUSE,
  KC_LSHIFT,    KC_4, KC_5,     KC_6,   KC_0,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_0,
  KC_COMM, KC_1,  KC_2, KC_3, KC_DOT,                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  KC_QUOT,
                    XXXXXXX, KC_LGUI, LT(_SYMB, KC_ESC),      XXXXXXX, XXXXXXX, XXXXXXX
), 

// [_LOWER] = LAYOUT_split_3x5_3(
//   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
//   KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
//   KC_CAPS, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE,  KC_DQT,
//                     XXXXXXX, XXXXXXX, XXXXXXX,      KC_ENT,  XXXXXXX, KC_DEL
// )
// },
// TODO add right side for volume
[_NAV] = LAYOUT_split_3x5_3(
    LGUI(KC_Z),          LCAG(KC_UP),   LCA(KC_UP),   LCAG(KC_RGHT),  SGUI(KC_Z),		 		KC_BTN1,  	    KC_BTN2, 	 KC_VOLD, 		KC_MUTE, 	 KC_VOLU,
    SGUI(KC_UP),   LCA(KC_LEFT),  LCA(KC_F),    LCA(KC_RGHT),   SGUI(KC_DOWN),   	KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_VOLU,
    SGUI(KC_4),         LCAG(KC_LEFT), LCA(KC_DOWN), LCAG(KC_DOWN),  LSFT(KC_BTN1),  		    KC_BTN1, KC_WH_U, KC_WH_D, KC_MS_R, KC_VOLD,
                           KC_TRNS, KC_TRNS,KC_TRNS,  	KC_LGUI,KC_TRNS,KC_TRNS
    ),

[_SYMB] = LAYOUT_split_3x5_3(
KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,   KC_GRV,  KC_TILD, KC_TRNS, KC_TRNS, KC_BSLS,
    KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_BTN2,   KC_PLUS, KC_MINS, KC_SLSH, KC_ASTR, KC_QUOT,
    KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_BTN1,   KC_AMPR, KC_EQL,  KC_COMM, KC_DOT,  KC_MINS,
                      CMB_TOG, KC_SCLN, KC_EQL,   MO(_NUM),  KC_SCLN, KC_DEL
    ),
[_TMUX] = LAYOUT_split_3x5_3( 
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_VSPT  , _T_7___ , _T_8___ , _T_9___ , _T_HSPT     ,     _T_BEGI , _T_PREV , _T_NEXT , _T_COPY , _T_SCRL ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_VSPT , _T_4___ , _T_5___ , _T_6___ , _T_0___      ,     _T_LEFT , _T_DOWN , _T_UP__ , _T_RGHT , _T_CMD_ ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   TG(_GAME) , _T_1___ , _T_2___ , _T_3___ , _T_PAST     ,     _T_KPAN, _T_NEW_ , _T_RNAM , _T_MOVE , _T_PAST ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 KC_TRNS,KC_TRNS , KC_TRNS     ,     KC_TRNS , KC_TRNS, KC_TRNS
                              //---------+---------+---+---+---------+---------//
),

[_GAME] = LAYOUT_split_3x5_3(
  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
  MT(MOD_LSFT,KC_A),    KC_R,    KC_S,    KC_T,    KC_G,                  KC_M,    KC_N,    KC_E,    KC_I,     KC_O,
  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,              KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                    KC_LCTL, MT(MOD_LCTL,KC_ESC), KC_SPACE,            KC_SPACE, TG(_GAME),  KC_ENT
),
};


#define TMUX_PREFIX SS_DOWN(X_LCTL) "a" SS_UP(X_LCTL)
/// Handle events when on the TMUX layer
static bool process_record_tmux(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;
    switch (keycode) {
        case _T_NEW_:
            SEND_STRING(TMUX_PREFIX "c");
            return false;
        case _T_PREV:
            SEND_STRING(TMUX_PREFIX "p");
            return false;
        case _T_LEFT:
            SEND_STRING(TMUX_PREFIX SS_TAP(X_LEFT));
            return false;
        case _T_DOWN:
            SEND_STRING(TMUX_PREFIX SS_TAP(X_DOWN));
            return false;
        case _T_UP__:
            SEND_STRING(TMUX_PREFIX SS_TAP(X_UP));
            return false;
        case _T_RGHT:
            SEND_STRING(TMUX_PREFIX SS_TAP(X_RIGHT));
            return false;
        case _T_NEXT:
            SEND_STRING(TMUX_PREFIX "n");
            return false;
        case _T_KPAN:
            SEND_STRING(TMUX_PREFIX "x");
            return false;
        case _T_VSPT:
            SEND_STRING(TMUX_PREFIX "|");
            return false;
        case _T_HSPT:
            SEND_STRING(TMUX_PREFIX "-");
            return false;
        case _T_LAST:
            SEND_STRING(TMUX_PREFIX "l");
            return false;
        case _T_CMD_:
            SEND_STRING(TMUX_PREFIX ":");
            return false;
        case _T_COPY:
            SEND_STRING(TMUX_PREFIX "[");
            return false;
        case _T_PAST:
            SEND_STRING(TMUX_PREFIX "]");
            return false;
        case _T_SCRL:
            SEND_STRING(TMUX_PREFIX SS_TAP(X_PGUP));
            return false;
        case _T_MOVE:
            SEND_STRING(TMUX_PREFIX ".");
            return false;
        case _T_RNAM:
            SEND_STRING(TMUX_PREFIX ",");
            return false;
        case _T_BEGI:
            SEND_STRING(TMUX_PREFIX TMUX_PREFIX);
            return false;
        case _T_1___:
            SEND_STRING(TMUX_PREFIX "1");
            return false;
        case _T_2___:
            SEND_STRING(TMUX_PREFIX "2");
            return false;
        case _T_3___:
            SEND_STRING(TMUX_PREFIX "3");
            return false;
        case _T_4___:
            SEND_STRING(TMUX_PREFIX "4");
            return false;
        case _T_5___:
            SEND_STRING(TMUX_PREFIX "5");
            return false;
        case _T_6___:
            SEND_STRING(TMUX_PREFIX "6");
            return false;
        case _T_7___:
            SEND_STRING(TMUX_PREFIX "7");
            return false;
        case _T_8___:
            SEND_STRING(TMUX_PREFIX "8");
            return false;
        case _T_9___:
            SEND_STRING(TMUX_PREFIX "9");
            return false;
        case _T_0___:
            SEND_STRING(TMUX_PREFIX "0");
            return false;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (get_highest_layer(layer_state) == _TMUX) {
        return process_record_tmux(keycode, record);
    }
    return true;
}