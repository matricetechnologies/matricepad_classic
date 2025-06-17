#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    "matrice_technologies"
#define PRODUCT         "matricepad_classic"

#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { B4, E6, D7 }
#define MATRIX_COL_PINS { D1, D0, D4, C6 }

#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5

