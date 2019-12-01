//
// Created by diego on 1/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

JUGADOR* anadir(JUGADOR* cabeza,char *nombre,int dinero,int punt)
{
    JUGADOR *jugador;
    jugador = malloc(sizeof(JUGADOR));
    jugador->nombre = malloc(strlen(nombre) * sizeof(char));
    strcpy(jugador->nombre,nombre);
    jugador->dinero = dinero;
    jugador->puntuacion = punt;
    jugador->siguiente = cabeza;

    return jugador;
}

JUGADOR* anadirnuevo(JUGADOR* cabeza,char *nombre)
{
    JUGADOR *jugador;
    jugador = malloc(sizeof(JUGADOR));
    jugador->nombre = malloc(strlen(nombre) * sizeof(char));
    strcpy(jugador->nombre,nombre);
    jugador->dinero = 1000;
    jugador->puntuacion = 0;
    jugador->siguiente = cabeza;

    return jugador;
}

JUGADOR* busqueda(JUGADOR *cabeza,char *destino)
{
    JUGADOR *indice;
    for (indice = cabeza; indice != NULL; indice = indice->siguiente)
    {
        if (stricmp(destino,indice->nombre) == 0)
        {
            return indice;
        }
    }

    return NULL;
}

JUGADOR* jugador(JUGADOR *jugadores)
{
    char *nombre = malloc(sizeof(char));
    gets(nombre);
    JUGADOR* p = jugadores;
    p = busqueda(p,nombre);

    if(p != NULL)
    {
        return p;
    }
    else
    {
        jugadores = anadirnuevo(jugadores,nombre);
        jugadores = jugadores;
        return jugadores;
    }
}


FILE* escribir(JUGADOR *p)
{
    int i = 0;
    FILE *archivo;
    archivo = fopen("Jugadores","wt");

    while(p != NULL)
    {
        fprintf(archivo,"%s\n%d\n%d\n",p->nombre,p->dinero,p->puntuacion);
        p = p->siguiente;
    }

    fclose(archivo);

    return archivo;
}

JUGADOR* leer()
{
    FILE* archivo;
    archivo = fopen("Jugadores","rt");
    char *nombre = malloc(sizeof(char));
    int dinero,puntuacion;
    JUGADOR *p = NULL;

    while(fscanf(archivo,"%s\n%d\n%d\n",nombre,&dinero,&puntuacion) != EOF)
    {
        p = anadir(p,nombre,dinero,puntuacion);
    }

    fclose(archivo);

    if(p == NULL)
    {
        return NULL;
    }

    return p;
}