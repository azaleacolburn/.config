#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_Q, KC_D, KC_R, KC_W,
        KC_B, KC_TRANSPARENT, KC_TRANSPARENT, KC_J, KC_F, KC_U, KC_P, KC_SCLN,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_A, KC_S, KC_H, KC_T, KC_G,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_N, KC_E, KC_O, KC_I,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_Z, KC_X, KC_M, KC_C, KC_V, KC_K,
        KC_L, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_BSPC,
        KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LCTL, KC_TAB),
        MT(MOD_LALT, KC_ENTER)),
    [1] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE, KC_QUOTE,
        KC_COLN, KC_DQUO, KC_TILD, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LPRN, KC_UNDS, KC_RPRN, KC_BSLS, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_PLUS, KC_MINUS, KC_EQUAL, KC_DLR, KC_HASH,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC, KC_LCBR, KC_AMPR, KC_RCBR,
        KC_ASTR, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK, KC_AT, KC_PERC,
        KC_EXLM, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC, KC_PIPE, KC_RBRC,
        KC_RABK, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_DOT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_SCLN),
    [2] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1, KC_F2, KC_F3,
        KC_F4, KC_F5, KC_TRANSPARENT, KC_TRANSPARENT, KC_F6, KC_F7, KC_F8,
        KC_F9, KC_F10, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,
        KC_F12, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,
        KC_0, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};
const uint16_t PROGMEM combo0[] = {KC_LEFT_GUI, KC_ESCAPE, COMBO_END};
const uint16_t PROGMEM combo1[] = {MT(MOD_LALT, KC_ENTER), KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_ESCAPE, KC_SPACE, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(1)),
    COMBO(combo1, OSL(2)),
    COMBO(combo2, OSM(MOD_LSFT)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{140, 162, 250}, {249, 79, 245},  {0, 0, 255},     {249, 79, 245},
           {140, 162, 250}, {140, 162, 250}, {249, 79, 245},  {0, 0, 255},
           {249, 79, 245},  {140, 162, 250}, {140, 162, 250}, {249, 79, 245},
           {0, 0, 255},     {249, 79, 245},  {140, 162, 250}, {140, 162, 250},
           {249, 79, 245},  {0, 0, 255},     {249, 79, 245},  {140, 162, 250},
           {140, 162, 250}, {249, 79, 245},  {0, 0, 255},     {249, 79, 245},
           {140, 162, 250}, {140, 162, 250}, {249, 79, 245},  {0, 0, 255},
           {249, 79, 245},  {140, 162, 250}, {249, 79, 245},  {0, 0, 255},
           {140, 162, 250}, {249, 79, 245},  {0, 0, 255},     {140, 162, 250},
           {140, 162, 250}, {249, 79, 245},  {0, 0, 255},     {249, 79, 245},
           {140, 162, 250}, {140, 162, 250}, {249, 79, 245},  {0, 0, 255},
           {249, 79, 245},  {140, 162, 250}, {140, 162, 250}, {249, 79, 245},
           {0, 0, 255},     {249, 79, 245},  {140, 162, 250}, {140, 162, 250},
           {249, 79, 245},  {0, 0, 255},     {249, 79, 245},  {140, 162, 250},
           {140, 162, 250}, {249, 79, 245},  {0, 0, 255},     {249, 79, 245},
           {140, 162, 250}, {140, 162, 250}, {249, 79, 245},  {0, 0, 255},
           {249, 79, 245},  {140, 162, 250}, {249, 79, 245},  {0, 0, 255},
           {140, 162, 250}, {249, 79, 245},  {0, 0, 255},     {140, 162, 250}},

    [2] = {{152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255},
           {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}},

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb_matrix_set_color(i, 0, 0, 0);
    } else {
      RGB rgb = hsv_to_rgb(hsv);
      float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
      rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
    return false;
  }
  if (keyboard_config.disable_layer_led) {
    return false;
  }
  switch (biton32(layer_state)) {
  case 0:
    set_layer_color(0);
    break;
  case 2:
    set_layer_color(2);
    break;
  default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  case RGB_SLD:
    if (rawhid_state.rgb_control) {
      return false;
    }
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}
