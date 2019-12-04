//
// Created by diego on 24/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
#include "Funciones.h"



int main () {
    srand(time(NULL));
    int opcion,opcion2;
    JUGADOR *jugadores,*jug;
    char resp='s',resp2 ='s',resp3='s';
    jugadores = leer();
    bienvenido();
    jug = jugador(&jugadores);

    do
    {
        system("cls");
        fflush (stdin);
        casinoshow();
        printf("\n\n\n\t\t\t\t\tJugar[1]\n\n\n\t\t\t\t      Puntuacion[2]\n\n\n\t\t\t\t       Creditos[3]\n\n\n\t\t\t\t\tSalir[4]\n\n\n\t\t\t    Copyright (c) 2019 SilverDiamondBlue\n");
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
                                jug->dinero += Craps();
                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 3: {
                            do{
                                system("cls");
                                jug->dinero += Jackpot();
                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 4: {
                            do{
                                system("cls");
                                jug->dinero += REDDOG();
                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        case 5: {
                            do{
                                system("cls");
                                jug->dinero = Ruleta();

                                fflush(stdin);
                                printf("\n\n%cJugar otra vez? [s][n]",168 );
                                scanf("%c",&resp3);
                            }while(toupper(resp3)=='S');
                            break;
                        }
                        default:
                            system("cls");
                            printf("|ERROR| Opcion no disponible\n");
                            system("pause");
                            break;
                    }
                    system("cls");
                    fflush(stdin);
                    printf("Deseas jugar otro juego? [s][n] \n");
                    scanf("%c", &resp2);

                } while (toupper(resp2) == 'S');
                break;
            }
            case 2:{
                system("cls");
                printf("-----------------------------------------------\n");
                printf("\t\tPuntuacion\n");
                printf("-----------------------------------------------\n");
                ordenarpuntuaciones(jugadores);
                printf("\n\n\t");
                system("pause");
                break; }
            case 3:{
                system("cls");
                printf("--------------------------------------------------------------------------------\n");
                printf("\t\t\t\tCreditos\n");
                printf("--------------------------------------------------------------------------------\n");
                creditos();
                break;}
            case 4:{
                escribir(jugadores);
                exit(0); }
            default:{
                system("cls");
                printf("|ERROR| Opcion no disponible\n");
                system("pause");
                break; }
        }
    }while (resp == 's');
}




