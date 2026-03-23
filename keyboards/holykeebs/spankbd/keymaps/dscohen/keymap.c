#include QMK_KEYBOARD_H
#include "users/holykeebs/holykeebs.h"

enum {
    _ALPHA,
    _NAV,
    _NUMS,
    _HELPER,
    _MOUSE,
    _TMUX
};

enum custom_keycodes {
    _T_NEW_ = SAFE_RANGE,
    _T_PREV,
    _T_NEXT,
    _T_LAST,
    _T_BEGI,
    _T_CMD_,
    _T_COPY,
    _T_PAST,
    _T_SCRL,
    _T_MOVE,
    _T_RNAM,
    _T_LEFT,
    _T_DOWN,
    _T_RGHT,
    _T_VSPT,
    _T_HSPT,
    _T_KPAN,
    _T_UP__,
    _T_1___,
    _T_2___,
    _T_3___,
    _T_4___,
    _T_5___,
    _T_6___,
    _T_7___,
    _T_8___,
    _T_9___,
    _T_0___,
    KC_SEAL,
    _CD_UP_,
    _LS_CMD_,
};

// ============================================================================
// Combos
// ============================================================================

enum combos {
    COMBO_TAB_FORWARD,
    COMBO_TAB_BACKWARD,
    COMBO_ESC,
    COMBO_SK_ALT,
    COMBO_ITERM,
    COMBO_SK_CTRL,
    COMBO_NORM_CTRL,
    COMBO_BACKSLASH,
    COMBO_BACKSPACE,
    COMBO_SCOOT,
    COMBO_REPEAT,
    COMBO_SK_LGUI,
    COMBO_SK_RGUI,
    COMBO_TAB,
    COMBO_COLON,
    COMBO_MEH_LAYER,
    COMBO_COPY,
    COMBO_ALFRED,
    COMBO_PASTE,
    COMBO_LBRC,
    COMBO_RBRC,
    COMBO_RPRN,
    COMBO_LBRN,
    COMBO_QSTN,
    COMBO_EXCLM,
    COMBO_RBRK,
    COMBO_EMAILAT,
    COMBO_CARROT,
    COMBO_LBRK,
    COMBO_UNDERSCORE,
    COMBO_EQUAL,
    COMBO_AST,
    COMBO_HASH,
    COMBO_FSLASH,
    COMBO_PLUS,
    COMBO_PERCENT,
    COMBO_SEMICOLON,
    COMBO_TILDA,
    COMBO_DASH,
    COMBO_PIPE,
    COMBO_DOLLAR,
    COMBO_MEH,
    COMBO_LMOUSE,
    COMBO_RMOUSE,
    COMBO_MMOUSE,
    COMBO_TMUX,
    COMBO_NUM_BS,
    COMBO_NUM_LMOUSE,
    COMBO_CD_UP,
    COMBO_LS_CMD,
};

