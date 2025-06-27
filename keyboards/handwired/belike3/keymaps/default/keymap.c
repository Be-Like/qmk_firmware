#include QMK_KEYBOARD_H

#define _BASE 0
#define _LAYER_1 1

#define LAYER_1 MO(_LAYER_1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT (
		KC_4, KC_5
	)
};
