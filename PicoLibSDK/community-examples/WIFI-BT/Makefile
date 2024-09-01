
# ASM source files
ASRC +=

# C source files
#CSRC +=

########################## WIFI Examples ##########################

## WIFI Blink
#CYW43 = 1
#
#SRC += src/wifi/blink.cpp

# WIFI Scan
CYW43 = 1

SRC += src/wifi/scan.cpp

## WIFI NTP demo
#CYW43_IP = 1
#
#SRC += src/wifi/ntp.cpp

####################################################################

######################## BLUETOOTH Examples ########################

## BT HID Keyboard DEMO
#BTSTACK_CLASSIC = 1
#
#SRC += src/bt/hid_keyboard_demo.cpp

# BT HID Keyboard DEMO
#BTSTACK_CLASSIC = 1
#
#SRC += src/bt/a2dp_sink_demo.cpp

####################################################################

include lib/picosdk/_makefile.inc

TARGET=WIFI-BT
DEVICE=picopad10
DEVCLASS=picopad
DEVDIR=!PicoPad10

# Makefile includes
include ../../../Makefile.inc
