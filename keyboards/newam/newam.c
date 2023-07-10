#include "newam.h"

#include <stdint.h>

// extern inline void ergodox_board_led_on(void);
// extern inline void ergodox_right_led_1_on(void);
// extern inline void ergodox_right_led_2_on(void);
// extern inline void ergodox_right_led_3_on(void);
// extern inline void ergodox_right_led_on(uint8_t led);

// extern inline void ergodox_board_led_off(void);
// extern inline void ergodox_right_led_1_off(void);
// extern inline void ergodox_right_led_2_off(void);
// extern inline void ergodox_right_led_3_off(void);
// extern inline void ergodox_right_led_off(uint8_t led);

// extern inline void ergodox_led_all_on(void);
// extern inline void ergodox_led_all_off(void);

// extern inline void ergodox_right_led_1_set(uint8_t n);
// extern inline void ergodox_right_led_2_set(uint8_t n);
// extern inline void ergodox_right_led_3_set(uint8_t n);
// extern inline void ergodox_right_led_set(uint8_t led, uint8_t n);

// extern inline void ergodox_led_all_set(uint8_t n);

void matrix_init_kb(void) {
    setPinOutput(R_LED_PIN);
    setPinOutput(G_LED_PIN);
    setPinOutput(B_LED_PIN);
    newam_right_led_r_off();
    newam_right_led_g_off();
    newam_right_led_b_off();
}


// void ergodox_blink_all_leds(void) {
//     ergodox_led_all_off();
    // ergodox_led_all_set(LED_BRIGHTNESS_DEFAULT);
    // ergodox_right_led_1_on();
//     _delay_ms(50);
//     ergodox_right_led_2_on();
//     _delay_ms(50);
//     ergodox_right_led_3_on();
//     _delay_ms(50);
// #ifdef LEFT_LEDS
//     ergodox_left_led_1_on();
//     _delay_ms(50);
//     if (!mcp23018_status) {
//         mcp23018_status = ergodox_left_leds_update();
//     }
//     ergodox_left_led_2_on();
//     _delay_ms(50);
//     if (!mcp23018_status) {
//         mcp23018_status = ergodox_left_leds_update();
//     }
//     ergodox_left_led_3_on();
//     _delay_ms(50);
//     if (!mcp23018_status) {
//         mcp23018_status = ergodox_left_leds_update();
//     }
// #endif
//     ergodox_right_led_1_off();
//     _delay_ms(50);
//     ergodox_right_led_2_off();
//     _delay_ms(50);
//     ergodox_right_led_3_off();
// #ifdef LEFT_LEDS
//     _delay_ms(50);
//     ergodox_left_led_1_off();
//     if (!mcp23018_status) {
//         mcp23018_status = ergodox_left_leds_update();
//     }
//     _delay_ms(50);
//     ergodox_left_led_2_off();
//     if (!mcp23018_status) {
//         mcp23018_status = ergodox_left_leds_update();
//     }
//     _delay_ms(50);
//     ergodox_left_led_3_off();
//     if (!mcp23018_status) {
//         mcp23018_status = ergodox_left_leds_update();
//     }
// #endif

//     // ergodox_led_all_on();
//     //_delay_ms(333);
//     ergodox_led_all_off();
// }
