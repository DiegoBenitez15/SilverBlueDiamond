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
    int opcion,opcion2;
    JUGADOR *jugadores,*jug;
    char resp='s',resp2 ='s',resp3='s';
    jugadores = leer();
    do{
        system("cls");
        bienvenido();
        jug = jugador(&jugadores);
        if(jug->dinero <= 0)
        {
            printf("\t\t\t\t\t    %cNo tiene fondos!\n\t\t\t\t\t",173);
            system("pause");
        }
    }while(jug->dinero <= 0);

    do
    {
        system("cls");
        fflush (stdin);
        casinoshow();
        printf("\n\n\n\t\t\t\t\tJugar[1]\n\n\n\t\t\t\t\tPuntuacion[2]\n\n\n\t\t\t\t\tCreditos[3]\n\n\n\t\t\t\t\tSalir[4]\n\n\n\t\t\t\tCopyright (C) 2019 SilverDiamondBlue\n");
       scanf("%d",&opcion);
        switch (opcion)
                {
                    case 1: {
                        if(jug->dinero > 0)
                        {
                            do {
                                system("cls");
                                printf("\n");
                                printf("\t\t\t  %c%c%c%c%c%c%c  J   U   E   G   O  S    %c%c%c%c%c%c%c\n",219,219,219,178,177,178,178,178,178,177,178,219,219,219);
                                for (int i = 0; i < 100; i++) {
                                    printf("%c",205);
                                }
                                printf("\n\n\n\t\t\t\t\tBlackJack[1]\n\n\n\t\t\t\t\tCraps[2]\n\n\n\t\t\t\t\tJackpot[3]\n\n\n\t\t\t\t\tRed Hog[4]\n\n\n\t\t\t\t\tRuleta[5]\n");
                                scanf("%d", &opcion2);
                                switch (opcion2) {
                                    case 1: {
                                        instrucciones_bj();
                                        do{
                                            system("cls");
                                            jug = BlackJack(jug);
                                            fflush(stdin);
                                            printf("\n\n%cJugar otra vez? [s][n]",168 );
                                            scanf("%c",&resp3);
                                        }while(toupper(resp3)=='S' && jug->dinero > 0);
                                        break;
                                    }
                                    case 2:
                                    {
                                        instrucciones_craps();
                                        do{
                                            system("cls");
                                            jug = Craps(jug);
                                            fflush(stdin);
                                            printf("\n\n%cJugar otra vez? [s][n]",168 );
                                            scanf("%c",&resp3);
                                        }while(toupper(resp3)=='S' && jug->dinero > 0);
                                        break;
                                    }
                                    case 3: {
                                        instrucciones_jp();
                                        do{
                                            system("cls");
                                            jug = Jackpot(jug);
                                            fflush(stdin);
                                            printf("\n\n%cJugar otra vez? [s][n]",168 );
                                            scanf("%c",&resp3);
                                        }while(toupper(resp3)=='S' && jug->dinero > 0);
                                        break;
                                    }
                                    case 4: {
                                        instrucciones_reddog();
                                        do{
                                            system("cls");
                                            jug = REDDOG(jug);
                                            fflush(stdin);
                                            printf("\n\n%cJugar otra vez? [s][n]",168 );
                                            scanf("%c",&resp3);
                                        }while(toupper(resp3)=='S' && jug->dinero > 0);
                                        break;
                                    }
                                    case 5: {
                                        do{
                                            system("cls");
                                            jug = Ruleta(jug);
                                            fflush(stdin);
                                            printf("\n\n%cJugar otra vez? [s][n]",168 );
                                            scanf("%c",&resp3);
                                        }while(toupper(resp3)=='S' && jug->dinero > 0);
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

                            } while (toupper(resp2) == 'S' && jug->dinero > 0);
                        }
                        else
                        {
                            Perdiste();
                            system("cls");
                        }
                        break;
                    }
                    case 2:{
                        system("cls");
                        printf("\n\t\t%c%c%c%c%c%c%c  P  U  N  T  U  A  C  I  O  N   %c%c%c%c%c%c%c\n",219,219,219,178,177,178,178,178,178,177,178,219,219,219);
                        for(int i =0; i < 80; i++){
                            printf("%c",205);
                        }
                        printf("\n\n");
                        ordenarpuntuaciones(jugadores);
                        printf("\n\n\t\t");
                        system("pause");
                        break; }
                    case 3:{
                        system("cls");
                        printf("\n");
                        printf("\n\t\t%c%c%c%c%c%c%c  C  R  E  D  I  T  O  S   %c%c%c%c%c%c%c\n",219,219,219,178,177,178,178,178,178,177,178,219,219,219);
                        for(int i =0; i < 100; i++){
                            printf("%c",205);
                        }
                        creditos();
                        break;}
                    case 4:{
                        escribir(jugadores);
                        exit(0); }
                    default:{
                        system("cls");
                        printf("%c |ERROR| Opcion no disponible %c\n",176,176);
                        system("pause");
                break; }
        }
    }while (resp == 's');
}




