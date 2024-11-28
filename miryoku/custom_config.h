// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "custom_combos.keymap"

// #define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_KLUDGE_GLOBALSHIFTFUNCTIONS
// #define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_APP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
// LG(LS(LA(LC(Q)))),       LG(LS(LA(LC(W)))),  LG(LS(LA(LC(E)))),  LG(LS(LA(LC(R)))),  LG(LS(LA(LC(T)))),       LG(LS(LA(LC(Y)))),  LG(LS(LA(LC(U)))),  LG(LS(LA(LC(I)))),  LG(LS(LA(LC(O)))),  LG(LS(LA(LC(P)))),  \
// LG(LS(LA(LC(A)))),       LG(LS(LA(LC(S)))),  LG(LS(LA(LC(D)))),  LG(LS(LA(LC(F)))),  LG(LS(LA(LC(G)))),       LG(LS(LA(LC(H)))),  LG(LS(LA(LC(J)))),  LG(LS(LA(LC(K)))),  LG(LS(LA(LC(L)))),  LG(LS(LA(LC(SQT)))),  \
// LG(LS(LA(LC(Z)))),       LG(LS(LA(LC(X)))),  LG(LS(LA(LC(C)))),  LG(LS(LA(LC(V)))),  LG(LS(LA(LC(B)))),       LG(LS(LA(LC(N)))),  LG(LS(LA(LC(M)))),  &kp COMMA,          U_MT(RALT, DOT),    U_LT(U_BUTTON, SLASH),\
// I_LT(U_LAUNCHER, U_NP),  U_NP,               U_LT(U_FUN, DEL),   U_LT(U_NUM, BSPC),  U_LT(U_SYM, RET),        U_LT(U_MOUSE, TAB), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, ESC), U_NP,               U_NP


// #if !defined (MIRYOKU_LAYOUTMAPPING_KYRIA)

// #define XXX &none

// #if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
// #define MIRYOKU_LAYOUTMAPPING_KYRIA(\
//      K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
// )\
// &kp TAB                  K00  K01  K02            K03  K04                                                K05  K06            K07            K08  K09  &kp BACKSPACE  \
// &kp LCTRL                K10  K11  K12            K13  K14                                                K15  K16            K17            K18  K19  &kp SQT  \
// &mt LEFT_SHIFT CAPSLOCK  K20  K21  K22            K23  K24  &kp LGUI  &studio_unlock       XXX  &kp RGUI  K25  K26            K27            K28  K29  &kp ESCAPE  \
//                                    &kp LG(LS(A))  XXX  K32  K33       K34                  K35  K36       K37  &kp LG(SPACE)  &kp LA(LS(A))
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 43 44
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 45 46
// #else
// #define MIRYOKU_LAYOUTMAPPING_KYRIA(\
//      K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
// )\
// XXX            K00  K01  K02  K03  K04                                                                        K05  K06  K07  K08  K09  XXX  \
// &kp LCTRL      K10  K11  K12  K13  K14                                                                        K15  K16  K17  K18  K19  XXX  \
// XXX            K20  K21  K22  K23  K24  &kp LS(LC(LA(LG(NUMBER_1))))  &kp LS(LC(LA(LG(NUMBER_2))))          &kp LS(LC(LA(LG(NUMBER_3))))  XXX  K25  K26  K27  K28  K29  XXX  \
//                XXX  K32  K33  K34  XXX                                                                        XXX  K35  K36  K37  XXX
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
// #endif

// #endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_KYRIA


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,     "Base") \
MIRYOKU_X(EXTRA,    "Extra") \
MIRYOKU_X(TAP,      "Tap") \
MIRYOKU_X(BUTTON,   "Button") \
MIRYOKU_X(NAV,      "Nav") \
MIRYOKU_X(MOUSE,    "Mouse") \
MIRYOKU_X(MEDIA,    "Media") \
MIRYOKU_X(NUM,      "Num") \
MIRYOKU_X(SYM,      "Sym") \
MIRYOKU_X(FUN,      "Fun")
// MIRYOKU_X(LAUNCHER, "apps")

#define MIRYOKU_LAYERMAPPING_LAUNCHER MIRYOKU_MAPPING

#define U_BASE      0
#define U_EXTRA     1
#define U_TAP       2
#define U_BUTTON    3
#define U_NAV       4
#define U_MOUSE     5
#define U_MEDIA     6
#define U_NUM       7
#define U_SYM       8
#define U_FUN       9
#define U_APP 10