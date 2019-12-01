//
// Created by diego on 24/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

#include <stdio.h>
typedef struct jugador
{
    char *nombre;
    int dinero;
    int puntuacion;
    struct jugador *siguiente;
}JUGADOR;
//Jugador
JUGADOR* leer();
FILE* escribir(JUGADOR *p);
JUGADOR* jugador(JUGADOR *jugadores);
//Casino
void casinoshow();
void puerta();
void creditos();
//Auxiliar

void gotoxy(int x,int y);

//BlackJack

void BlackJack();
void generar(int *p);
int elimazo(int* mazo,int cmazo,int pos);
int pedircartas(int *mazo,int *cartas,int ccartas,int *cmazo);
int sumando(int *cards,int ii,int is,int suma);
int resultados(int r1,int r2,int suma,int suma2);
int comparar(const int *cards,int suma);
int repartidor(int *cartas,int *mazo,int *cmazo,int *ccarta,int suma);
void imprimirb(int *cartas,int ii,int ccartas,int x ,int y);
void cartaposterior(const int *carta,int x,int y);
void cartainicial(const int *cartas,int x,int y);
void botones2(int x,int y);
void pantallaB(int *cartas,int ccartas,int x,int suma);

//Craps

void Craps();
void dados (int dados);
int lna_pase(int d1, int d2, int apst);
int campo(int d1, int d2, int apst);
int grnss(int d1, int d2, int apst);
int grnoo(int d1, int d2, int apst);

//Red Dogs

void REDDOG();
void generarcarta(int *mazo);
void eliminarcarta(int *mazo,int *cmazo,int pos);
int carta(int *mazo,int *carta,int *cmazo,int ccarta);
int RedDog(const int *cartas);
int intervalo(const int *cartas);
int tasadeapuestas(int rd);
void ordenar(int *cartas,int ccartas);
void impcarta(const int *cards,int x);
void imprimir(int *cartas,int ii,int ccartas,int x);
void pantalla(int *cartas,int ccartas,int x,int rd);
void botones();


//Jackpot
void Jackpot();
int cantidad_acertados(int res[]);
int res_apost(int result, int apost);


//MississipiStud



//Ruleta

char presentacion();
void espera(int segundos);
void Ruleta();

#endif //PORTAFOLIO_2_FUNCIONES_H
