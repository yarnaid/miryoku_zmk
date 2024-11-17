// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "custom_combos.keymap"

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC
// #define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_MAPPING_EXTENDED_THUMBS



#if !defined (MIRYOKU_LAYOUTMAPPING_KYRIA)

#define XXX &none

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
&kp TAB                  K00  K01  K02            K03  K04                                      K05  K06            K07            K08  K09  &kp BACKSPACE  \
&kp LCTRL                K10  K11  K12            K13  K14                                      K15  K16            K17            K18  K19  &kp SQT  \
&mt LEFT_SHIFT CAPSLOCK  K20  K21  K22            K23  K24  XXX  &studio_unlock       XXX  XXX  K25  K26            K27            K28  K29  &kp ESCAPE  \
                                   &kp LG(LS(A))  XXX  K32  K33  K34                  K35  K36  K37  &kp LG(SPACE)  &kp LA(LS(A))
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 43 44
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 45 46
#else
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  K32  K33  K34  XXX       XXX  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
#endif

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_KYRIA
