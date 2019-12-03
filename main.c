//
// Created by diego on 24/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "Funciones.h"



int main () {

    int opcion,opcion2;
    JUGADOR *jugadores,*jug;
    char resp='s',resp2 ='s',resp3='s';

    do
    {
        fflush (stdin);
        bien();
        system("pause");
        jugadores = leer();
        jug = jugador(jugadores);
        casinoshow();
        printf("\n\n\t\t\t\t\tJugar[1]\n\n\n\t\t\t\t\tPuntuacion[2]\n\n\n\t\t\t\t\tCreditos[3]\n\n\n\t\t\t\t\tSalir[4]\n\n\n\t\t\t\tCopyright (c) 2019 SilverDiamondBlue\n");
       scanf("%d",&opcion);
        switch (opcion)
        {
            case 1: {
                do {
                    system("cls");
                    printf("\n\n\n\t\t\t\t\tBlackJack[1]\n\n\n\t\t\t\t\tCraps[2]\n\n\n\t\t\t\t\tJackpot[3]\n\n\n\t\t\t\t\tRed Hog[4]\n\n\n\t\t\t\t\tRuleta[5]\n");
                    scanf("%d", &opcion2);
                    switch (opcion2) {
                        case 1: {
                            do{
                            system("cls");
                            BlackJack();
                            fflush(stdin);
                            printf("\n\n%cJugar otra vez? [s][n]",168 );
                            scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 2: {
                            do{
                                system("cls");
                                Craps();
                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 3: {
                            do{
                                system("cls");
                                Jackpot();
                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 4: {
                            do{
                                system("cls");
                                REDDOG();
                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 5: {
                            do{
                                system("cls");
                                Ruleta();

                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                    }
                    fflush(stdin);
                    printf("\n\n Deseas jugar otro juego? [s][n] \n");
                    scanf("%c", &resp2);

                } while (toupper(resp2) == 'S');
                break;
            }
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
                creditos();
                break;}
            case 4:{
                escribir(jug);
                exit(0); }
            default:{
                printf("Error. Digita nuevamente :/"); }
        }
        fflush (stdin);
        printf("\n\nDesea volver al menu principal?[s][n]\n");
        scanf("%c",&resp);
    }while (toupper(resp)=='S');
}




