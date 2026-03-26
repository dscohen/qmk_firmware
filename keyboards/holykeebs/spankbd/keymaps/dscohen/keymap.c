#include QMK_KEYBOARD_H
#include "users/holykeebs/holykeebs.h"
#include <math.h>

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
    COMBO_SEAL,
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
const uint16_t PROGMEM combo_seal[]         = {KC_B, KC_L, KC_D, KC_C, COMBO_END};
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
    [COMBO_SEAL]         = COMBO(combo_seal,         KC_SEAL),
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
     * |  B   |  L  |  D  |  C  |  V |    |  Z  |  Y  |  O  |  U  |LCTL|
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
        KC_B,         KC_L, KC_D, KC_C, KC_V,           KC_Z,              KC_Y,   KC_O,    KC_U,   KC_LCTL,
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
// Pointing device
// ============================================================================

// --- Trackpoint drift filter — adaptive state machine -----------------------
//
// Trackpoint idle drift: sporadic low-magnitude events (raw ±1 → ±2 in the
// combined report after holykeebs' 2× multiplier) with inconsistent direction.
// Intentional low-speed movement is directionally sustained.
//
// States:
//   RESTING  – confirmed at rest; suppress events with mag ≤ TP_DRIFT_MAG
//   COOLING  – movement just stopped; counting down to RESTING
//   ACTIVE   – user is moving; pass all events through
//
// Transitions:
//   Any state + mag ≥ TP_ACTIVE_MAG                               → ACTIVE
//   Any state + mag ≤ TP_DRIFT_MAG + TP_DIR_CONSISTENT same-dir  → ACTIVE
//   ACTIVE    + mag ≤ TP_DRIFT_MAG + direction not confirmed      → COOLING
//   COOLING   + TP_COOL_FRAMES quiet frames                       → RESTING
//   RESTING   + quiet, inconsistent                               → stay RESTING

#define TP_ACTIVE_MAG      5   // |x|+|y| ≥ this → definitely moving
#define TP_DRIFT_MAG       2   // |x|+|y| ≤ this → candidate drift (raw ≤1 each)
#define TP_COOL_FRAMES     6   // quiet frames before entering RESTING
#define TP_DIR_CONSISTENT  4   // consecutive same-direction frames to wake from rest

typedef enum { TP_RESTING, TP_COOLING, TP_ACTIVE } tp_state_t;

static tp_state_t tp_state    = TP_RESTING;
static uint8_t    tp_cool_ctr = 0;
static uint8_t    tp_dir_ctr  = 0;
static int8_t     tp_dir_x    = 0;  // last nonzero x sign
static int8_t     tp_dir_y    = 0;  // last nonzero y sign

static void trackpoint_drift_filter(report_mouse_t *report) {
    int16_t mag = abs(report->x) + abs(report->y);
    int8_t  sx  = (report->x > 0) ? 1 : (report->x < 0) ? -1 : 0;
    int8_t  sy  = (report->y > 0) ? 1 : (report->y < 0) ? -1 : 0;

    bool x_consistent = (sx != 0 && sx == tp_dir_x);
    bool y_consistent = (sy != 0 && sy == tp_dir_y);
    if (sx != 0) tp_dir_x = sx;
    if (sy != 0) tp_dir_y = sy;

    if (mag >= TP_ACTIVE_MAG) {
        tp_state    = TP_ACTIVE;
        tp_cool_ctr = 0;
        tp_dir_ctr  = 0;
    } else if (mag <= TP_DRIFT_MAG) {
        if (x_consistent || y_consistent) {
            tp_dir_ctr++;
        } else {
            tp_dir_ctr = 0;
        }

        if (tp_dir_ctr >= TP_DIR_CONSISTENT) {
            // Sustained directional trickle: intentional slow movement.
            tp_state    = TP_ACTIVE;
            tp_cool_ctr = 0;
        } else {
            switch (tp_state) {
                case TP_ACTIVE:
                    tp_state    = TP_COOLING;
                    tp_cool_ctr = 1;
                    break;
                case TP_COOLING:
                    if (++tp_cool_ctr >= TP_COOL_FRAMES) {
                        tp_state   = TP_RESTING;
                        tp_dir_ctr = 0;
                    }
                    break;
                default:
                    break;  // RESTING stays RESTING
            }
        }
    } else {
        // Medium magnitude (between thresholds): treat as active.
        tp_state    = TP_ACTIVE;
        tp_cool_ctr = 0;
        tp_dir_ctr  = 0;
    }

    if (tp_state == TP_RESTING && mag <= TP_DRIFT_MAG) {
        report->x = 0;
        report->y = 0;
    }
}

