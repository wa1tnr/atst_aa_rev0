#include <atmel_start.h>

/* Many changes: by wa1tnr, July 2018 */

// #include "sam.h"
// #include "local_board_init.h"
// #include "PinMap_local.h"
// #include "bsp_gpio.h"
// #include "bsp_neopix.h"

void uSec(void) {
    for (volatile int i = 1; i < 2; i++) { // needs calibration
        // nothing
    }
}

void short_timer(void) { // human blinkie timescale
    uint32_t on_time  = 2140111222; // it's 2147 something ;)
    for(on_time = 214011; on_time > 0; on_time--) {
        uSec();
    }
}

void init_act_LED(void) { // PIN_ACTIVITY_LED
//    gpio_init(PORTA, PIN_ACTIVITY_LED, 1); // PA17
}



void blink_LED(void) {
/*
 // gpio_write(int port, int pin, int val)
    gpio_write(PORTA, PIN_ACTIVITY_LED, 1); // PA17
    short_timer();
    gpio_write(PORTA, PIN_ACTIVITY_LED, 0); // PA17
    short_timer();
*/
}

void blinkLEDfast(void) {
    for(int i = 15; i > 0; i--) {
        blink_LED();
    }
}

void activity_LED_demo(void) {
    init_act_LED();
    blinkLEDfast();
}

int xpmain(void) {
    // board_init(); // Initialize the SAM system
    // activity_LED_demo();
    while(1); // ////////////  trap!  ////////////////
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
	}
}
