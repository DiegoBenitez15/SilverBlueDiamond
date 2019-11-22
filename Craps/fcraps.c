//
// Created by Bryan on 10/11/2019.
//

#include "fcraps.h"
#include <stdio.h>

int lna_pase(int d1, int d2, int apst) {
    int gn = apst * 10;
    if (d1 + d2 == 7) {
        return gn;
    } else if (d1 +d2 == 11) {
        return gn;
    } else
        printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
    return 0;
}

int campo(int d1, int d2, int apst){
    int i, gn = apst * 5;
    for (i = 5; i < 8; i++) {
        if ( d1 + d2 > i){
            printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
            return 0;
        }
    }
    return gn;
}

int grnss(int d1, int d2, int apst){
    int gn = apst * 25;
    if ( d1 +d2 == 6){
        return gn;
    }else
        printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
    return 0;
}

int grnoo(int d1, int d2, int apst) {
    int gn = apst * 25;
    if ( d1 +d2 == 8) {
        return gn;
    } else
        printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
    return 0;
}

void dados (int dados){
    if (dados == 1){
        printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,191);
        printf("%c       %c\n",179,179);
        printf("%c   %c   %c\n",179,254,179);
        printf("%c       %c\n",179,179);
        printf("%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,217);
    }
    if(dados == 2){
        printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,191);
        printf("%c %c     %c\n",179,254,179);
        printf("%c       %c\n",179,179);
        printf("%c     %c %c\n",179,254,179);
        printf("%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,217);
    }
    if(dados == 3){
        printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,191);
        printf("%c %c     %c\n",179,254,179);
        printf("%c   %c   %c\n",179,254,179);
        printf("%c     %c %c\n",179,254,179);
        printf("%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,217);

    }
    if(dados == 4){
        printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,191);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c       %c\n",179,179);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,217);

    }
    if(dados == 5){
        printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,191);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c   %c   %c\n",179,254,179);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,217);
    }
    if(dados == 6){
        printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,191);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c %c   %c %c\n",179,254,254,179);
        printf("%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,217);
    }
}