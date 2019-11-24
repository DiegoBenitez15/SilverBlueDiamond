//
// Created by diego on 20/11/2019.
//

#ifndef PORTAFOLIO_2_REDDOG_H
#define PORTAFOLIO_2_REDDOG_H

//Funcionamiento

void generarcarta(int *mazo);
void eliminarcarta(int *mazo,int *cmazo,int pos);
int carta(int *mazo,int *carta,int *cmazo,int ccarta);
int RedDog(const int *cartas);
int intervalo(const int *cartas);
int tasadeapuestas(int rd);
void ordenar(int *cartas,int ccartas);

//Estetica

void impcarta(const int *cards,int x);
void imprimir(int *cartas,int ii,int ccartas,int x);
void pantalla(int *cartas,int ii,int ccartas,int x,int rd);
void botones();


#endif //PORTAFOLIO_2_REDDOG_H
