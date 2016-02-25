/*
 * TestsOnTarget.cpp
 *  The MIT License (MIT)
 *
 * Copyright (c) 2013 EP Research
 * [Released under MIT License. Please refer to license.txt for details]
 */

#include "../unity/unity.h"

#include "../src/LED.h"

#include "stdint.h"

#include <LPC17xx.h>

void LED_real_Test(void) {
	LED led_real = LED(&LPC_GPIO1->FIOPIN, 18);
	led_real.on();
	TEST_ASSERT(LPC_GPIO1->FIOPIN & (1 << 18));
}