const uint16_t PROGMEM combo_tab_forward[]  = {KC_S, KC_W, COMBO_END};
const uint16_t PROGMEM combo_tab_backward[] = {KC_T, KC_M, COMBO_END};
const uint16_t PROGMEM combo_esc[]          = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_sk_alt[]       = {KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo_iterm[]        = {LT(_NUMS, KC_P), KC_H, COMBO_END};
const uint16_t PROGMEM combo_sk_ctrl[]      = {KC_X, KC_M, COMBO_END};
const uint16_t PROGMEM combo_norm_ctrl[]    = {KC_F, KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_backslash[]    = {KC_Z, KC_Y, COMBO_END};
const uint16_t PROGMEM combo_backspace[]    = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo_scoot[]        = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo_repeat[]       = {KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM combo_sk_lgui[]      = {KC_D, KC_T, COMBO_END};
const uint16_t PROGMEM combo_sk_rgui[]      = {KC_O, KC_A, COMBO_END};
const uint16_t PROGMEM combo_tab[]          = {KC_S, LT(_NAV, KC_G), COMBO_END};
const uint16_t PROGMEM combo_colon[]        = {KC_A, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_meh_layer[]    = {KC_C, KC_S, COMBO_END};
const uint16_t PROGMEM combo_copy[]         = {KC_X, KC_W, COMBO_END};
const uint16_t PROGMEM combo_alfred[]       = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_paste[]        = {KC_X, KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM combo_lbrc[]         = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM combo_rbrc[]         = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_rprn[]         = {KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM combo_lbrn[]         = {KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo_qstn[]         = {KC_L, KC_R, COMBO_END};
const uint16_t PROGMEM combo_exclm[]        = {KC_R, KC_X, COMBO_END};
const uint16_t PROGMEM combo_rbrk[]         = {KC_T, KC_X, COMBO_END};
const uint16_t PROGMEM combo_emailat[]      = {LT(_NUMS, KC_P), KC_Y, COMBO_END};
const uint16_t PROGMEM combo_carrot[]       = {KC_D, KC_R, COMBO_END};
const uint16_t PROGMEM combo_lbrk[]         = {KC_T, KC_W, COMBO_END};
const uint16_t PROGMEM combo_underscore[]   = {KC_W, LT(_MOUSE, KC_J), COMBO_END};
const uint16_t PROGMEM combo_equal[]        = {KC_F, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_ast[]          = {LT(_MOUSE, KC_K), KC_H, COMBO_END};
const uint16_t PROGMEM combo_hash[]         = {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM combo_fslash[]       = {KC_H, KC_F, COMBO_END};
const uint16_t PROGMEM combo_plus[]         = {LT(_MOUSE, KC_K), KC_F, COMBO_END};
const uint16_t PROGMEM combo_percent[]      = {KC_E, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_semicolon[]    = {KC_V, LT(_NAV, KC_G), COMBO_END};
const uint16_t PROGMEM combo_tilda[]        = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM combo_dash[]         = {KC_H, KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo_pipe[]         = {LT(_NAV, KC_G), LT(_MOUSE, KC_J), COMBO_END};
const uint16_t PROGMEM combo_dollar[]       = {KC_C, LT(_NAV, KC_G), COMBO_END};
const uint16_t PROGMEM combo_meh[]          = {KC_C, KC_S, COMBO_END};
const uint16_t PROGMEM combo_lmouse[]       = {KC_R, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM combo_rmouse[]       = {KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM combo_mmouse[]       = {KC_N, KC_R, KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM combo_tmux[]         = {KC_L, KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM combo_num_bs[]       = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo_num_lmouse[]   = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo_cd_up[]        = {KC_H, KC_O, COMBO_END};
const uint16_t PROGMEM combo_ls_cmd[]       = {KC_E, KC_O, COMBO_END};

combo_t key_combos[] = {
    [COMBO_TAB_FORWARD]  = COMBO(combo_tab_forward,  LCTL(KC_TAB)),
    [COMBO_TAB_BACKWARD] = COMBO(combo_tab_backward, LCTL(LSFT(KC_TAB))),
    [COMBO_ESC]          = COMBO(combo_esc,          KC_ESC),
    [COMBO_SK_ALT]       = COMBO(combo_sk_alt,       OSM(MOD_LALT)),
    [COMBO_ITERM]        = COMBO(combo_iterm,        LCTL(KC_BSLS)),
    [COMBO_SK_CTRL]      = COMBO(combo_sk_ctrl,      OSM(MOD_LCTL)),
    [COMBO_NORM_CTRL]    = COMBO(combo_norm_ctrl,    MOD_LCTL),
    [COMBO_BACKSLASH]    = COMBO(combo_backslash,    KC_BSLS),
    [COMBO_BACKSPACE]    = COMBO(combo_backspace,    KC_BSPC),
    [COMBO_SCOOT]        = COMBO(combo_scoot,        LALT(KC_D)),
    [COMBO_REPEAT]       = COMBO(combo_repeat,       KC_ENT),
    [COMBO_SK_LGUI]      = COMBO(combo_sk_lgui,      OSM(MOD_LGUI)),
    [COMBO_SK_RGUI]      = COMBO(combo_sk_rgui,      KC_LGUI),
    [COMBO_TAB]          = COMBO(combo_tab,          KC_TAB),
    [COMBO_COLON]        = COMBO(combo_colon,        KC_COLN),
    [COMBO_MEH_LAYER]    = COMBO(combo_meh_layer,    OSM(MOD_MEH)),
    [COMBO_COPY]         = COMBO(combo_copy,         LGUI(KC_C)),
    [COMBO_ALFRED]       = COMBO(combo_alfred,       LALT(KC_SPACE)),
    [COMBO_PASTE]        = COMBO(combo_paste,        LGUI(KC_V)),
    [COMBO_LBRC]         = COMBO(combo_lbrc,         KC_LCBR),
    [COMBO_RBRC]         = COMBO(combo_rbrc,         KC_RCBR),
    [COMBO_RPRN]         = COMBO(combo_rprn,         KC_LPRN),
    [COMBO_LBRN]         = COMBO(combo_lbrn,         KC_RPRN),
    [COMBO_QSTN]         = COMBO(combo_qstn,         KC_QUES),
    [COMBO_EXCLM]        = COMBO(combo_exclm,        KC_EXLM),
    [COMBO_RBRK]         = COMBO(combo_rbrk,         KC_LBRC),
    [COMBO_EMAILAT]      = COMBO(combo_emailat,      KC_AT),
    [COMBO_CARROT]       = COMBO(combo_carrot,       KC_CIRC),
    [COMBO_LBRK]         = COMBO(combo_lbrk,         KC_RBRC),
    [COMBO_UNDERSCORE]   = COMBO(combo_underscore,   KC_UNDS),
    [COMBO_EQUAL]        = COMBO(combo_equal,        KC_EQL),
    [COMBO_AST]          = COMBO(combo_ast,          KC_ASTR),
    [COMBO_HASH]         = COMBO(combo_hash,         KC_HASH),
    [COMBO_FSLASH]       = COMBO(combo_fslash,       KC_SLSH),
    [COMBO_PLUS]         = COMBO(combo_plus,         KC_PLUS),
    [COMBO_PERCENT]      = COMBO(combo_percent,      KC_PERC),
    [COMBO_SEMICOLON]    = COMBO(combo_semicolon,    KC_SCLN),
    [COMBO_TILDA]        = COMBO(combo_tilda,        KC_TILD),
    [COMBO_DASH]         = COMBO(combo_dash,         KC_MINS),
    [COMBO_PIPE]         = COMBO(combo_pipe,         KC_PIPE),
    [COMBO_DOLLAR]       = COMBO(combo_dollar,       KC_DLR),
    [COMBO_MEH]          = COMBO(combo_meh,          OSM(MOD_MEH)),
    [COMBO_LMOUSE]       = COMBO(combo_lmouse,       HK_D_MODE_T),
    [COMBO_RMOUSE]       = COMBO(combo_rmouse,       KC_BTN1),
    [COMBO_MMOUSE]       = COMBO(combo_mmouse,       KC_BTN2),
    [COMBO_TMUX]         = COMBO(combo_tmux,         OSL(_TMUX)),
    [COMBO_NUM_BS]       = COMBO(combo_num_bs,       KC_BSPC),
    [COMBO_NUM_LMOUSE]   = COMBO(combo_num_lmouse,   KC_BTN1),
    [COMBO_CD_UP]        = COMBO(combo_cd_up,        _CD_UP_),
    [COMBO_LS_CMD]       = COMBO(combo_ls_cmd,       _LS_CMD_),
};

// ============================================================================
// Combo Timing Buckets
// ============================================================================

enum combo_timing_buckets {
    TIMING_DEFAULT  = 0,
    TIMING_FAST     = 1,
    TIMING_SLOW     = 2,
    TIMING_VERTICAL = 3,
};

static const uint8_t combo_timing_map[COMBO_COUNT] = {
    [COMBO_TAB_FORWARD]  = TIMING_VERTICAL,
    [COMBO_TAB_BACKWARD] = TIMING_VERTICAL,
    [COMBO_SK_LGUI]      = TIMING_VERTICAL,
    [COMBO_SK_RGUI]      = TIMING_VERTICAL,
    [COMBO_COLON]        = TIMING_VERTICAL,
    [COMBO_MEH_LAYER]    = TIMING_VERTICAL,
    [COMBO_ALFRED]       = TIMING_VERTICAL,
    [COMBO_QSTN]         = TIMING_VERTICAL,
    [COMBO_EXCLM]        = TIMING_VERTICAL,
    [COMBO_HASH]         = TIMING_VERTICAL,
    [COMBO_FSLASH]       = TIMING_VERTICAL,
    [COMBO_PERCENT]      = TIMING_VERTICAL,
    [COMBO_SEMICOLON]    = TIMING_VERTICAL,
    [COMBO_PIPE]         = TIMING_VERTICAL,
    [COMBO_MEH]          = TIMING_VERTICAL,
    [COMBO_CD_UP]        = TIMING_VERTICAL,
    [COMBO_ESC]          = TIMING_FAST,
    [COMBO_ITERM]        = TIMING_SLOW,
    [COMBO_COPY]         = TIMING_SLOW,
    [COMBO_PASTE]        = TIMING_SLOW,
};

static const uint16_t combo_timing_values[] = {
    [TIMING_DEFAULT]  = 50,
    [TIMING_FAST]     = 40,
    [TIMING_SLOW]     = 120,
    [TIMING_VERTICAL] = 80,
};

uint16_t get_combo_term(uint16_t combo_index, combo_t *combo) {
    if (combo_index < COMBO_COUNT) {
        uint8_t bucket = combo_timing_map[combo_index];
        return combo_timing_values[bucket];
    }
    return COMBO_TERM;
}

// ============================================================================
// Tap Dance
// ============================================================================

enum tap_dance_codes {
    DANCE_0,
};

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if (state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:        register_code16(KC_Q); break;
        case DOUBLE_TAP:        register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:        unregister_code16(KC_Q); break;
        case DOUBLE_TAP:        unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

// ============================================================================
// Keymaps
// ============================================================================
//
// Voyager (6 cols x 4 rows + 2 thumbs) → SpanKBD (5 cols x 3 rows + 3 thumbs)
// Mapping: drop outermost column each side, drop number row.
// Left thumb:  [outer=LGUI] [mid=LSFT] [inner=BSPC]  (BSPC is new)
// Right thumb: [inner=SPC/_HELPER] [mid=SPC] [outer=ENT]  (ENT is new)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* _ALPHA
     * ,------------------------------.    ,------------------------------.
     * | CW   |  L  |  D  |  C  |  V |    |  Z  |  Y  |  O  |  U  |LCTL|
     * |------+-----+-----+-----+----|    |-----+-----+-----+-----+------|
     * |  N   |  R  |  T  |  S  |NAV/G|    |NUMS/P|  H  |  A  |  E  |  I |
     * |------+-----+-----+-----+----|    |-----+-----+-----+-----+------|
     * | Q/CTL|  X  |  M  |  W  |MSE/J|    |MSE/K|  F  |  ,  |  .  |  ' |
     * `------------------------------'    `------------------------------'
     *       .-----------------------.    .-----------------------.
     *       | LGUI | LSFT | BSPC   |    | SPC/_H | SPC | ENT  |
     *       '-----------------------'    '-----------------------'
     */
    [_ALPHA] = LAYOUT_split_3x5_3(
        CW_TOGG,      KC_L, KC_D, KC_C, KC_V,           KC_Z,              KC_Y,   KC_O,    KC_U,   KC_LCTL,
        KC_N,         KC_R, KC_T, KC_S, LT(_NAV, KC_G), LT(_NUMS, KC_P),   KC_H,   KC_A,    KC_E,   KC_I,
        TD(DANCE_0),  KC_X, KC_M, KC_W, LT(_MOUSE, KC_J), LT(_MOUSE, KC_K), KC_F, KC_COMM, KC_DOT,  KC_QUOT,
        KC_LGUI, OSM(MOD_LSFT), KC_BSPC,                LT(_HELPER, KC_SPACE), KC_SPACE, KC_ENT
    ),

    /* _NAV */
    [_NAV] = LAYOUT_split_3x5_3(
        QK_BOOT,  QK_RBT,  KC_NO,   KC_NO,   KC_NO,      LGUI(KC_LEFT), LALT(KC_LEFT), LALT(KC_RGHT), LGUI(KC_RGHT), KC_PGUP,
        KC_NO,    KC_NO,   KC_NO,   KC_LSFT, KC_TRNS,    KC_LEFT,       KC_DOWN,       KC_UP,         KC_RGHT,       KC_TRNS,
        KC_NO,    KC_NO,   KC_NO,   KC_LALT, KC_NO,      KC_BSLS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_PGDN,
        KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_1
    ),

    /* _NUMS */
    [_NUMS] = LAYOUT_split_3x5_3(
        KC_5,      KC_6,      KC_7,    KC_8,    KC_9,             KC_0,    KC_1,    KC_2,    KC_3,    KC_4,
        KC_0,      KC_1,      KC_2,    KC_3,    LT(_NAV, KC_4),   KC_TRNS, KC_LGUI, KC_LCTL, KC_LSFT, KC_9,
        HK_P_SET_D, HK_P_SET_S, KC_LBRC, KC_RBRC, KC_BTN1,       KC_AMPR, KC_LCTL, KC_COMM, KC_DOT,  KC_MINS,
        KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* _HELPER */
    [_HELPER] = LAYOUT_split_3x5_3(
        LCTL(LSFT(KC_F14)), LCTL(LSFT(KC_F15)), LCTL(LSFT(KC_F16)), LCTL(LSFT(KC_F17)), LCTL(LSFT(KC_F18)),   KC_TRNS,              KC_TRNS,             KC_TRNS,             QK_RBT,          QK_BOOT,
        LCTL(LSFT(KC_0)),   LCTL(LSFT(KC_6)),   LCTL(LSFT(KC_7)),   LCTL(LSFT(KC_8)),   LCTL(LSFT(KC_9)),     KC_LEFT,              KC_TRNS,             KC_TRNS,             KC_RGHT,         KC_AUDIO_MUTE,
        LCTL(LSFT(KC_1)),   LCTL(LSFT(KC_2)),   LCTL(LSFT(KC_3)),   LCTL(LSFT(KC_4)),   LCTL(LSFT(KC_5)),     KC_MEDIA_PREV_TRACK,  KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN,
        KC_TRNS, KC_TRNS, KC_TRNS,                                                        KC_TRNS, KC_1, KC_TRNS
    ),

    /* _MOUSE */
    [_MOUSE] = LAYOUT_split_3x5_3(
        KC_MS_UP,   KC_MS_WH_UP,   KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT,   KC_TRNS,  KC_MS_BTN2, KC_MS_BTN3, KC_MS_BTN4, KC_MS_BTN5,
        KC_MS_LEFT, KC_MS_DOWN,    KC_MS_UP,      KC_MS_RIGHT,   KC_TRNS,           KC_TRNS,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP,   KC_MS_RIGHT,
        KC_MS_BTN1, KC_MS_WH_UP,   KC_MS_WH_DOWN, KC_MS_BTN1,    KC_TRNS,           KC_TRNS,  KC_MS_BTN1, KC_MS_WH_UP, KC_MS_WH_DOWN, KC_MS_BTN5,
        KC_TRNS, KC_TRNS, KC_TRNS,                                                   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* _TMUX */
    [_TMUX] = LAYOUT_split_3x5_3(
        _T_5___, _T_6___, _T_7___, _T_8___, _T_9___,   KC_SEAL, _T_1___, _T_2___, _T_3___, _T_SCRL,
        _T_0___, _T_1___, _T_2___, _T_3___, _T_4___,   _T_LEFT, _T_DOWN, _T_UP__, _T_RGHT, KC_TRNS,
        _T_HSPT, KC_TRNS, KC_TRNS, KC_TRNS, _T_VSPT,   _T_KPAN, _T_NEW_, _T_RNAM, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

// ============================================================================
// Process record
// ============================================================================

#define TMUX_PREFIX SS_DOWN(X_LCTL) "a" SS_UP(X_LCTL)

static bool process_record_tmux(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;
    switch (keycode) {
        case KC_SEAL:  SEND_STRING("The seal loves running to the store"); return false;
        case _T_NEW_:  SEND_STRING(TMUX_PREFIX "c");  return false;
        case _T_PREV:  SEND_STRING(TMUX_PREFIX "p");  return false;
        case _T_LEFT:  SEND_STRING(TMUX_PREFIX SS_TAP(X_LEFT));  return false;
        case _T_DOWN:  SEND_STRING(TMUX_PREFIX SS_TAP(X_DOWN));  return false;
        case _T_UP__:  SEND_STRING(TMUX_PREFIX SS_TAP(X_UP));    return false;
        case _T_RGHT:  SEND_STRING(TMUX_PREFIX SS_TAP(X_RIGHT)); return false;
        case _T_NEXT:  SEND_STRING(TMUX_PREFIX "n");  return false;
        case _T_KPAN:  SEND_STRING(TMUX_PREFIX "x");  return false;
        case _T_VSPT:  SEND_STRING(TMUX_PREFIX "|");  return false;
        case _T_HSPT:  SEND_STRING(TMUX_PREFIX "-");  return false;
        case _T_LAST:  SEND_STRING(TMUX_PREFIX "l");  return false;
        case _T_CMD_:  SEND_STRING(TMUX_PREFIX ":");  return false;
        case _T_COPY:  SEND_STRING(TMUX_PREFIX "[");  return false;
        case _T_PAST:  SEND_STRING(TMUX_PREFIX "]");  return false;
        case _T_SCRL:  SEND_STRING(TMUX_PREFIX SS_TAP(X_PGUP)); return false;
        case _T_MOVE:  SEND_STRING(TMUX_PREFIX ".");  return false;
        case _T_RNAM:  SEND_STRING(TMUX_PREFIX ",");  return false;
        case _T_BEGI:  SEND_STRING(TMUX_PREFIX TMUX_PREFIX); return false;
        case _T_1___:  SEND_STRING(TMUX_PREFIX "1");  return false;
        case _T_2___:  SEND_STRING(TMUX_PREFIX "2");  return false;
        case _T_3___:  SEND_STRING(TMUX_PREFIX "3");  return false;
        case _T_4___:  SEND_STRING(TMUX_PREFIX "4");  return false;
        case _T_5___:  SEND_STRING(TMUX_PREFIX "5");  return false;
        case _T_6___:  SEND_STRING(TMUX_PREFIX "6");  return false;
        case _T_7___:  SEND_STRING(TMUX_PREFIX "7");  return false;
        case _T_8___:  SEND_STRING(TMUX_PREFIX "8");  return false;
        case _T_9___:  SEND_STRING(TMUX_PREFIX "9");  return false;
        case _T_0___:  SEND_STRING(TMUX_PREFIX "0");  return false;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (get_highest_layer(layer_state) == _TMUX) {
        return process_record_tmux(keycode, record);
    }

    switch (keycode) {
        case _CD_UP_:
            if (record->event.pressed) {
                SEND_STRING("cd .." SS_TAP(X_ENTER));
            }
            return false;
        case _LS_CMD_:
            if (record->event.pressed) {
                SEND_STRING("ls -htlr" SS_TAP(X_ENTER));
            }
            return false;
    }
    return true;
}
