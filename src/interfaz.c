
#include "../include/interfaz.h"
#include "../include/utilidades.h"

#include <stdio.h>
#include <string.h>

void dibujarTitulo(void)
{
    dibujarLinea();

    centrarTexto("SUDOKU CONSOLE EDITION");

    dibujarLinea();

    printf("\n");
}

void dibujarLinea(void)
{
    printf("============================================================\n");
}

void limpiarPantalla(void)
{
    limpiarConsola();
}

void esperarEnter(void)
{
    printf("\nPresione ENTER para continuar...");

    while (getchar() != '\n');

    getchar();
}

void centrarTexto(const char *texto)
{
    int anchoConsola = 60;
    int longitud = (int)strlen(texto);

    int espacios = (anchoConsola - longitud) / 2;

    if (espacios < 0)
        espacios = 0;

    for (int i = 0; i < espacios; i++)
    {
        printf(" ");
    }

    printf("%s\n", texto);
}

void mostrarError(const char *mensaje)
{
    printf("\n[ERROR] %s\n", mensaje);
}

void mostrarInformacion(const char *mensaje)
{
    printf("\n[INFO] %s\n", mensaje);
}