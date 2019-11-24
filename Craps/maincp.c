//
// Created by Bryan on 10/11/2019.
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "fcraps.h"
#include <ctype.h>

int main() {
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

