//
// Created by Bryan on 10/11/2019.
//


#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "Funciones.h"
#include <stdio.h>

void Craps()
{
    srand(time(NULL));
    printf("\t\t    Bienvenido a CRAPS!\n");
    char respt, mdj;
    do {
        int apst = 0, nd1 = 0, nd2 = 0, gns = 0;
        printf("\n");
        printf("\tIntroduzca la cantidad que desea apostar:\t");
        scanf("%d", &apst);
        fflush(stdin);
        system("CLS");
        if (apst <= 0) {
            printf("APUESTA ERRONEA");
            exit(0);
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
        printf("\n");
        printf("Desea Continuar en la mesa?  [S] [N]");
        fflush(stdin);
        respt = getc(stdin);
    } while ((respt != 'N') && (respt != 'n'));

    printf("Gracias por Jugar!");
}



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