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
    printf("Bienvenido a CRAPS!\n");
    char respt, mdj;
    do {
        int apst = 0, nd1 = 0, nd2 = 0, tapst = 0;
        printf("Elija el modo de apuesta que desea utilizar: ");
        printf("\n-Linea de pase [A]\n-Campo[C]\n-Gran Seis[S]\n-Gran Ocho[O]\n");
        mdj = getchar();
        printf("\n");
        printf("Introduzca la cantidad que desea apostar:\t");
        scanf("%d", &apst);
        if (apst <= 0) {
            printf("APUESTA ERRONEA");
            exit(0);
        }
        nd1 = 1 + rand() % (6 - 1);
        nd2 = 1 + rand() % (6 - 1);

        switch (toupper(mdj)) {
            case 'A': {
                tapst = lna_pase(nd1, nd1, apst);
                break;
            }

            case 'C': {
                tapst = campo(nd1, nd2, apst);
                break;
            }

            case 'S': {
                tapst = grnss(nd1, nd2, apst);
                break;
            }

            case 'O': {
                tapst = grnoo(nd1, nd2, apst);
                break;
            }
            default: {
                printf("OPCION INCORRECTA");
            }

        }
        printf("\n");
        printf("Desea Continuar en la mesa?  [S] [N]");
        fflush(stdin);
        respt = getchar();
    } while ((respt != 'N') && (respt != 'n'));

    printf("Gracias por Jugar!");
}

