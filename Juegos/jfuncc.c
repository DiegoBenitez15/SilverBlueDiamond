//
// Created by Bryan on 21/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "../Funciones.h"
#include <time.h>


JUGADOR* Jackpot(JUGADOR* jugador){
    srand(time(NULL));
    int jckscrn[7];
    int apost, asrt;
    printf("\nDinero: $%d\t\t\tJ   A   C   K       P   O   T \t\t\t\n",jugador->dinero);
    for (int i  = 0; i < 100; i++) {
        printf("%c",205);
    }
    do
    {
        system("cls");
        printf("Cuanto es su apuesta: ");
        scanf("%d",&apost);
    }while(apost > 500 || apost > jugador->dinero); // El usuario Ingresa la cantidad apostada
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
    jugador->dinero += apost;
    jugador->puntuacion += 25;

    return  jugador;
}

int cantidad_acertados(int res[]){
    int c = 0,i,j,temp;

    for(j = 0;j < 7;j++)
    {
        temp = 0;
        for(i = j; i < 7; i++)
        {
            if (res[j] == res[i])
             {
                temp++;
             }
         }
        if(temp > c)
        {
            c = temp;
        }
    }
    return c;
}

int res_apost(int result, int apost){
    if (result == 4){
        return apost * 5;
    }
    else if  (result == 5){
        return apost * 10;
    }
    else if (result == 6){
        return apost * 15;
    }
    else if (result == 7){
        return apost * 100;
    }
    else{
        return 0;
    }
}

int ganancias(int aciertos, int apuesta){
    int gns;
    if(aciertos >= 4 ){
        gns = res_apost(aciertos,apuesta);
        printf("\n\n%d %c%c aciertos!!\n\n\t\tHas ganado +$%d",aciertos,173,173, gns);
        return gns;
    }
    else
    {
        printf("\n\n\tHas Perdido\n\n\t\tPerdiste -$%d ",apuesta);
        return -1 * apuesta;
    }
}
