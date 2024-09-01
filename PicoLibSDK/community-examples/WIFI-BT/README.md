# Picopad WIFI / BT stack

Portace CYW43, LWIP, BTSTACK z originálního PicoSDK. Aby fungoval standardní build, je nutné v sdk provést následující změny:

- Přidat řádek CFLAGS += ${EXTRA_CFLAGS} do Makefile.inc:

```diff
CFLAGS += -Werror

+CFLAGS += ${EXTRA_CFLAGS}
+
# === C++ flags

CPPFLAGS = $(CFLAGS)
```

- Zakomentovat definici uintptr_t a intptr_t v global.h.

```diff
typedef s64 int64_t;
typedef u64 uint64_t;

-typedef unsigned long uintptr_t;
-typedef long intptr_t;
+//typedef unsigned long uintptr_t;
+//typedef long intptr_t;
```

Součástí je i několik základních příkladů. Stačí vždy odkomentovat sekci v WIFI-BT/Makefile. Pozor, je potřeba mít odkomentován vždy jenom sekci s jedním příkladem:

```makefile
## WIFI Blink
#CYW43 = 1
#
#SRC += src/wifi/blink.cpp

# WIFI Scan
CYW43 = 1

SRC += src/wifi/scan.cpp
```
