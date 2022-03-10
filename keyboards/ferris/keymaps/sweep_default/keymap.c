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
#include "quantum.h"

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
    KC_BRACKETS,
};
// enum combo_events {

// ZC_COPY,

// XV_PASTE

// };

const uint16_t PROGMEM esc_combo[] =        {KC_DOT, KC_COMM,    COMBO_END};
const uint16_t PROGMEM alt_combo[] =        {KC_F, KC_W,    COMBO_END};
const uint16_t PROGMEM ctrl_combo[] =        {KC_X, KC_C,    COMBO_END};
const uint16_t PROGMEM mehR_combo[] =        {KC_N, KC_H,    COMBO_END};
const uint16_t PROGMEM mehL_combo[] =        {KC_T, KC_D,    COMBO_END};
const uint16_t PROGMEM meh_arrowL_combo[] =        {KC_LEFT, KC_DOWN,    COMBO_END};
const uint16_t PROGMEM meh_arrowR_combo[] =        {KC_UP, KC_DOWN,    COMBO_END};
const uint16_t PROGMEM meh_cmd_arrowR_combo[] =        {LALT(KC_LEFT), LALT(KC_RIGHT),    COMBO_END};
const uint16_t PROGMEM meh_cmd_arrowL_combo[] =        {LALT(KC_LEFT), LGUI(KC_LEFT),    COMBO_END};
// const uint16_t PROGMEM sptlght_combo[] =    {KC_U, KC_Y,    COMBO_END};
// const uint16_t PROGMEM esc_combo[] =        {KC_P, KC_T,    COMBO_ENDcc
// const uint16_t PROGMEM sptlght_combo[] =    {KC_U, KC_Y,    COMBO_END};
const uint16_t PROGMEM backslash_combo[] =      {KC_J, KC_L,       COMBO_END};
const uint16_t PROGMEM iterm_combo[] =      {LT(_NUM,KC_M), KC_N,       COMBO_END};
const uint16_t PROGMEM tabs_combo[] =        {KC_S, KC_T,    COMBO_END};
const uint16_t PROGMEM bkspc_combo[] =      {KC_C, KC_S,    COMBO_END};
const uint16_t PROGMEM bkspc1_combo[] =     {KC_1, KC_2,    COMBO_END};
const uint16_t PROGMEM bkspc2_combo[] =     {KC_LBRC,  KC_LPRN, COMBO_END};
const uint16_t PROGMEM bkspcmid_combo[] =      {KC_R, KC_S,    COMBO_END};
const uint16_t PROGMEM bkspc1mid_combo[] =     {KC_1, KC_2,    COMBO_END};
const uint16_t PROGMEM bkspc2mid_combo[] =     {KC_DLR,  KC_LPRN, COMBO_END};
const uint16_t PROGMEM ent_combo[] =        {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM semicolon_combo[] =        {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM tilde_combo[] =        {KC_U, KC_L, COMBO_END};

const uint16_t PROGMEM underscore_combo[] =      {KC_COMM, KC_H, COMBO_END};
const uint16_t PROGMEM eq_combo[] =     {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM colon_combo[] =     {KC_E, KC_COMM, COMBO_END};
const uint16_t PROGMEM right_click_combo[] =     {KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM copy_combo[] =      {KC_T, LT(_NUM,KC_G),       COMBO_END};
const uint16_t PROGMEM spotlight_combo[] =      {KC_L, KC_N,    COMBO_END};
const uint16_t PROGMEM paste_combo[] =      {KC_D, KC_V,       COMBO_END};
// const uint16_t PROGMEM lbracket_combo[] =      {KC_E, KC_I,       COMBO_END};
const uint16_t PROGMEM lbracket_combo[] =      {KC_N, KC_E, KC_I,       COMBO_END};
const uint16_t PROGMEM leave_nav_combo[] =      {KC_MS_R, KC_WH_D,       COMBO_END};
const uint16_t PROGMEM osl_sym[] =      {KC_U, KC_Y,       COMBO_END};
const uint16_t PROGMEM gui[] =      {KC_Y, KC_QUOT,       COMBO_END};
const uint16_t PROGMEM prev_tab[] =      {KC_VOLD, KC_WH_U,       COMBO_END};
const uint16_t PROGMEM next_tab[] =      {KC_WH_D, KC_WH_U,       COMBO_END};


// KC_VOLD, KC_MS_R, KC_WH_D, KC_WH_U, KC_VOLD,
// const uint16_t PROGMEM paste_combo[] =      {KC_D, KC_V,       COMBO_END};

// const uint16_t PROGMEM copy1_combo[] =      {KC_D, KC_C, COMBO_END};
// const uint16_t PROGMEM paste1_combo[] =     {KC_D, KC_V, COMBO_END};
// const uint16_t PROGMEM copy2_combo[] =      {KC_K, KC_H, COMBO_END};
// const uint16_t PROGMEM paste2_combo[] =     {KC_H, KC_COMM, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {COMBO(esc_combo, KC_ESC),
                                    COMBO(iterm_combo, LCTL(KC_BSLS)),
                                    COMBO(tabs_combo, KC_TAB),
                                    COMBO(spotlight_combo,LGUI(KC_SPC)),
                                    COMBO(backslash_combo,KC_BSLASH),
                                    COMBO(bkspc_combo,KC_BSPC),
                                    COMBO(bkspc1_combo,KC_BSPC),
                                    COMBO(bkspc2_combo,KC_BSPC),
                                    COMBO(bkspcmid_combo,KC_BSPC),
                                    COMBO(bkspc1mid_combo,KC_BSPC),
                                    COMBO(bkspc2mid_combo,KC_BSPC),
                                    COMBO(ent_combo,KC_ENT),
                                    COMBO(semicolon_combo,KC_SCLN),
                                    COMBO(tilde_combo,KC_TILDE),
                                    COMBO(copy_combo,LGUI(KC_C)),
                                    COMBO(colon_combo,LSFT(KC_SCLN)),
                                    // COMBO(copy2_combo,LGUI(KC_C)),
                                    COMBO(paste_combo,LGUI(KC_V)),
                                    // COMBO(paste2_combo,LGUI(KC_V)),
                                    COMBO(underscore_combo,KC_UNDS),
                                    COMBO(eq_combo,KC_EQL),
                                    COMBO(right_click_combo,KC_BTN2),
                                    COMBO(lbracket_combo,KC_CAPS),
                                    COMBO(leave_nav_combo,TG(_NAV)),
                                    COMBO(osl_sym,OSL(_SYMB)),
                                    COMBO(gui,KC_LGUI),
                                    COMBO(prev_tab,RCS(KC_TAB)),
                                    COMBO(next_tab,RCTL(KC_TAB)),
                                    COMBO(mehR_combo,OSM(MOD_MEH)),
                                    COMBO(mehL_combo,OSM(MOD_MEH)),
                                    COMBO(meh_arrowL_combo,MEH(KC_LEFT)),
                                    COMBO(meh_arrowR_combo,MEH(KC_RIGHT)),
                                    COMBO(meh_cmd_arrowL_combo,MEH(LGUI(KC_LEFT))),
                                    COMBO(meh_cmd_arrowR_combo,MEH(LGUI(KC_RIGHT))),
                                    COMBO(ctrl_combo,OSM(MOD_LCTL)),
                                    COMBO(alt_combo,OSM(MOD_LALT)),



};
// #define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)
enum {
    TD_TG_NAV,
    TD_LEAVE_NAV,
};
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_TG_NAV] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_K, _NAV),
    [TD_LEAVE_NAV] = ACTION_TAP_DANCE_LAYER_TOGGLE(_QWERTY, XXXXXXX),
};
// Add tap dance item to your keymap in place of a keycode


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(                                                            
  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,         KC_QUOT, KC_Y, KC_U, KC_L, KC_J,
  MT(MOD_LSFT,KC_A),    KC_R,    KC_S,    KC_T,    LT(_NUM,KC_G),                  MT(MOD_LSFT,KC_O), KC_I, KC_E, KC_N, LT(_NUM,KC_M),
  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,              MT(MOD_LALT,KC_SLSH), KC_DOT, KC_COMM, KC_H, KC_K,
                     LT(_NAV,KC_F24), MO(_SYMB),            LT(_NUM,KC_F24), KC_SPACE
),

