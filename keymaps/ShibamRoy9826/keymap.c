// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│  MPLY,Apps,Mute
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │PSc│Hm │Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ └───┴───┴───┘
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
     * │TT_1│Alt │GUI │                        │ Alt│strM│stpM│rplM│ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘
     */

    // _____________ LAYER 0 ___________________________________--
    [0] = LAYOUT_tkl_ansi(
    // function row
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    // function row (encoders)
    KC_MPLY, LGUI_T(KC_P), KC_MUTE,

    //number row
    KC_GRV,  KC_1, KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,   KC_MINS, KC_EQL,KC_BSPC,
    // number row(extras)
    KC_LCTL,KC_HOME,KC_DEL,

    // top row
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,

    // home row
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,

    // bottom row
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,        KC_UP,

    // spacebar row
    TT(1), KC_LALT, KC_LGUI,  KC_SPC, KC_LALT, DM_REC1, DM_RSTP, DM_PLY1,                             KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │PSc│Hm │Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ └───┴───┴───┘
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
     * │Ctrl│GUI │Alt │                        │ Alt│TG_1│capS│copy│ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘
     */

    // _____________ LAYER 1 ___________________________________--
    [1] = LAYOUT_tkl_ansi(
    // function row
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    // function row (encoders)
    _______, _______, _______,

    //number row
    _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______, _______,_______,
    // number row(extras)
    _______,_______,_______,

    // top row
    _______,  _______,    _______,    _______,    _______,    MS_BTN1,    MS_LEFT,   MS_DOWN,    MS_UP,    MS_RGHT,    MS_BTN2,    _______, _______, _______,

    // home row
    _______, _______,    CL_TOGG,    _______,    _______,    _______,    KC_LEFT,   KC_DOWN,    KC_UP,   KC_RGHT,    _______, _______, _______,

    // bottom row
    _______, _______,    _______,    _______,    _______,    _______,    MS_WHLD,    MS_WHLU,    _______, _______,  _______, _______,        _______,

    // spacebar row
    TT(1), _______, _______,  _______, _______, _______, _______, _______,                             _______, _______, _______
    )


};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

    // 0: volume / brightness / playback
    [0] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(KC_BRID, KC_BRIU),
        ENCODER_CCW_CW(KC_MRWD, KC_MFFD)
    },

    // 1: temporary_media_next_prev / scroll / tags
    [1] = {
        ENCODER_CCW_CW(KC_MPRV,KC_MNXT),
        ENCODER_CCW_CW(MS_WHLD, MS_WHLU),
        ENCODER_CCW_CW(LGUI(KC_LEFT), LGUI(KC_RGHT))
    }
};
#endif


