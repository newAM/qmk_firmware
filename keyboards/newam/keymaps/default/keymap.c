// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ `    │ 1 │ 2 │ 3 │ 4 │ 5 │ = │                     │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ Q │ W │ E │ R │ T │ = │                     │ Y │ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Escape│ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ Z │ X │ C │ V │ B │ B │                     │ N │ N │ M │ , │ . │ / │ Shift│
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │Ctl│F4 │F5 │GUI│Alt│         │ C │ V │ │Alt│ A │         │ ← │ ↓ │ ↑ │ → │GUI│
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │PgU│ │PgD│   │   │
     *                              │Bsp│Bsp├───┤ ├───┤Ent│   │
     *                              │   │   │Del│ │Ctl│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_GRV,  KC_F1, KC_F2, KC_F3,   KC_F4,  KC_F5,   KC_DOWN,       KC_DOWN, KC_F6, KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,
        KC_GRV,  KC_1,  KC_2,  KC_3,    KC_4,   KC_5,    KC_DOWN,       KC_GRV,  KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_DOWN,
        KC_TAB,  KC_Q,  KC_W,  KC_E,    KC_R,   KC_T,    KC_EQL,        KC_GRV,  KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_BSLS,
        KC_ESC,  KC_A,  KC_S,  KC_D,    KC_F,   KC_G,    KC_DOWN,       KC_GRV,  KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,  KC_X,  KC_C,    KC_V,   KC_B,    KC_DOWN,       KC_GRV,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_1,  KC_1,  KC_1,    KC_1,   KC_1,    KC_1,          KC_1,    KC_1,  KC_1,  KC_1,    KC_1,   KC_1,    KC_RCTL,
        KC_1,    KC_1,  KC_1,
        KC_1,    KC_1,  KC_1
    )
};
