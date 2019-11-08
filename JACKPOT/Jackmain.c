//
// Created by Bryan on 8/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand (time(NULL));
    int  numrand[7];
    int apost;
    int gns;
    printf("\t\tBienvenido a JackPot!\n \t     Por favor ingrese su apuesta: ");
    scanf("%d", &apost);
    printf("\n");
    for (int i = 0; i < 7; i++){
        numrand[i] =  1 + rand() % (7 - 1);
    }

    for (int x = 0; x < 7; x++){
        if (numrand[x] == 1)
            printf("%c\t", 157);
        if (numrand[x] == 2)
            printf("%c\t", 245);
        if (numrand[x] == 3)
            printf("%c\t", 190);
        if (numrand[x] == 4)
            printf("%c\t", 156);
        if (numrand[x] == 5)
            printf("%c\t", 146);
        if (numrand[x] == 6)
            printf("%c\t", 244);
        if (numrand[x] == 7)
            printf("%d\t", 7);
        ;
    }

    if ((numrand[0] == 1) && (numrand[1] == 2) && (numrand[2] == 3) && (numrand[3] == 4)){
        gns = apost * 5;
        printf(" 4 %c%cACIERTOS!! Haz ganado %d",173,173,gns);
    }
    if ((numrand[0] == 1) && (numrand[1] == 2) && (numrand[2] == 3) && (numrand[3] == 4)  && (numrand[4] == 5)){
        gns = apost * 10;
        printf(" 5 %c%cACIERTOS!! Haz ganado %d",173,173,gns);
    }
    if ((numrand[0] == 1) && (numrand[1] == 2) && (numrand[2] == 3) && (numrand[3] == 4)  && (numrand[4] == 5) && (numrand[6] == 6)){
        gns = apost * 15;
        printf(" 6 %c%cACIERTOS!! Haz ganado %d",173,173,gns);
    }
    if ((numrand[0] == 1) && (numrand[1] == 2) && (numrand[2] == 3) && (numrand[3] == 4)  && (numrand[4] == 5) && (numrand[5] == 6) && (numrand[6] == 7)) {
        gns = apost * 100;
        printf(" 7 %c%cACIERTOS!! Haz ganado %d", 173, 173, gns);
    }
}
