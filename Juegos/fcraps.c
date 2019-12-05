//
// Created by Bryan on 10/11/2019.
//


#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "../Funciones.h"
#include <stdio.h>

JUGADOR* Craps(JUGADOR* jugador)
{
    char respt, mdj;
    int apst = 0, nd1 = 0, nd2 = 0, gns = 0;
    do
    {
        printf("\nDinero: $%d\t\t\tC\tR\tA\tP\tS\n",jugador->dinero);
        for(int i=0; i< 85;i++){
            printf("%c",205);
        }
        printf("\n%cCu%cnto va a apostar? ",168,160);
        scanf("%d",&apst);
    }while(apst > 500 || apst > jugador->dinero);
    fflush(stdin);
    system("CLS");
    if (apst <= 0) {
        printf("\n%c Error. Digita nuevamente. %c",176,176);
    }
    printf("\t\t %cElija el modo de apuesta que desea utilizar: \n\n\t\t\t\t",176);
    mesacraps();
    mdj = getc(stdin);
    nd1 = 1 + rand() % (6 - 1);
    nd2 = 1 + rand() % (6 - 1);
    printf("\n\n");
    dados(nd1);
    dados(nd2);
    printf("\n\n");
    switch (toupper(mdj)) {
        case 'A': {
            gns = lna_pase(nd1, nd1, apst);
            if (gns > 1){
                jugador->dinero += gns;
                jugador->puntuacion += 5;
                printf("%cGanaste!  Tu ganancia fue de +$%d", 173, gns);
            }
            break;
        }

        case 'C': {
            gns = campo(nd1, nd2, apst);
            if (gns > 1){
                jugador->dinero += gns;
                jugador->puntuacion += 2.5;
                printf("%cGanaste! Tu ganancia fue de +$%d", 173, gns);
            }
            break;
        }

        case 'S': {
            gns = grnss(nd1, nd2, apst);
            if (gns > 1){
                printf("%cGanaste! Tu ganancia fue de +$%d", 173, gns);
                jugador->dinero += gns;
                jugador->puntuacion += 15;
            }
            break;
        }

        case 'O': {
            gns = grnoo(nd1, nd2, apst);
            if (gns > 1){
                jugador->dinero += gns;
                jugador->puntuacion += 15;
                printf("%cGanaste! Tu ganancia fue de +$%d", 173, gns);
            }
            break;
        }
        default: {
            printf("\n%c Error. Digita nuevamente. %c",176,176);
        }

    }

    return jugador;
}



int lna_pase(int d1, int d2, int apst) {
    int gn = apst * 10;
    if (d1 + d2 == 7) {
        return gn;
    } else if (d1 +d2 == 11) {
        return gn;
    } else
        printf("%cPerdiste! Has perdido -$%d",173,apst);
    return -1 * apst;
}

int campo(int d1, int d2, int apst){
    int i;

    if(d1 +d2 == 2 || d1 + d2 == 12)
    {
        return apst * 10;
    }
    else
    {
        for (i = 5; i < 8; i++) {
            if ( d1 + d2 == i){
                printf("%cPerdiste! Has perdido -$%d",173,apst);
                return apst * -1;
            }
        }
        return apst * 5;
    }
}

int grnss(int d1, int d2, int apst){

    if (d1 + d2 == 6)
    {
        return apst * 25;
    }

    printf("%cPerdiste! Has perdido -$%d",173,apst);
    return apst * -1;
}

int grnoo(int d1, int d2, int apst) {

    if ( d1 +d2 == 8)
    {
        return apst * 25;
    }
    printf("%cPerdiste! Has perdido -$%d",173,apst);
    return apst * -1;
}

