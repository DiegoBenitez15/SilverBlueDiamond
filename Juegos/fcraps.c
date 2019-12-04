//
// Created by Bryan on 10/11/2019.
//


#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "../Funciones.h"
#include <stdio.h>

int Craps()
{
    for(int i=0; i< 85;i++){
        printf("%c",177);
    }
    printf("\n\t\t\tC\tR\tA\tP\tS\n");
    for(int i=0; i< 85;i++){
        printf("%c",177);
    }

    char respt, mdj;

    int apst = 0, nd1 = 0, nd2 = 0, gns = 0;
    printf("\n");
    printf("\tIntroduzca la cantidad que desea apostar:\t");
    scanf("%d", &apst);
    fflush(stdin);
    system("CLS");
    if (apst <= 0) {
        printf("APUESTA ERRONEA");
    }
    printf("\tElija el modo de apuesta que desea utilizar: ");
    printf("\n-Linea de pase [A]\n-Campo[C]\n-Gran Seis[S]\n-Gran Ocho[O]\n");
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
                printf("%cGanaste! Tu ganancia fue de %d", 173, gns);
            }
            break;
        }

        case 'C': {
            gns = campo(nd1, nd2, apst);
            if (gns > 1){
                printf("%cGanaste! Tu ganancia fue de %d", 173, gns);
            }
            break;
        }

        case 'S': {
            gns = grnss(nd1, nd2, apst);
            if (gns > 1){
                printf("%cGanaste! Tu ganancia fue de %d", 173, gns);
            }
            break;
        }

        case 'O': {
            gns = grnoo(nd1, nd2, apst);
            if (gns > 1){
                printf("%cGanaste! Tu ganancia fue de %d", 173, gns);
            }
            break;
        }
        default: {
            printf("OPCION INCORRECTA");
        }

    }

    return gns;
}



int lna_pase(int d1, int d2, int apst) {
    int gn = apst * 10;
    if (d1 + d2 == 7) {
        return gn;
    } else if (d1 +d2 == 11) {
        return gn;
    } else
        printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
    return -1 * apst;
}

int campo(int d1, int d2, int apst){
    int i, gn = apst * 5;
    for (i = 5; i < 8; i++) {
        if ( d1 + d2 > i){
            printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
            return apst * -1;
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
    return apst * -1;
}

int grnoo(int d1, int d2, int apst) {
    int gn = apst * 25;
    if ( d1 +d2 == 8) {
        return gn;
    } else
        printf("%cPerdiste! has perdido -%d Intentalo de nuevo",173,apst);
    return apst * -1;
}
