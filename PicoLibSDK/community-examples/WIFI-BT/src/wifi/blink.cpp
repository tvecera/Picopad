/**
 * Copyright (c) 2022 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "../../include.h"
#include "pico/cyw43_arch.h"

int main() {
	u8 key = KeyGet();

	printf("Wi-Fi init start\n");
	if (cyw43_arch_init()) {
		printf("Wi-Fi init failed\n");
		while (key != KEY_Y) {
			key = KeyGet();
		}
		ResetToBootLoader();
	}
	printf("Wi-Fi init OK\n");

	while (key != KEY_Y) {
		key = KeyGet();
		cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
		sleep_ms(250);
		cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
		sleep_ms(250);
	}
	cyw43_arch_deinit();
	ResetToBootLoader();
}
