// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk
#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LGUI, Q),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
U_LT(U_BUTTON, W), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, SQT),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(Z)))), Z)             \
U_MT(LGUI, Y),     U_MT(LALT, I),     U_MT(LCTRL, E),    U_MT(LSHFT, A),    &kp DOT,           U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LSHFT, S),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, B),     \
U_LT(U_BUTTON, J), U_MT(RALT, SLASH), &kp COMMA,         U_MT(LA(LC(LS(LG(K)))), K)             &kp SQT,           U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(RALT, P),     U_LT(U_BUTTON, V), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(L)))), L)             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
U_LT(U_BUTTON, SLASH),U_MT(RALT, Q),     U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(RALT, V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(Z)))), Z)             &kp SQT,           U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(J)))), J)             \
U_MT(LGUI, S),     U_MT(LALT, H),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp COMMA,         &kp DOT,           U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, F), U_MT(RALT, M),     U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(C)))), C)             &kp SLASH,         U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(RALT, K),     U_LT(U_BUTTON, Y), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(P)))), P)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LGUI, Q),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
U_LT(U_BUTTON, W), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, SQT),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(Z)))), Z)             \
U_MT(LGUI, Y),     U_MT(LALT, I),     U_MT(LCTRL, E),    U_MT(LSHFT, A),    &kp DOT,           U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LSHFT, S),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, B),     \
U_LT(U_BUTTON, J), U_MT(RALT, SLASH), &kp COMMA,         U_MT(LA(LC(LS(LG(K)))), K)             &kp SQT,           U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(RALT, P),     U_LT(U_BUTTON, V), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(L)))), L)             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
U_LT(U_BUTTON, SLASH),U_MT(RALT, Q),     U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(RALT, V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(Z)))), Z)             &kp SQT,           U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(J)))), J)             \
U_MT(LGUI, S),     U_MT(LALT, H),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp COMMA,         &kp DOT,           U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, F), U_MT(RALT, M),     U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(C)))), C)             &kp SLASH,         U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(RALT, K),     U_LT(U_BUTTON, Y), \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(P)))), P)             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LS(LG(LC(LA(NUMBER_1)))), U),             U_MT(LS(LG(LC(LA(NUMBER_2)))), I),             U_MT(LS(LG(LC(LA(NUMBER_3)))), O),             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(M)))), M)             \
U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(Z)))), Z)             \
U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(A)))), A)             &kp DOT,           U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(B)))), B)             \
U_MT(LA(LC(LS(LG(J)))), J)             &kp SLASH,         &kp COMMA,         U_MT(LA(LC(LS(LG(K)))), K)             &kp SQT,           U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(V)))), V)             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(L)))), L)             \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(S)))), S)             \
&kp SLASH,         U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(Z)))), Z)             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(Z)))), Z)             &kp SQT,           U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(J)))), J)             \
U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(T)))), T)             &kp COMMA,         &kp DOT,           U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(I)))), I)             \
U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(C)))), C)             &kp SLASH,         U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(Y)))), Y)             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(P)))), P)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(I)))), I)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp SQT,           \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp SQT,           \
U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(M)))), M)             \
U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(Z)))), Z)             \
U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(A)))), A)             &kp DOT,           U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(B)))), B)             \
U_MT(LA(LC(LS(LG(J)))), J)             &kp SLASH,         &kp COMMA,         U_MT(LA(LC(LS(LG(K)))), K)             &kp SQT,           U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(V)))), V)             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(Y)))), Y)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(H)))), H)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(L)))), L)             \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(S)))), S)             \
&kp SLASH,         U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(Z)))), Z)             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(L)))), L)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(Z)))), Z)             &kp SQT,           U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(J)))), J)             \
U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(T)))), T)             &kp COMMA,         &kp DOT,           U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(I)))), I)             \
U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(C)))), C)             &kp SLASH,         U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(P)))), P)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(Y)))), Y)             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(P)))), P)             &kp SQT,           \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(I)))), I)             \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(M)))), M)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp SQT,           \
U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
U_MT(LA(LC(LS(LG(Q)))), Q)             U_MT(LA(LC(LS(LG(W)))), W)             U_MT(LA(LC(LS(LG(E)))), E)             U_MT(LA(LC(LS(LG(R)))), R)             U_MT(LA(LC(LS(LG(T)))), T)             U_MT(LA(LC(LS(LG(Z)))), Z)             U_MT(LA(LC(LS(LG(U)))), U)             U_MT(LA(LC(LS(LG(I)))), I)             U_MT(LA(LC(LS(LG(O)))), O)             U_MT(LA(LC(LS(LG(P)))), P)             \
U_MT(LA(LC(LS(LG(A)))), A)             U_MT(LA(LC(LS(LG(S)))), S)             U_MT(LA(LC(LS(LG(D)))), D)             U_MT(LA(LC(LS(LG(F)))), F)             U_MT(LA(LC(LS(LG(G)))), G)             U_MT(LA(LC(LS(LG(H)))), H)             U_MT(LA(LC(LS(LG(J)))), J)             U_MT(LA(LC(LS(LG(K)))), K)             U_MT(LA(LC(LS(LG(L)))), L)             &kp SQT,           \
U_MT(LA(LC(LS(LG(Y)))), Y)             U_MT(LA(LC(LS(LG(X)))), X)             U_MT(LA(LC(LS(LG(C)))), C)             U_MT(LA(LC(LS(LG(V)))), V)             U_MT(LA(LC(LS(LG(B)))), B)             U_MT(LA(LC(LS(LG(N)))), N)             U_MT(LA(LC(LS(LG(M)))), M)             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         &kp C_VOL_UP,      U_RGB_HUI,         U_RGB_SAI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_RGB_BRI,         \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         \
U_NA,              &kp RALT,          &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPACE,         &kp K_APP,         U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
