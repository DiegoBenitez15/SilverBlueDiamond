//
// Created by Bryan on 10/11/2019.
//

#include "fcraps.h"
#include <stdio.h>

int lna_pase(int d1, int d2, int apst){
    int n = d2 + d1, gn = apst * 10, pd = 0;
    if (n == 7) {
        return gn;
    }
    if (n == 11) {
        return gn;
    }
    else printf("%cPerdiste! Intentalo de nuevo",173);
        return pd;
}

int campo(int d1, int d2, int apst){
    int n = d2 + d1, i, gn = apst * 5, pd = 0;
    for (i = 5; i < 8; i++) {
        if (n == i)
            return pd;
        printf("%cPerdiste! Intentalo de nuevo",173);
        break;
    }
    return gn;
}

int grnss(int d1, int d2, int apst){
    int n = d2 + d1, gn = apst * 25, pd = 0;
    if (n == 6){
        return gn;
    }else printf("%cPerdiste! Intentalo de nuevo",173);
        return pd;
}

int grnoo(int d1, int d2, int apst){
    int n = d2 + d1, gn = apst * 25, pd = 0;
    if (n == 8){
        return gn;
    }else printf("%cPerdiste! Intentalo de nuevo",173);
        return pd;
}