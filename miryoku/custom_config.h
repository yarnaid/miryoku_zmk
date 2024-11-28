// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "custom_combos.keymap"

#define MIRYOKU_KLUDGE_GLOBALSHIFTFUNCTIONS
// #define MIRYOKU_KLUDGE_MOUSEKEYSPR



#define XXX &none



#define MIRYOKU_ALTERNATIVES_APP \
LS(LG(LA(LC(Q))))             LS(LG(LA(LC(W))))             LS(LG(LA(LC(E))))             LS(LG(LA(LC(R))))             LS(LG(LA(LC(T))))             LS(LG(LA(LC(Y))))             LS(LG(LA(LC(U))))             LS(LG(LA(LC(I))))             LS(LG(LA(LC(O))))             LS(LG(LA(LC(P))))             \
LS(LG(LA(LC(A))))     LS(LG(LA(LC(S))))     LS(LG(LA(LC(D))))    LS(LG(LA(LC(F))))    LS(LG(LA(LC(G))))             LS(LG(LA(LC(H))))             LS(LG(LA(LC(J))))    LS(LG(LA(LC(K))))    LS(LG(LA(LC(L))))     LS(LG(LA(LC(SQT))))   \
U_LT(U_BUTTON, Z), LS(LG(LA(LC(X))))     LS(LG(LA(LC(C))))             LS(LG(LA(LC(V))))             LS(LG(LA(LC(B))))             LS(LG(LA(LC(N))))             LS(LG(LA(LC(M))))             &kp COMMA,         LS(LG(LA(LC(DOT))))   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define U_APP    10



#if !defined (MIRYOKU_LAYOUTMAPPING_KYRIA)

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
               &u_lt U_APP &none  K32  K33  K34  XXX                                                                        XXX  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
#endif

#endif