[_NUM] = LAYOUT(
  KC_5,    KC_6,    KC_7,    KC_8,    KC_9,           LGUI(KC_UP), LGUI(KC_RIGHT), LALT(KC_RIGHT), LALT(KC_LEFT), LGUI(KC_LEFT),
  KC_0,    KC_1, KC_2,     MT(MOD_LSFT,KC_3),  LT(_NUM,KC_4),            KC_MUTE, KC_RGHT, KC_UP, KC_DOWN, KC_LEFT,
  XXXXXXX, KC_LSFT,  KC_DOT, KC_COMM, XXXXXXX,                LGUI(KC_DOWN), XXXXXXX, XXXXXXX, OSM(MOD_LGUI), XXXXXXX,
                     KC_TRNS, MO(_SYMB),      KC_TRNS, KC_TRNS
),

// [_LOWER] = LAYOUT_split_3x5_3(
//   KC_EXLM, KC_AT,   KC_HASH, KC_DR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
//   KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
//   KC_CAPS, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE,  KC_DQT,
//                     XXXXXXX, XXXXXXX, XXXXXXX,      KC_ENT,  XXXXXXX, KC_DELfor 

// )
// },
// TODO add right side for volume
[_NAV] = LAYOUT(
    LGUI(KC_Z),          LCAG(KC_UP),   LCA(KC_UP),   LCAG(KC_RGHT),  SGUI(KC_Z),		 		KC_VOLU,LGUI(KC_RIGHT), LALT(KC_RIGHT), LALT(KC_LEFT), LGUI(KC_LEFT),
    SGUI(KC_UP),   LCA(KC_LEFT),  LCA(KC_F),    LCA(KC_RGHT),   SGUI(KC_DOWN),   	           KC_MUTE, KC_RGHT, KC_UP, KC_DOWN, KC_LEFT,
    SGUI(KC_4),         LCAG(KC_LEFT), LCA(KC_DOWN), LCAG(KC_DOWN),  LSFT(KC_BTN1),  		    KC_VOLD, KC_MS_R, KC_WH_D, KC_WH_U, KC_VOLD,
                           KC_TRNS,KC_TRNS,  	                                                        KC_LSFT,KC_LSFT
    ),

