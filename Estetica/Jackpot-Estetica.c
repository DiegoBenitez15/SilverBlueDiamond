//
// Created by diego on 4/12/2019.
//

#include <stdio.h>

void imprimir_pantalla (int pantalla_jackpot[]){
    for (int x = 0; x < 7; x++) {
        printf("|%d|\t", pantalla_jackpot[x]);
    }
}