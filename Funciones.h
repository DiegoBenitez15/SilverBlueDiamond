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
void bienvenido();
JUGADOR* leer();
void imprimirpunt(JUGADOR * jug);
void ordenarpuntuaciones(JUGADOR * jugador);
FILE* escribir(JUGADOR *p);
JUGADOR* jugador(JUGADOR **jugadores);
//Casino
void casinoshow();
void creditos();
void instrucciones_bj();
void instrucciones_reddog();
void instrucciones_jp();
void instrucciones_craps();
void Perdiste();

//Auxiliar

void gotoxy(int x,int y);

//BlackJack

JUGADOR* BlackJack(JUGADOR * jugador);
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
void pantallaB(int *cartas,int ccartas,int x,int suma,JUGADOR *jugador);
void ordenar2(int *cartas,int ccartas);

//Craps

JUGADOR* Craps(JUGADOR* jugador);
void dados (int dados);
int lna_pase(int d1, int d2, int apst);
int campo(int d1, int d2, int apst);
int grnss(int d1, int d2, int apst);
int grnoo(int d1, int d2, int apst);
void mesacraps();

//Red Dogs

JUGADOR* REDDOG(JUGADOR* jugador);
void generarcarta(int *mazo);
void eliminarcarta(int *mazo,int *cmazo,int pos);
int carta(int *mazo,int *carta,int *cmazo,int ccarta);
int RedDog(const int *cartas);
int intervalo(const int *cartas);
int tasadeapuestas(int rd);
void ordenar(int *cartas,int ccartas);
void impcarta(const int *cards,int x);
void impcartaespada(const int *cards,int x);
void impcartadiamante(const int *cards,int x);
void impcartatrebol(const int *cards,int x);
void impcartacorazones(const int *cards,int x);
void imprimir(int *cartas,int ii,int ccartas,int x);
void pantalla(int *cartas,int ccartas,int x,int rd,JUGADOR * player);
void botones();


//Jackpot
JUGADOR* Jackpot(JUGADOR* jugador);
int cantidad_acertados(int res[]);
int res_apost(int result, int apost);
void imprimir_pantalla (int pantalla_jackpot[]);
int ganancias(int aciertos, int apuesta);

//Ruleta

char presentacion();
void espera(int segundos);
JUGADOR* Ruleta(JUGADOR* jugador);

#endif //PORTAFOLIO_2_FUNCIONES_H
