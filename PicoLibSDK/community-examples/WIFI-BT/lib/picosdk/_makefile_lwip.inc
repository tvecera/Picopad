DEFINE += -D CYW43_LWIP=1

# PicoSDK lib/lwip
LWIPDIR = ./lib/lwip/src/
include ${LWIPDIR}/Filelists.mk
INCLUDE_DIRS += -I$(LWIPDIR)/include
CSRC += ${COREFILES}
CSRC += ${CORE4FILES}
CSRC += ${NETIFFILES}
CSRC += ${APIFILES}

# PicoSDK rp2_common/pico_lwip
PICO_LWIP_LIB_DIR = ./lib/picosdk/pico_lwip
INCLUDE_DIRS += -I$(PICO_LWIP_LIB_DIR)/include -I$(PICO_LWIP_LIB_DIR)/config
CSRC += ${PICO_LWIP_LIB_DIR}/lwip_nosys.c
