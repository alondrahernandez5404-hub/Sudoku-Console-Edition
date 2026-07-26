#include "../include/utilidades.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpiarConsola(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausarPrograma(void)
{
    printf("\nPresione ENTER para continuar...");

    limpiarBuffer();

    getchar();
}

void limpiarBuffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        /* Vaciar el buffer de entrada */
    }
}

void inicializarAleatorios(void)
{
    srand((unsigned int)time(NULL));
}

int numeroAleatorio(int minimo, int maximo)
{
    return rand() % (maximo - minimo + 1) + minimo;
}

void obtenerFechaHora(char *buffer, size_t tamBuffer)
{
    time_t tiempoActual;
    struct tm *fecha;

    tiempoActual = time(NULL);
    fecha = localtime(&tiempoActual);

    strftime(
        buffer,
        tamBuffer,
        "%d/%m/%Y %H:%M:%S",
        fecha
    );
}