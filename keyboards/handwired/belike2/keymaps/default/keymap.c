#include QMK_KEYBOARD_H

#define _BASE 0
#define _LAYER_1 1

#define LAYER_1 MO(_LAYER_1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT (
		KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    ,                                KC_7    , KC_8    , KC_9    , KC_0    , KC_MINUS , KC_EQUAL,
		KC_HOME , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,                                KC_Y    , KC_U    , KC_I    , KC_O    , KC_P     , KC_END  ,
		KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,                                KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN  , KC_QUOT ,
		KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,                                KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH  , KC_RSFT ,
		                    KC_NO   , KC_LALT ,                                                                        KC_LBRC , KC_RBRC ,
						                        KC_LCTL , KC_ESC  , KC_BSPC ,          LAYER_1 , KC_SPACE ,
													      KC_LGUI , MS_LEFT ,                    KC_ENTER
	),

	[_LAYER_1] = LAYOUT (
		KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5    , KC_F6   ,                                  KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11   ,  KC_F12 ,
		_______ , _______ , _______ , KC_UP   , _______  , _______ ,                                  _______ , KC_VOLU , KC_VOLD , _______ , _______  , _______ ,
		_______ , _______ , KC_LEFT , KC_DOWN , KC_RIGHT , _______ ,                                  _______ , KC_MPRV , KC_MPLY , KC_MNXT , _______  , KC_GRV  ,
		KC_CAPS , _______ , _______ , _______ , _______  , _______ ,                                  _______ , _______ , _______ , _______ , _______  , _______ ,
		                    _______ , _______ ,                                                                           _______ , _______ ,
									            _______ , _______ , KC_DEL   ,             _______ , _______  ,
													      _______ , MS_RGHT  ,                       _______
	)
};
