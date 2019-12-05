//
// Created by Bryan on 21/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "../Funciones.h"
#include <time.h>


int Jackpot(){
    srand(time(NULL));
    int jckscrn[7];
    int apost, asrt;
    printf("\n\t\t\tJ   A   C   K       P   O   T \t\t\t\n");
    for (int i  = 0; i < 100; i++) {
        printf("%c",205);
    }
    printf("\n%cCuanto va a apostar?",168);
    scanf("%d", &apost); // El usuario Ingresa la cantidad apostada
    if (apost <= 0) {
        printf("\n%c Error. Digita nuevamente. %c",176,176);
    }
    printf("\n");

    for (int i = 0; i < 7; i++) {
        jckscrn[i] = 1 + rand() % (7 - 1); // se llenan los 7 espacios con numeros random
    }

    imprimir_pantalla(jckscrn); // Se imprime la pantalla
    asrt = cantidad_acertados(jckscrn); // se comprueba la cantidad de aciertos con una funcion
    apost = ganancias(asrt,apost); // se calculan las ganancias con la candidad de aciertos
    return apost;
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

int ganancias(int aciertos, int apuesta){
    int gns;
    if(aciertos >= 4 ){
        gns = res_apost(aciertos,apuesta);
        printf("\n%d %c%cACIERTOS!! Has ganado %d",aciertos,173,173, gns);
        return gns;
    }
    else
    {
        printf("\n\n\tHas Perdido, Vuelve a intentarlo\n\n\t\tPerdiste -$%d ",apuesta);
        return -1 * apuesta;
    }
}
