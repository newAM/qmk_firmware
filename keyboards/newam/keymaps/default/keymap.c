// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "newam.h"
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │Escape│F1 │F2 │F3 │F4 │F5 │   │                     │   │F6 │F7 │F8 │F9 │F10│  F11 │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ `    │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ Q │ W │ E │ R │ T │   │                     │ Y │ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Escape│ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ Z │ X │ C │ V │ B │   │                     │ N │ N │ M │ , │ . │ / │ Shift│
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │Ctl│GUI│ALT│ ← │ → │         │ C │ V │ │Alt│ A │         │ ↑ │ ↓ │VU │VD │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │PgU│ │PgD│   │   │
     *                              │Bsp│Bsp├───┤ ├───┤Ent│   │
     *                              │   │   │Del│ │Ctl│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,       KC_TRNS, KC_F6, KC_F7, KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,       KC_SYRQ, KC_6,  KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,       KC_TRNS, KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_TRNS,       KC_EQL,  KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TRNS,       KC_TRNS, KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT, KC_0,    KC_1,          KC_2,    KC_3,  KC_UP, KC_DOWN, KC_VOLU, KC_VOLD, KC_TRNS,
        KC_4,    KC_5,    KC_6,
        KC_7,    KC_8,    KC_9
    )
};


void matrix_init_user(void) {

};

void matrix_scan_user(void) {
    uint8_t layer = get_highest_layer(layer_state);

    newam_right_led_r_off();
    newam_right_led_g_off();
    newam_right_led_b_off();
    switch (layer) {
        case 1:
            newam_right_led_r_on();
            break;
        case 2:
            newam_right_led_g_on();
            break;
        case 3:
            newam_right_led_b_on();
            break;
        case 4:
            newam_right_led_r_on();
            newam_right_led_g_on();
            break;
        case 5:
            newam_right_led_r_on();
            newam_right_led_b_on();
            break;
        case 6:
            newam_right_led_g_on();
            newam_right_led_b_on();
            break;
        case 7:
            newam_right_led_r_on();
            newam_right_led_g_on();
            newam_right_led_b_on();
            break;
        default:
            break;
    }
};
