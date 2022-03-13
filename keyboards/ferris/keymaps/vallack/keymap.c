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
    _T_PREF,
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

const uint16_t PROGMEM underscore_combo[] =        {KC_DOT, KC_COMM,    COMBO_END};
// const uint16_t PROGMEM sptlght_combo[] =    {KC_U, KC_Y,    COMBO_END};
// const uint16_t PROGMEM esc_combo[] =        {KC_P, KC_T,    COMBO_END};
// const uint16_t PROGMEM sptlght_combo[] =    {KC_U, KC_Y,    COMBO_END};
const uint16_t PROGMEM backslash_combo[] =      {KC_J, KC_L,       COMBO_END};
const uint16_t PROGMEM iterm_combo[] =      {KC_M, KC_N,       COMBO_END};
const uint16_t PROGMEM tabs_combo[] =        {KC_S, KC_T,    COMBO_END};
const uint16_t PROGMEM bkspc_combo[] =      {KC_C, KC_S,    COMBO_END};
const uint16_t PROGMEM bkspc1_combo[] =     {KC_7, KC_8,    COMBO_END};
const uint16_t PROGMEM bkspc2_combo[] =     {KC_LBRC,  KC_LPRN, COMBO_END};
const uint16_t PROGMEM bkspcmid_combo[] =      {KC_R, KC_S,    COMBO_END};
const uint16_t PROGMEM bkspc1mid_combo[] =     {KC_4, KC_5,    COMBO_END};
const uint16_t PROGMEM bkspc2mid_combo[] =     {KC_DLR,  KC_LPRN, COMBO_END};
const uint16_t PROGMEM ent_combo[] =        {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM semicolon_combo[] =        {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM tilde_combo[] =        {KC_U, KC_L, COMBO_END};
const uint16_t PROGMEM slash_combo[] =        {KC_H, KC_N, COMBO_END};
//const uint16_t PROGMEM esc_combo[] =      {KC_H, KC_, COMBO_END};
const uint16_t PROGMEM esc_combo[] =      {KC_COMM, KC_H, COMBO_END};
const uint16_t PROGMEM eq_combo[] =     {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM colon_combo[] =     {KC_E, KC_COMM, COMBO_END};
const uint16_t PROGMEM left_click_combo[] =     {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM right_click_combo[] =     {KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM copy_combo[] =      {KC_T, KC_G,       COMBO_END};
const uint16_t PROGMEM spotlight_combo[] =      {KC_L, KC_N,    COMBO_END};
const uint16_t PROGMEM paste_combo[] =      {KC_D, KC_V,       COMBO_END};
// const uint16_t PROGMEM lbracket_combo[] =      {KC_E, KC_I,       COMBO_END};
const uint16_t PROGMEM lbracket_combo[] =      {KC_N, KC_E, KC_I,       COMBO_END};
const uint16_t PROGMEM next_tab[] =      {KC_MS_R, KC_WH_D,       COMBO_END};
const uint16_t PROGMEM osm_gui[] =      {KC_U, KC_Y,       COMBO_END};
const uint16_t PROGMEM osm_gui_r[] =      {KC_W, KC_F,       COMBO_END};
const uint16_t PROGMEM gui[] =      {KC_Y, KC_QUOT,       COMBO_END};
const uint16_t PROGMEM prev_tab[] =      {KC_VOLD, KC_WH_U,       COMBO_END};
const uint16_t PROGMEM leave_nav_combo[] =      {KC_WH_D, KC_WH_U,       COMBO_END};
const uint16_t PROGMEM to_nav[] =      {KC_UP, KC_DOWN, KC_RIGHT,       COMBO_END};

const uint16_t PROGMEM rbracket[] =      {KC_AT, KC_EXLM,       COMBO_END};
const uint16_t PROGMEM lbracket[] =      {OSM(MOD_LSFT), KC_DOT,       COMBO_END};
const uint16_t PROGMEM lparen[] =      {KC_7, KC_9,       COMBO_END};
const uint16_t PROGMEM rparen[] =      {KC_DOWN, KC_RIGHT,       COMBO_END};
const uint16_t PROGMEM lcurly[] =      {KC_4, KC_3,       COMBO_END};
const uint16_t PROGMEM rcurly[] =      {KC_4, KC_5,       COMBO_END};
const uint16_t PROGMEM plus[] =      {KC_LEFT, KC_DOWN,       COMBO_END};
const uint16_t PROGMEM minus[] =      {KC_DOWN, KC_UP,       COMBO_END};
const uint16_t PROGMEM multiply[] =      {KC_UP, KC_RIGHT,       COMBO_END};
const uint16_t PROGMEM carrot[] =      {LGUI(KC_RIGHT), LALT(KC_RIGHT),    COMBO_END};
const uint16_t PROGMEM colon_sym[] =      {KC_PERC, KC_UP,    COMBO_END};
const uint16_t PROGMEM ampersand[] =      {KC_9, KC_4,       COMBO_END}; //KC_AMPR
const uint16_t PROGMEM lparen_base[] =      {KC_R,KC_T  ,     COMBO_END};
const uint16_t PROGMEM lbracket_base[] =      {KC_X, KC_D,       COMBO_END};
const uint16_t PROGMEM rparen_base[] =      {KC_N, KC_I,       COMBO_END};
const uint16_t PROGMEM rbracket_base[] =      {KC_H, KC_DOT,       COMBO_END};
const uint16_t PROGMEM leave_num[] =      {KC_PERC, KC_EXLM,       COMBO_END};
// KC_VOLD, KC_MS_R, KC_WH_D, KC_WH_U, KC_VOLD,
// const uint16_t PROGMEM paste_combo[] =      {KC_D, KC_V,       COMBO_END};

// const uint16_t PROGMEM copy1_combo[] =      {KC_D, KC_C, COMBO_END};
// const uint16_t PROGMEM paste1_combo[] =     {KC_D, KC_V, COMBO_END};
// const uint16_t PROGMEM copy2_combo[] =      {KC_K, KC_H, COMBO_END};
// const uint16_t PROGMEM paste2_combo[] =     {KC_H, KC_COMM, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {COMBO(esc_combo, KC_ESC),
                                    //COMBO(nothing_combo, KC_MEH),
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
                                    COMBO(paste_combo,LGUI(KC_V)),
                                    COMBO(slash_combo,KC_SLSH),
                                    COMBO(underscore_combo,KC_UNDS),
                                    COMBO(eq_combo,KC_EQL),
                                    COMBO(left_click_combo,KC_BTN1),
                                    COMBO(right_click_combo,KC_BTN2),
                                    COMBO(lbracket_combo,TG(_NAV)),
                                    COMBO(leave_nav_combo,TG(_NAV)),
                                    COMBO(to_nav,TO(_NAV)),
                                    COMBO(leave_num, TG(_NUM)),
                                    COMBO(osm_gui,OSM(MOD_LGUI)),
                                    COMBO(osm_gui_r,OSM(MOD_LGUI)),
                                    COMBO(prev_tab,RCS(KC_TAB)),
                                    COMBO(next_tab,RCTL(KC_TAB)),
                                    COMBO(lbracket, KC_LBRC),
                                    COMBO(rbracket, KC_RBRC),
                                    COMBO(lparen, KC_LPRN),
                                    COMBO(rparen, KC_RPRN),
                                    COMBO(rcurly, KC_RCBR),
                                    COMBO(lcurly, KC_LCBR),
                                    COMBO(plus, KC_PLUS),
                                    COMBO(minus, KC_MINS),   
                                    COMBO(multiply, KC_ASTR),
                                    COMBO(carrot, KC_CIRC),
                                    COMBO(colon_sym, LSFT(KC_SCLN)),
                                    COMBO(ampersand, KC_AMPR),
                                    COMBO(lbracket_base, KC_LBRC),
                                    COMBO(rbracket_base, KC_RBRC),
                                    COMBO(lparen_base, KC_LPRN),
                                    COMBO(rparen_base, KC_RPRN),
};
// #define RAISE MO(_RAISE)rt for i in rangewpwfp
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
//   !@{}| `_ _ _ _
//   #$()_ +-/*+
//   %^[] _ & _ _

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(                                                            
  MT(MOD_LCTL,KC_Q),    KC_W,    KC_F,    KC_P,    KC_B,       MT(MOD_LCTL,KC_QUOT), KC_Y, KC_U, KC_L, KC_J,
  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                                 KC_O, KC_I, KC_E, KC_N, KC_M,
  MT(MOD_LALT, KC_Z),    KC_X,    KC_C,    KC_D,    KC_V,                   MT(MOD_LALT,KC_SLSH), KC_DOT, KC_COMM, KC_H, KC_K,
                            OSM(MOD_LSFT), MO(_NUM),                        OSM(MOD_LGUI), LT(_NAV,KC_SPACE)
),

[_NUM] = LAYOUT(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              LGUI(KC_UP), LGUI(KC_RIGHT), LALT(KC_RIGHT), LALT(KC_LEFT), LGUI(KC_LEFT),
  KC_6,    KC_7, KC_8,     KC_9,   KC_0,                 KC_MUTE, KC_RGHT, KC_UP, KC_DOWN, KC_LEFT,
  KC_LSHIFT, KC_DOT, LCTL(KC_A) , OSM(MOD_LSFT), KC_COMM,       LGUI(KC_DOWN), KC_AT, KC_PERC, KC_EXLM, KC_DLR,
                     OSM(MOD_LSFT), XXXXXXX,      TO(_QWERTY), TG(_NUM)
), 


// [_LOWER] = LAYOUT_split_3x5_3(
//   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
//   KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
//   KC_CAPS, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE,  KC_DQT,
//                     XXXXXXX, XXXXXXX, XXXXXXX,      KC_ENT,  XXXXXXX, KC_DEL
// )
// },
// TODO add right side for volume
[_NAV] = LAYOUT(
    LGUI(KC_Z),          LCAG(KC_UP),   LCA(KC_UP),   LCAG(KC_RGHT),  SGUI(KC_Z),		 		KC_VOLU,LGUI(KC_RIGHT), LALT(KC_RIGHT), LALT(KC_LEFT), LGUI(KC_LEFT),
    SGUI(KC_UP),   LCA(KC_LEFT),  LCA(KC_F),    LCA(KC_RGHT),   SGUI(KC_DOWN),   	           KC_MUTE, KC_MS_R, KC_MS_U, KC_MS_D, KC_MS_L,
    SGUI(KC_4),         LCAG(KC_LEFT), LCA(KC_DOWN), LCAG(KC_DOWN),  LSFT(KC_BTN1),  		    KC_VOLD, KC_MS_R, KC_WH_D, KC_WH_U, KC_VOLD,
                           KC_TRNS, TO(_NUM),  	                                                        KC_BTN2,KC_BTN1
    ),

// [_SYMB] = LAYOUT(
// KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,        KC_BSLS, KC_TRNS, KC_TRNS, KC_TILD, KC_GRV,
//     KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_TILD,   KC_PLUS, KC_ASTR, KC_SLSH, KC_MINS, KC_PLUS,
//     KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_BTN1,   KC_MINS, KC_DOT, KC_COMM, KC_EQL, KC_AMPR,
//                        KC_SCLN, KC_EQL,   KC_SCLN, MO(_NUM)
    // ),
[_TMUX] = LAYOUT( 
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_VSPT  , _T_7___ , _T_8___ , _T_9___ , _T_HSPT     ,      _T_SCRL , _T_COPY , _T_NEXT , _T_PREV , _T_BEGI,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   _T_VSPT , _T_4___ , _T_5___ , _T_6___ , _T_0___      , _T_CMD_ , _T_RGHT , _T_UP__ , _T_DOWN , _T_LEFT ,
//---------+---------+---------+---------+---------         ---------+---------+---------+---------+---------//
   XXXXXXX , _T_1___ , _T_2___ , _T_3___ , _T_PAST     , _T_PAST , _T_MOVE , _T_RNAM , _T_NEW_ ,  _T_KPAN, 
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
        case _T_PREF:
            SEND_STRING(TMUX_PREFIX);
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
        case LT(_TMUX,KC_F24):
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