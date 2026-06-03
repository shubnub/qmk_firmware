#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum sofle_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌─────────────┬───┬──────┬──────┬──────┬────────────┐                    ┌────────────┬──────┬──────┬──────┬───┬─────────┐
//    │      `      │ 1 │  2   │  3   │  4   │     5      │                    │     6      │  7   │  8   │  9   │ 0 │    =    │
//    ├─────────────┼───┼──────┼──────┼──────┼────────────┤                    ├────────────┼──────┼──────┼──────┼───┼─────────┤
//    │     esc     │ q │  w   │  e   │  r   │     t      │                    │     y      │  u   │  i   │  o   │ p │  bspc   │
//    ├─────────────┼───┼──────┼──────┼──────┼────────────┤                    ├────────────┼──────┼──────┼──────┼───┼─────────┤
//    │ LCTL_T(tab) │ a │  s   │  d   │  f   │     g      │                    │     h      │  j   │  k   │  l   │ ; │    '    │
//    ├─────────────┼───┼──────┼──────┼──────┼────────────┼──────┐   ┌─────────┼────────────┼──────┼──────┼──────┼───┼─────────┤
//    │   SC_LSPO   │ z │  x   │  c   │  v   │     b      │ mute │   │ BL_TOGG │     n      │  m   │  ,   │  .   │ / │ SC_RSPC │
//    └─────────────┴───┼──────┼──────┼──────┼────────────┼──────┤   ├─────────┼────────────┼──────┼──────┼──────┼───┴─────────┘
//                      │ lctl │ lalt │ lgui │ LT(1, spc) │ ent  │   │   ent   │ LT(2, spc) │ rgui │ ralt │ rctl │
//                      └──────┴──────┴──────┴────────────┴──────┘   └─────────┴────────────┴──────┴──────┴──────┘
[_QWERTY] = LAYOUT(
  KC_GRV         , KC_1 , KC_2    , KC_3    , KC_4    , KC_5          ,                         KC_6          , KC_7    , KC_8    , KC_9    , KC_0    , KC_EQL ,
  KC_ESC         , KC_Q , KC_W    , KC_E    , KC_R    , KC_T          ,                         KC_Y          , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSPC,
  LCTL_T(KC_TAB) , KC_A , KC_S    , KC_D    , KC_F    , KC_G          ,                         KC_H          , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT,
  SC_LSPO        , KC_Z , KC_X    , KC_C    , KC_V    , KC_B          , KC_MUTE ,     BL_TOGG , KC_N          , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , SC_RSPC,
                          KC_LCTL , KC_LALT , KC_LGUI , LT(1, KC_SPC) , KC_ENT  ,     KC_ENT  , LT(2, KC_SPC) , KC_RGUI , KC_RALT , KC_RCTL
),

//    ┌─────┬────┬─────┬─────┬─────┬─────┐               ┌─────┬─────┬─────┬─────┬─────┬─────┐
//    │     │ f1 │ f2  │ f3  │ f4  │ f5  │               │ f6  │ f7  │ f8  │ f9  │ f10 │ f11 │
//    ├─────┼────┼─────┼─────┼─────┼─────┤               ├─────┼─────┼─────┼─────┼─────┼─────┤
//    │  `  │ 1  │  2  │  3  │  4  │  5  │               │  6  │  7  │  8  │  9  │  0  │ f12 │
//    ├─────┼────┼─────┼─────┼─────┼─────┤               ├─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │ !  │  @  │  #  │  $  │  %  │               │  ^  │  &  │  *  │  (  │  )  │  |  │
//    ├─────┼────┼─────┼─────┼─────┼─────┼─────┐   ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//    │     │ =  │  -  │  +  │  {  │  }  │     │   │     │  [  │  ]  │  ;  │  :  │  \  │     │
//    └─────┴────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼─────┴─────┘
//               │     │     │     │     │     │   │     │     │     │     │     │
//               └─────┴─────┴─────┴─────┴─────┘   └─────┴─────┴─────┴─────┴─────┘
[_LOWER] = LAYOUT(
  KC_TRNS , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                         KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11 ,
  KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                         KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_F12 ,
  KC_TRNS , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,                         KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_PIPE,
  KC_TRNS , KC_EQL  , KC_MINS , KC_PLUS , KC_LCBR , KC_RCBR , KC_TRNS ,     KC_TRNS , KC_LBRC , KC_RBRC , KC_SCLN , KC_COLN , KC_BSLS , KC_TRNS,
                      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
),

