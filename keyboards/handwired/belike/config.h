//
// Created by jake on 6/25/25.
//

#pragma once

#define MASTER_LEFT

/* Keyboard matrix assignment */
#define MATRIX_ROW_PINS_LEFT { GP27, GP26, GP18, GP20, GP19, GP10 }
#define MATRIX_COL_PINS_LEFT { GP4, GP5, GP6, GP7, GP8, GP9 }

#define MATRIX_ROW_PINS_RIGHT { GP4, GP5, GP7, GP6, GP8, GP9 }
#define MATRIX_COL_PINS_RIGHT { GP3, GP2, GP26, GP27, GP28, GP29 }

/* Trackball (this can be enabled once I get the sensor installed) */


#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

