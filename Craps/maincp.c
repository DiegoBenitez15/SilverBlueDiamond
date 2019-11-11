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
    char respt;
    int apst = 0, nd1 = 0, nd2 = 0, tapst = 0;
    char mdj;
    printf("Elija el modo de apuesta que desea utilizar: ");
    printf("\n-Linea de pase [A]\n-Campo[C]\n-Gran Seis[S]\n-Gran Ocho[O]\n");
    mdj = getchar();
    printf("\n");
    printf("Introduzca la cantidad que desea apostar:  ");
    scanf("%d", &apst);
    if (apst <= 0) {
        printf("APUESTA ERRONEA");
        exit(0);
    }
    nd1 = 1 + rand() % (6 - 1);
    nd2 = 1 + rand() % (6 - 1);

    switch (toupper(mdj))
    {
        case 'A':
            {
                tapst = lna_pase(nd1, nd1, apst);
                break;
            }

        case mdj = 'C':
            {
                tapst = campo(nd1, nd2, apst);
                break;
            }

        case mdj = 'S':
            {
                tapst = grnss(nd1,nd2,apst);
                break;
            }

        case mdj = 'O':
            {
                tapst = grnoo(nd1,nd2,apst);
                break:
            }
        default:
        {
            printf("OPCION INCORRECTA");
        }

    }
    printf("\n");
    printf("%cQuieres volver a jugar?\n",168);
    fflush(stdin);
    respt = getchar();
}

