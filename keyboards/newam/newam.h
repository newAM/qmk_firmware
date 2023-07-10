#pragma once

#include "gpio.h"

#define R_LED_PIN GP4
#define G_LED_PIN GP3
#define B_LED_PIN GP2

inline void newam_right_led_r_on(void) { writePinHigh(R_LED_PIN); }
inline void newam_right_led_r_off(void) { writePinLow(R_LED_PIN); }

inline void newam_right_led_g_on(void) { writePinHigh(G_LED_PIN); }
inline void newam_right_led_g_off(void) { writePinLow(G_LED_PIN); }

inline void newam_right_led_b_on(void) { writePinHigh(B_LED_PIN); }
inline void newam_right_led_b_off(void) { writePinLow(B_LED_PIN); }
