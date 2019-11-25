//
// Created by diego on 24/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
int main () {

    int opcion,opcion2, dinero = 0;
    do {
        printf("Casino!\nEliga una opcion:\nJugar[1]\nPuntuacion[2]\nCreditos[3]\nSalir[4]\n");
        scanf("%d",&opcion);
        switch (opcion) {
            case 1:

                do {
                    system("cls");
                    printf("Juegos!\nBlackJack[1]\nRed Hog[2]\nMissisipii[3]\nRuleta[4]\nRegresar al menu inicial[5]\n");
                    scanf("%d", &opcion2);
                    switch (opcion2) {
                        case 1:
                            printf("Juego de jackpot\n");
                                            BlackJack();
                                            break;
                        case 2:
                            printf("Juego de Red Hog\n");
                                            REDDOG();
                                            break;
                        case 3:
                            printf("Juego de Missisipi\n");

                                            break;
                        case 4:
                            printf("Juego de Ruleta\n");
                                            Ruleta();
                                            break;
                        case 5: break;
                    }
                }while (opcion2 != 5 );

                break;

            case 2:
                printf("Puntuacion\n");
                break;

            case 3:
                printf("Creditos\n");
                break;

            case 4:
                break;

        }
    }while (opcion != 4 );

    return 0;


}