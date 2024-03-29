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
    srand(time(NULL));


    char mdj;

    int apst = 0, nd1 = 0, nd2 = 0, gns = 0;
    do
    {
        system("cls");
        printf("\nDinero:  $%d\t\t\t\tC\tR\tA\tP\tS\n",jugador->dinero);
        for(int i=0; i< 85;i++){
            printf("%c",205);
        }
        printf("\n%cCu%cnto va a apostar?",168,160);
        scanf("%d",&apst);
    }while(apst > 500 || apst > jugador->dinero);
    fflush(stdin);
    system("CLS");
    if (apst <= 0) {
        printf("\n%c Error. Digita nuevamente. %c",176,176);
    }
    printf("\t\t\tElija el modo de apuesta que desea utilizar: \n\n");
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
            gns = lna_pase(nd1, nd2, apst);
            if (gns > 1){
                jugador->dinero += gns;
                jugador->puntuacion += 5;
                printf("%cGanaste! Tu ganancia fue de $%d", 173, gns);
            }else
            {
                jugador->dinero += gns;
            }
            break;
        }

        case 'C': {
            gns = campo(nd1, nd2, apst);
            if (gns > 1){
                jugador->dinero += gns;
                jugador->puntuacion += 2.5;
                printf("%cGanaste! Tu ganancia fue de +$%d", 173, gns);
            }else
            {
                jugador->dinero += gns;
            }
            break;
        }

        case 'S': {
            gns = grnss(nd1, nd2, apst);
            if (gns > 1){
                printf("%cGanaste! Tu ganancia fue de +$%d", 173, gns);
                jugador->dinero += gns;
                jugador->puntuacion += 15;
            }else
            {
                jugador->dinero += gns;
            }
            break;
        }

        case 'O': {
            gns = grnoo(nd1, nd2, apst);
            if (gns > 1){
                jugador->dinero += gns;
                jugador->puntuacion += 15;
                printf("%cGanaste! Tu ganancia fue de +$%d", 173, gns);
            } else
            {
                jugador->dinero += gns;
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
    int gn = apst * 5;
    if ((d1 + d2) == 7) {
        return gn;
    } else if ((d1 +d2) == 11) {
        return gn;
    }
    else
    {
        printf("%cPerdiste! has perdido -$%d",173,apst);
        return (-1) * apst;
    }
}

int campo(int d1, int d2, int apst){
    int i;

    if(d1 +d2 == 2 || d1 + d2 == 12)
    {
        return apst * 2;
    }
    else
    {
        for (i = 5; i <= 8; i++) {
            if ( d1 + d2 == i){
                printf("%cPerdiste! has perdido -$%d",173,apst);
                return apst * (-1);
            }
        }
        return apst * 5;
    }
}

int grnss(int d1, int d2, int apst){

    if (d1 + d2 == 6)
    {
        return apst * 7;
    }
    else
    {
        printf("%cPerdiste! has perdido -$%d",173,apst);
        return (-1) * apst;
    }
}

int grnoo(int d1, int d2, int apst) {

    if ( d1 +d2 == 8)
    {
        return apst * 7;
    }
    else
    {
        printf("%cPerdiste! has perdido -$%d",173,apst);
        return (-1) * apst;
    }
}

