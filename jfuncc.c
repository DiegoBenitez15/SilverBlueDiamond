//
// Created by Bryan on 21/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <time.h>


void Jackpot(){
    srand(time(NULL));
    int jckscrn[7];
    int apost, gns, acrt;
    printf("\t\tBienvenido a JackPot!\n \t     Por favor ingrese su apuesta: ");
    scanf("%d", &apost);
    printf("\n");
    for (int i = 0; i < 7; i++) {
        jckscrn[i] = 1 + rand() % (7 - 1);
    }

    for (int x = 0; x < 7; x++) {
        printf("%d\t", jckscrn[x]);
    }

    acrt = cantidad_acertados(jckscrn);

    if(acrt >= 4 ){
        gns = res_apost(acrt,apost);
        printf(" %d %c%cACIERTOS!! Has ganado %d",acrt,173,173, gns);
    }else printf("\n\tHas Perdido, Vuelve a intentarlo\n\t\tPerdiste -%d ",apost);

}

int cantidad_acertados(int res[]){
    int c=0;
    for(int i=0; i < 7; i++){
        if (res[i] == i+1){
            c++;
        }
    }
    return c;
}

int res_apost(int result, int apost){
    if (result == 4){
        return apost * 5;
    }
    if  (result == 5){
        return apost * 10;
    }
    if (result == 6){
        return apost * 15;
    }
    if (result == 7){
        return apost * 100;
    }
    if (result < 4){
        return 0;
    }
}

