//
// Created by diego on 24/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Funciones.h"
int main () {

    int opcion,opcion2;
    char resp='s',resp2 ='s';
    do
    {
        fflush (stdin);
        casinoshow();
        printf("\t\t\t\t\tJugar[1]\n\n\n\t\t\t\t\tPuntuacion[2]\n\n\n\t\t\t\t\tCreditos[3]\n\n\n\t\t\t\t\tSalir[4]\n");
       scanf("%d",&opcion);
        switch (opcion)
        {
            case 1:
                do {
                    system("cls");
                    printf("Juegos!\nBlackJack[1]\nCraps[2]\nJackpot[3]\nRed Hog[4]\nRuleta[5]\n");
                    scanf("%d",&opcion2);
                    switch (opcion2){
                        case 1:{
                            system("cls");
                            BlackJack();
                            break;
                        }
                        case 2: {
                            system("cls");
                            Craps();
                            break;
                        }
                        case 3:{
                            system("cls");
                            Jackpot();
                            break;
                        }
                        case 4:{
                            system("cls");
                            REDDOG();
                            break;
                        }
                        case 5:{
                            system("cls");
                            Ruleta();
                            break;
                        }


                    }
                    fflush (stdin);
                    printf("\n Deseas jugar otro juego? [s][n] \n");
                    scanf("%c",&resp2);

                }while (toupper(resp2)=='S');
                break;
            case 2:{
                system("cls");
                printf("--------------------\n");
                printf("Puntuacion\n");
                printf("--------------------\n");
                break; }
            case 3:{
                system("cls");
                printf("--------------------\n");
                printf("Creditos\n");
                printf("--------------------\n");
                break;}
            case 4:{
                exit(0); }
            default:{
                printf("error"); }
        }
        fflush (stdin);
        printf("\n\nDesea volver al menu principal?[s][n]\n");
        scanf("%c",&resp);
    }while (toupper(resp)=='S');
}




