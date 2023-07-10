// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "newam.h"
#include "action_layer.h"

#define LAY_D 0 // default
#define LAY_N 1 // numpad
#define LAY_F 2 // function keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │Escape│F1 │F2 │F3 │F4 │F5 │   │                     │F12│F6 │F7 │F8 │F9 │F10│  F11 │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ `    │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │SYR│ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ Q │ W │ E │ R │ T │   │                     │   │ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Escape│ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ Z │ X │ C │ V │ B │   │                     │ = │ N │ M │ , │ . │ / │ Shift│
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │Ctl│GUI│ALT│ ← │ → │         │tmx│   │ │   │A+T│         │ ↑ │ ↓ │VU │VD │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │HME│ │PgU│   │   │
     *                              │Spc│Bsp├───┤ ├───┤Del│Ent│
     *                              │   │   │END│ │PgD│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [LAY_D] = LAYOUT(
        KC_ESC,  KC_F1,          KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO,       KC_F12,  KC_F6, KC_F7, KC_F8,   KC_F9,   KC_F10,            KC_F11,
        KC_GRV,  KC_1,           KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,       KC_SYRQ, KC_6,  KC_7,  KC_8,    KC_9,    KC_0,              KC_MINS,
        KC_TAB,  KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,       KC_NO,   KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,              KC_BSLS,
        KC_ESC,  KC_A,           KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,       KC_EQL,  KC_H,  KC_J,  KC_K,    KC_L,    LT(LAY_N,KC_SCLN), KC_QUOT,
        KC_LSFT, LT(LAY_N,KC_Z), KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,       KC_NO,   KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT,
        KC_LCTL, KC_LGUI,        KC_LALT, KC_LEFT, KC_RGHT, KC_0,    KC_1,        KC_2,    KC_3,  KC_UP, KC_DOWN, KC_VOLU, KC_VOLD,           MO(LAY_F),
        KC_4,    KC_5,           KC_6,
        KC_7,    KC_8,           KC_9
    ),

    [LAY_N] = LAYOUT(
        _______, _______,  _______,  _______,  _______, _______, _______,    _______, _______,  _______,  _______, _______, _______, _______,
        _______, _______,  _______,  _______,  _______, _______, _______,    _______, _______,  _______,  _______, _______, _______, _______,
        _______, _______,  KC_AMPR,  KC_LCBR,  KC_RCBR, _______, _______,    _______, _______,  KC_KP_7,  KC_KP_8, KC_KP_9, _______, _______,
        _______, _______,  KC_ASTR,  KC_LPRN,  KC_RPRN, _______, _______,    _______, _______,  KC_KP_4,  KC_KP_5, KC_KP_6, _______, _______,
        _______, _______,  _______,  KC_LBRC,  KC_RBRC, _______, _______,    _______, _______,  KC_KP_1,  KC_KP_2, KC_KP_3, _______, _______,
        _______, _______,  _______,  _______,  _______, _______, _______,    _______, _______,  KC_KP_0,  KC_PDOT, KC_KP_0, KC_PEQL, _______,
        _______, _______,  _______,
        _______, _______,  _______
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
