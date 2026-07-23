
#ifndef UTILIDADES_H
#define UTILIDADES_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpiarConsola(void);

void pausarPrograma(void);

void inicializarAleatorios(void);

int numeroAleatorio(int minimo, int maximo);

void limpiarBuffer(void);

void obtenerFechaHora(char *buffer, size_t tamBuffer);

#endif