[_SYMB] = LAYOUT(
XXXXXXX, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,        XXXXXXX, KC_RGHT, KC_UP, KC_DOWN, KC_LEFT,
    KC_LBRC, KC_RBRC,  KC_LPRN, KC_RPRN, KC_TILD,   KC_PLUS, KC_ASTR, KC_SLSH, KC_MINS, LT(_NUM,KC_PLUS),
    XXXXXXX, XXXXXXX, KC_CIRC, KC_PERC, KC_PIPE,   XXXXXXX, KC_EXLM, KC_DLR, KC_HASH, KC_AMPR,
                       KC_SCLN, KC_EQL,             MO(_NUM), MO(_TMUX)
    ),
[_TMUX] = LAYOUT( 
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_5___  , _T_6___ , _T_7___ , _T_8___ , _T_9___     ,      _T_SCRL , _T_COPY , _T_NEXT , _T_PREV , _T_BEGI,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_0___ , _T_1___ , _T_2___ , _T_3___ , _T_4___      , _T_CMD_ , _T_RGHT , _T_UP__ , _T_DOWN , _T_LEFT ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_VSPT , _T_1___ , _T_2___ , _T_3___ , _T_HSPT     , _T_PAST , _T_MOVE , _T_RNAM , _T_NEW_ ,  _T_KPAN, 
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
                                 KC_TRNS , KC_TRNS     ,     KC_TRNS , KC_TRNS
                              //---------+---------+---+---+---------+---------//
)
};


#define TMUX_PREFIX SS_DOWN(X_LCTL) "a" SS_UP(X_LCTL)
/// Handle events when on the TMUX layer
static bool process_record_tmux(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;
    switch (keycode) {
        case KC_BRACKETS:
            SEND_STRING("c");
            return false;
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

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT,KC_A):
            return 170;
        case MT(MOD_LSFT,KC_O):
            return 200;
        case TD(TD_TG_NAV):
            return 150;
        // case MT(MOD_RSFT,KC_O):
        //     return 190;
        default:
            return TAPPING_TERM;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // static uint16_t fnx_layer_timer;
    if (get_highest_layer(layer_state) == _TMUX) {
        return process_record_tmux(keycode, record);
    }   
    switch(keycode) {
        case LT(_SYMB,KC_F24):
            if (record->tap.count == 1 &&
                !record->event.pressed) {
                    set_oneshot_mods(MOD_LSFT);
                    // fnx_layer_timer = timer_read();
                    return false;
            } else
                 {
                     return true;
                //    layer_off(_SYMB);
                //     if (timer_elapsed(fnx_layer_timer) < 150) {  
                //         set_oneshot_mods(MOD_LGUI);
                    }
                }
    switch(keycode) {
        case LT(_NAV,KC_F24):
            if (record->tap.count == 1 &&
                !record->event.pressed) {
                    set_oneshot_mods(MOD_LCTL);
                    // fnx_layer_timer = timer_read();
                    return false;
            } else
                 {
                     return true;
                //    layer_off(_SYMB);
                //     if (timer_elapsed(fnx_layer_timer) < 150) {  
                //         set_oneshot_mods(MOD_LGUI);
                    }
                }
        switch(keycode) {
        case LT(_NUM,KC_F24):
            if (record->tap.count == 1 &&
                !record->event.pressed) {
                    set_oneshot_mods(MOD_LGUI);
                    // fnx_layer_timer = timer_read();
                    return false;
            } else
                 {
                     return true;
                //    layer_off(_SYMB);
                //     if (timer_elapsed(fnx_layer_timer) < 150) {  
                //         set_oneshot_mods(MOD_LGUI);
                    }
                }


    
    return true;
}