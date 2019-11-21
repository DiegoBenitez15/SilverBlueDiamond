//
// Created by Bryan on 8/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "jfuncc.h"
#include <time.h>


int main() {
    srand (time(NULL));
    int  jckscrn[7];
    int apost, gns, acrt;
    printf("\t\tBienvenido a JackPot!\n \t     Por favor ingrese su apuesta: ");
    scanf("%d", &apost);
    printf("\n");
    for (int i = 0; i < 7; i++){
        jckscrn[i] = 1 + rand() % (7 - 1);
    }

    for (int x = 0; x < 7; x++){
        printf("%d\t", jckscrn[x]);
    }

    acrt = cantidad_acertados(jckscrn);
    res_apost(acrt,apost);
}
