DEFINE += -D USE_PIO=1
DEFINE += -D PICO_CYW43_ARCH_THREADSAFE_BACKGROUND=1 -D CYW43_PIN_WL_HOST_WAKE=24 -D CYW43_PIN_WL_REG_ON=23
DEFINE += -D CYW43_WL_GPIO_COUNT=3 -D CYW43_WL_GPIO_LED_PIN=0 -D CYW43_SPI_PIO=1 -D CYW43_USE_SPI=1
DEFINE += -D PICO_TIME_DEFAULT_ALARM_POOL_DISABLED=0 -D PICO_LOWEST_IRQ_PRIORITY=0xff -D VTABLE_FIRST_IRQ=16
DEFINE += -D PICO_SPINLOCK_ID_HARDWARE_CLAIM=11
DEFINE += -D PICO_CYW43_ARCH_DEBUG_ENABLED=1

# PicoSDK lib/cyw43-driver
CYW43_LIB_DIR = ./lib/cyw43-driver
INCLUDE_DIRS += -I$(CYW43_LIB_DIR)/include -I$(CYW43_LIB_DIR)/firmware
CSRC += ${CYW43_LIB_DIR}/src/cyw43_ctrl.c
CSRC += ${CYW43_LIB_DIR}/src/cyw43_ll.c
CSRC += ${CYW43_LIB_DIR}/src/cyw43_lwip.c
CSRC += ${CYW43_LIB_DIR}/src/cyw43_sdio.c
CSRC += ${CYW43_LIB_DIR}/src/cyw43_stats.c

# PicoSDK common/hardware_claim
HARDWARE_CLAIM_LIB_DIR = ./lib/picosdk/hardware_claim
INCLUDE_DIRS += -I$(HARDWARE_CLAIM_LIB_DIR)/include
CSRC += ${HARDWARE_CLAIM_LIB_DIR}/claim.c

# PicoSDK common/pico_sync
PICO_SYNC_LIB_DIR = ./lib/picosdk/pico_sync
INCLUDE_DIRS += -I$(PICO_SYNC_LIB_DIR)/include
CSRC += $(PICO_SYNC_LIB_DIR)/critical_section.c
CSRC += $(PICO_SYNC_LIB_DIR)/mutex.c

# PicoSDK rp2_common/pico_async_context
PICO_ASYNC_CONTEXT_LIB_DIR = ./lib/picosdk/pico_async_context
INCLUDE_DIRS += -I$(PICO_ASYNC_CONTEXT_LIB_DIR)/include
CSRC += $(PICO_ASYNC_CONTEXT_LIB_DIR)/async_context_base.c
CSRC += $(PICO_ASYNC_CONTEXT_LIB_DIR)/async_context_poll.c
CSRC += $(PICO_ASYNC_CONTEXT_LIB_DIR)/async_context_threadsafe_background.c

# PicoSDK rp2_common/pico_cyw43_arch
PICO_CYW43_ARCH_LIB_DIR = ./lib/picosdk/pico_cyw43_arch
INCLUDE_DIRS += -I$(PICO_CYW43_ARCH_LIB_DIR)/include
CSRC += $(PICO_CYW43_ARCH_LIB_DIR)/cyw43_arch.c
CSRC += $(PICO_CYW43_ARCH_LIB_DIR)/cyw43_arch_poll.c
CSRC += $(PICO_CYW43_ARCH_LIB_DIR)/cyw43_arch_threadsafe_background.c

# PicoSDK rp2_common/pico_cyw43_driver
PICO_CYW43_DRIVER_LIB_DIR = ./lib/picosdk/pico_cyw43_driver
INCLUDE_DIRS += -I$(PICO_CYW43_DRIVER_LIB_DIR)/include
CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/cyw43_bus_pio_spi.c
CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/cyw43_driver.c