// --- Dual-regime pointer acceleration ----------------------------------------
//
// Two regimes matched to each device's speed range in the combined report
// (holykeebs applies 2× to trackpoint, 1× to cirque before combining):
//
//   Low  (speed ≤ TP_SPEED_MAX):  gentle sqrt curve — trackpoint range.
//     scale = 1 + TP_FACTOR * sqrt(speed)
//
//   High (speed ≥ PAD_SPEED_MIN): aggressive 1.5-power curve — cirque range.
//     scale = 1 + PAD_FACTOR * speed^1.5        (hard cap at PAD_MAX_SCALE)
//
//   Crossover zone: smoothstep blend for a C1-continuous transition.
//
// Critically, the curve is driven by an EMA of speed rather than instantaneous
// speed.  This prevents a single fast frame from immediately spiking the scale:
//   • Slow/medium gesture start → EMA stays low → scale stays controlled
//   • Sustained fast flick      → EMA climbs quickly → scale ramps to peak
//   • EMA resets to 0 on each new gesture (after trackpoint returns to rest)
//
// SPEED_EMA_ALPHA = 0.25: ~4 frames (≈32 ms) to reach 63% of a speed step.

#define TP_FACTOR        0.06f
#define TP_SPEED_MAX    20.0f

#define PAD_FACTOR       0.002f
#define PAD_EXPONENT     1.5f
#define PAD_SPEED_MIN   40.0f
#define PAD_MAX_SCALE    6.0f

#define SPEED_EMA_ALPHA  0.15f

static inline float accel_low(float speed) {
    return 1.0f + TP_FACTOR * sqrtf(speed);
}

static inline float accel_high(float speed) {
    float s = 1.0f + PAD_FACTOR * powf(speed, PAD_EXPONENT);
    return (s < PAD_MAX_SCALE) ? s : PAD_MAX_SCALE;
}

static float pad_speed_ema = 0;

static void apply_pointer_acceleration(report_mouse_t *report) {
    if (report->x == 0 && report->y == 0) {
        if (tp_state == TP_RESTING) pad_speed_ema = 0;
        return;
    }

    float speed = sqrtf((float)(report->x * report->x + report->y * report->y));
    pad_speed_ema = pad_speed_ema * (1.0f - SPEED_EMA_ALPHA) + speed * SPEED_EMA_ALPHA;

    float s = pad_speed_ema;
    float scale;

    if (s <= TP_SPEED_MAX) {
        scale = accel_low(s);
    } else if (s >= PAD_SPEED_MIN) {
        scale = accel_high(s);
    } else {
        float t     = (s - TP_SPEED_MAX) / (PAD_SPEED_MIN - TP_SPEED_MAX);
        float blend = t * t * (3.0f - 2.0f * t);
        scale = accel_low(s) * (1.0f - blend) + accel_high(s) * blend;
    }

    report->x = (mouse_xy_report_t)(report->x * scale);
    report->y = (mouse_xy_report_t)(report->y * scale);
}

// --- Scroll pointer-lock -----------------------------------------------------
// When a second finger touches the cirque to start scrolling, the raw
// position jumps to the new finger location before the scroll gesture is
// recognised, lurching the cursor.  Fix: stamp a timestamp on every scroll
// event and suppress x/y for SCROLL_LOCK_MS after the most recent one.
// This keeps the cursor locked for the full duration of the scroll gesture
// (each new h/v resets the clock) plus a 20 ms tail so the frame immediately
// after scroll ends cannot cause a jump.
//
#define SCROLL_LOCK_MS 20