//    ┌─────┬─────────┬─────────┬─────────┬─────────┬──────┐               ┌──────┬────────────┬──────┬────────────┬────────────┬──────┐
//    │     │         │         │         │         │      │               │      │            │      │            │            │      │
//    ├─────┼─────────┼─────────┼─────────┼─────────┼──────┤               ├──────┼────────────┼──────┼────────────┼────────────┼──────┤
//    │     │   ins   │  pscr   │   app   │   no    │  no  │               │ pgup │ LCTL(left) │  up  │ LCTL(rght) │ LCTL(bspc) │ bspc │
//    ├─────┼─────────┼─────────┼─────────┼─────────┼──────┤               ├──────┼────────────┼──────┼────────────┼────────────┼──────┤
//    │     │  lalt   │  lctl   │  lsft   │   no    │ caps │               │ pgdn │    left    │ down │    rght    │    del     │ bspc │
//    ├─────┼─────────┼─────────┼─────────┼─────────┼──────┼─────┐   ┌─────┼──────┼────────────┼──────┼────────────┼────────────┼──────┤
//    │     │ LCTL(z) │ LCTL(x) │ LCTL(c) │ LCTL(v) │  no  │     │   │     │  no  │    home    │  no  │    end     │     no     │      │
//    └─────┴─────────┼─────────┼─────────┼─────────┼──────┼─────┤   ├─────┼──────┼────────────┼──────┼────────────┼────────────┴──────┘
//                    │         │         │         │      │     │   │     │      │            │      │            │
//                    └─────────┴─────────┴─────────┴──────┴─────┘   └─────┴──────┴────────────┴──────┴────────────┘
[_RAISE] = LAYOUT(
  KC_TRNS , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS ,                         KC_TRNS , KC_TRNS       , KC_TRNS , KC_TRNS       , KC_TRNS       , KC_TRNS,
  KC_TRNS , KC_INS     , KC_PSCR    , KC_APP     , KC_NO      , KC_NO   ,                         KC_PGUP , LCTL(KC_LEFT) , KC_UP   , LCTL(KC_RGHT) , LCTL(KC_BSPC) , KC_BSPC,
  KC_TRNS , KC_LALT    , KC_LCTL    , KC_LSFT    , KC_NO      , KC_CAPS ,                         KC_PGDN , KC_LEFT       , KC_DOWN , KC_RGHT       , KC_DEL        , KC_BSPC,
  KC_TRNS , LCTL(KC_Z) , LCTL(KC_X) , LCTL(KC_C) , LCTL(KC_V) , KC_NO   , KC_TRNS ,     KC_TRNS , KC_NO   , KC_HOME       , KC_NO   , KC_END        , KC_NO         , KC_TRNS,
                         KC_TRNS    , KC_TRNS    , KC_TRNS    , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS       , KC_TRNS , KC_TRNS
),

//    ┌─────────┬────┬─────────┬─────┬─────────┬─────┐               ┌─────┬──────┬──────┬──────┬────┬────┐
//    │   no    │ no │   no    │ no  │   no    │ no  │               │ no  │  no  │  no  │  no  │ no │ no │
//    ├─────────┼────┼─────────┼─────┼─────────┼─────┤               ├─────┼──────┼──────┼──────┼────┼────┤
//    │ QK_BOOT │ no │   no    │ no  │ CG_TOGG │ no  │               │ no  │  no  │  no  │  no  │ no │ no │
//    ├─────────┼────┼─────────┼─────┼─────────┼─────┤               ├─────┼──────┼──────┼──────┼────┼────┤
//    │   no    │ no │ CG_TOGG │ no  │   no    │ no  │               │ no  │ vold │ mute │ volu │ no │ no │
//    ├─────────┼────┼─────────┼─────┼─────────┼─────┼─────┐   ┌─────┼─────┼──────┼──────┼──────┼────┼────┤
//    │   no    │ no │   no    │ no  │   no    │ no  │ no  │   │ no  │ no  │ mprv │ mply │ mnxt │ no │ no │
//    └─────────┴────┼─────────┼─────┼─────────┼─────┼─────┤   ├─────┼─────┼──────┼──────┼──────┼────┴────┘
//                   │         │     │         │     │     │   │     │     │      │      │      │
//                   └─────────┴─────┴─────────┴─────┴─────┘   └─────┴─────┴──────┴──────┴──────┘
[_ADJUST] = LAYOUT(
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  QK_BOOT , XXXXXXX , XXXXXXX , XXXXXXX , CG_TOGG , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  XXXXXXX , XXXXXXX , CG_TOGG , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , KC_VOLD , KC_MUTE , KC_VOLU , XXXXXXX , XXXXXXX,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , KC_MPRV , KC_MPLY , KC_MNXT , XXXXXXX , XXXXXXX,
                      _______ , _______ , _______ , _______ , _______ ,     _______ , _______ , _______ , _______ , _______
)
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

