
//
// Created by diego on 5/11/2019.
//

#ifndef PORTAFOLIO_2_BLACKJACK_H
#define PORTAFOLIO_2_BLACKJACK_H

int generar(int *p);
int* barajar(int *baraja);
int elimazo(int* mazo,int cmazo,int pos);
int pedircartas(int *mazo,int *cartas,int ccartas,int *cmazo);
int sumando(int *cards,int ii,int is,int suma);
int resultados(int r1,int r2,int suma,int suma2);
int comparar(int *cards,int suma);
int repartidor(int *cartas,int *mazo,int *cmazo,int *ccarta,int suma);
void ordenar(int *cartas,int ccartas);

#endif //PORTAFOLIO_2_BLACKJACK_H