static uint32_t scroll_last_ms = 0;

static void apply_scroll_pointer_lock(report_mouse_t *report) {
    if (report->h != 0 || report->v != 0) {
        scroll_last_ms = timer_read32();
    }
    if (timer_elapsed32(scroll_last_ms) < SCROLL_LOCK_MS) {
        report->x = 0;
        report->y = 0;
    }
}

// --- Scroll accumulator ------------------------------------------------------
// Hires scroll (POINTING_DEVICE_HIRES_SCROLL_ENABLE) makes each emitted h/v
// unit a sub-tick fraction at the host, eliminating the chunky per-event jump.
// But it doesn't control the rate — raw CPI-scale deltas would scroll way too
// fast.  This accumulator divides the rate: collect SCROLL_DIVISOR raw units,
// then emit one integer unit into the hires pipeline.
//
// SCROLL_DEADZONE: raw h/v values with magnitude below this are discarded
// before accumulation, so small/slow movements produce no scroll at all.
// This prevents having to make very tiny precision movements to control
// scroll speed — only intentional movements register.
// Tune SCROLL_DIVISOR: larger = slower.  SCROLL_DEADZONE: larger = more
// resistance before scrolling begins.
#define SCROLL_DIVISOR  30
#define SCROLL_DEADZONE  4

static int16_t scroll_h_accum = 0;
static int16_t scroll_v_accum = 0;

static void apply_scroll_accumulator(report_mouse_t *report) {
    if (report->h == 0 && report->v == 0) {
        if (timer_elapsed32(scroll_last_ms) >= SCROLL_LOCK_MS) {
            scroll_h_accum = 0;
            scroll_v_accum = 0;
        }
        return;
    }
    if (abs(report->h) < SCROLL_DEADZONE) report->h = 0;
    if (abs(report->v) < SCROLL_DEADZONE) report->v = 0;
    if (report->h == 0 && report->v == 0) return;

    scroll_h_accum += report->h;
    scroll_v_accum += report->v;
    report->h = scroll_h_accum / SCROLL_DIVISOR;
    scroll_h_accum -= report->h * SCROLL_DIVISOR;
    report->v = scroll_v_accum / SCROLL_DIVISOR;
    scroll_v_accum -= report->v * SCROLL_DIVISOR;
}

// --- Trackpoint arrow-key mode (_NUMS layer) ---------------------------------
// When _NUMS is active, trackpoint movement fires arrow keys instead of moving
// the mouse.  Axis is determined by a high-momentum running average so the
// dominant axis is sticky: once moving vertically a brief horizontal flick
// won't accidentally trigger KC_LEFT/KC_RIGHT.  Only the dominant axis
// accumulates; the orthogonal accumulator is zeroed each frame.
//
// Adapted from ~/Downloads/keymap.c (ARROW_STEP/ARROW_MOMENTUM design).

#define ARROW_STEP     15    // combined-report units per arrow press
#define ARROW_MOMENTUM 0.99f // EMA decay — higher = stickier axis

static float arrow_avg_x = 0;
static float arrow_avg_y = 0;
static int   arrow_acc_x = 0;
static int   arrow_acc_y = 0;

static void reset_arrow_mode(void) {
    arrow_avg_x = 0; arrow_avg_y = 0;
    arrow_acc_x = 0; arrow_acc_y = 0;
}

