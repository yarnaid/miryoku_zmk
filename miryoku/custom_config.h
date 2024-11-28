// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "custom_combos.keymap"

// #define MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_KLUDGE_GLOBALSHIFTFUNCTIONS
// #define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_LAUNCHER \
LG(LS(LA(LC(Q)))),  LG(LS(LA(LC(W)))),  LG(LS(LA(LC(E)))),  LG(LS(LA(LC(R)))),  LG(LS(LA(LC(T)))),       LG(LS(LA(LC(Y)))),  LG(LS(LA(LC(U)))),  LG(LS(LA(LC(I)))),  LG(LS(LA(LC(O)))),  LG(LS(LA(LC(P)))),  \
LG(LS(LA(LC(A)))),  LG(LS(LA(LC(S)))),  LG(LS(LA(LC(D)))),  LG(LS(LA(LC(F)))),  LG(LS(LA(LC(G)))),       LG(LS(LA(LC(H)))),  LG(LS(LA(LC(J)))),  LG(LS(LA(LC(K)))),  LG(LS(LA(LC(L)))),  LG(LS(LA(LC(SQT)))),  \
LG(LS(LA(LC(Z)))),  LG(LS(LA(LC(X)))),  LG(LS(LA(LC(C)))),  LG(LS(LA(LC(V)))),  LG(LS(LA(LC(B)))),       LG(LS(LA(LC(N)))),  LG(LS(LA(LC(M)))),  &kp COMMA,          U_MT(RALT, DOT),    U_LT(U_BUTTON, SLASH),\
U_NP,               U_NP,               U_LT(U_FUN, DEL),   U_LT(U_NUM, BSPC),  U_LT(U_SYM, RET),        U_LT(U_MOUSE, TAB), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, ESC), U_NP,               U_NP


#if !defined (MIRYOKU_LAYOUTMAPPING_KYRIA)

#define XXX &none

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
&kp TAB                  K00  K01  K02            K03  K04                                                K05  K06            K07            K08  K09  &kp BACKSPACE  \
&kp LCTRL                K10  K11  K12            K13  K14                                                K15  K16            K17            K18  K19  &kp SQT  \
&mt LEFT_SHIFT CAPSLOCK  K20  K21  K22            K23  K24  &kp LGUI  &studio_unlock       XXX  &kp RGUI  K25  K26            K27            K28  K29  &kp ESCAPE  \
                                   &kp LG(LS(A))  XXX  K32  K33       K34                  K35  K36       K37  &kp LG(SPACE)  &kp LA(LS(A))
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 43 44
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 45 46
#else
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX            K00  K01  K02  K03  K04                                                                        K05  K06  K07  K08  K09  XXX  \
&kp LCTRL      K10  K11  K12  K13  K14                                                                        K15  K16  K17  K18  K19  XXX  \
XXX            K20  K21  K22  K23  K24  &kp LS(LC(LA(LG(NUMBER_1))))  &kp LS(LC(LA(LG(NUMBER_2))))          &kp LS(LC(LA(LG(NUMBER_3))))  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  K32  K33  K34  XXX                                                                        XXX  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
#endif

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_KYRIA
