//
// Created by Bryan on 21/11/2019.
//

#include "jfuncc.h"


int cantidad_acertados(int res[]){
        int c=0;
        for(int i=0; i < 7; i++){
            if (res[i] == i+1){
                c++;
            }
        }
        return c;
}

int res_apost(int result, int apuesta){
    int gns = 0;

    if (result == 4){
        gns = apost * 5;
        printf(" 4 %c%cACIERTOS!! Has ganado %d",173,173,gns);
    }
    if  (result == 5){
        gns = apost * 10;
        printf(" 5 %c%cACIERTOS!! Has ganado %d",173,173,gns);
    }
    if (result == 6){
        gns = apost * 15;
        printf(" 6 %c%cACIERTOS!! Has ganado %d",173,173,gns);
    }
    if (result == 7) {
        gns = apost * 100;
        printf(" 7 %c%cACIERTOS!! Has ganado %d", 173, 173, gns);
    }
}