// Returns true when the report is consumed (converted to arrow keys).
static bool handle_trackpoint_arrows(report_mouse_t *report) {
    if (!layer_state_is(_NUMS)) {
        if (arrow_avg_x != 0 || arrow_avg_y != 0) reset_arrow_mode();
        return false;
    }
    if (report->x == 0 && report->y == 0) {
        if (tp_state == TP_RESTING) reset_arrow_mode();
        return false;
    }

    // Update momentum-weighted direction average.
    arrow_avg_x = arrow_avg_x * ARROW_MOMENTUM + (float)report->x * (1.0f - ARROW_MOMENTUM);
    arrow_avg_y = arrow_avg_y * ARROW_MOMENTUM + (float)report->y * (1.0f - ARROW_MOMENTUM);

    // Accumulate only on the dominant axis; zero the orthogonal accumulator.
    if (fabsf(arrow_avg_x) > fabsf(arrow_avg_y)) {
        arrow_acc_x += report->x;
        arrow_acc_y  = 0;
    } else if (fabsf(arrow_avg_y) > fabsf(arrow_avg_x)) {
        arrow_acc_x  = 0;
        arrow_acc_y += report->y;
    }

    while (arrow_acc_x <= -ARROW_STEP) { tap_code(KC_LEFT);  arrow_acc_x += ARROW_STEP; }
    while (arrow_acc_x >=  ARROW_STEP) { tap_code(KC_RIGHT); arrow_acc_x -= ARROW_STEP; }
    while (arrow_acc_y <= -ARROW_STEP) { tap_code(KC_UP);    arrow_acc_y += ARROW_STEP; }
    while (arrow_acc_y >=  ARROW_STEP) { tap_code(KC_DOWN);  arrow_acc_y -= ARROW_STEP; }

    report->x = 0;
    report->y = 0;
    return true;
}

// --- NAV layer scroll mode (_NAV layer) --------------------------------------
// When _NAV is active (hold G), trackpoint x/y is redirected into h/v scroll
// instead of cursor movement.  Same momentum-based axis lock as arrow mode:
// once the dominant scroll axis is established, the orthogonal component is
// zeroed each frame so a vertical scroll doesn't accidentally drift sideways.
// The resulting h/v flows into apply_scroll_accumulator + hires scroll.

static float nav_scroll_avg_x = 0;
static float nav_scroll_avg_y = 0;

static void reset_nav_scroll(void) {
    nav_scroll_avg_x = 0;
    nav_scroll_avg_y = 0;
}

// Returns true when the report is consumed (converted to scroll).
static bool handle_nav_scroll(report_mouse_t *report) {
    if (!layer_state_is(_NAV)) {
        if (nav_scroll_avg_x != 0 || nav_scroll_avg_y != 0) reset_nav_scroll();
        return false;
    }
    if (report->x == 0 && report->y == 0) {
        if (tp_state == TP_RESTING) reset_nav_scroll();
        return false;
    }

    // Momentum-weighted direction average (reuse ARROW_MOMENTUM constant).
    nav_scroll_avg_x = nav_scroll_avg_x * ARROW_MOMENTUM + (float)report->x * (1.0f - ARROW_MOMENTUM);
    nav_scroll_avg_y = nav_scroll_avg_y * ARROW_MOMENTUM + (float)report->y * (1.0f - ARROW_MOMENTUM);

    // Route dominant axis into scroll; suppress the other.
    if (fabsf(nav_scroll_avg_x) > fabsf(nav_scroll_avg_y)) {
        report->h = report->x;
        report->v = 0;
    } else if (fabsf(nav_scroll_avg_y) > fabsf(nav_scroll_avg_x)) {
        report->h = 0;
        report->v = report->y;
    }

    report->x = 0;
    report->y = 0;
    return true;
}

report_mouse_t pointing_device_task_combined_keymap(report_mouse_t report) {
    trackpoint_drift_filter(&report);
    apply_scroll_pointer_lock(&report);
    if (!handle_nav_scroll(&report) && !handle_trackpoint_arrows(&report)) {
        apply_pointer_acceleration(&report);
    }
    apply_scroll_accumulator(&report);
    return report;
}

void keyboard_post_init_keymap(void) {
    // Cirque 35mm trackpad (left): high CPI for precision + top-end range.
    pointing_device_set_cpi_on_side(true, 4000);
    // Trackpoint (right): 75% of previous sensitivity.
    pointing_device_set_cpi_on_side(false, 1500);
}

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

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
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
