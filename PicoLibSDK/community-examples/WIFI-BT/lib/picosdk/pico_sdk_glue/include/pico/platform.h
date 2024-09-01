#ifndef _PICO_SDK_GLUE_PLATFORM_H
#define _PICO_SDK_GLUE_PLATFORM_H

#define NUM_PIOS _u(2)
#define pico_default_asm(...) __asm (".syntax unified\n" __VA_ARGS__)
#define pico_default_asm_volatile(...) __asm volatile (".syntax unified\n" __VA_ARGS__)

static inline uint __get_current_exception(void) {
	uint exception;
	pico_default_asm_volatile ( "mrs %0, ipsr" : "=l" (exception));
	return exception;
}

static inline void busy_wait_at_least_cycles(uint32_t minimum_cycles) {
	pico_default_asm_volatile(
			"1: subs %0, #3\n"
			"bcs 1b\n"
			: "+l" (minimum_cycles) : : "cc", "memory"
	);
}

#endif
