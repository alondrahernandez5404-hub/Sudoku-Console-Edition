#include "../include/menu.h"

#include <stdio.h>
#include <stdlib.h>

int mostrarMenuPrincipal(void)
{
    int opcion;

    system("cls");

    printf("============================================================\n");
    printf("                SUDOKU CONSOLE EDITION\n");
    printf("============================================================\n\n");

    printf("                 MENU PRINCIPAL\n\n");

    printf("  1. Iniciar sesion\n");
    printf("  2. Registrar usuario\n");
    printf("  3. Ranking\n");
    printf("  4. Historial\n");
    printf("  5. Configuracion\n");
    printf("  6. Creditos\n");
    printf("  0. Salir\n\n");

    printf("============================================================\n");

    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void mostrarCreditos(void)
{
    system("cls");

    printf("============================================================\n");
    printf("                       CREDITOS\n");
    printf("============================================================\n\n");

    printf("Proyecto:\n");
    printf("Sudoku Console Edition\n\n");

    printf("Desarrollado por:\n");
    printf("Alondra Estefania Hernandez Vargas\n\n");

    printf("Lenguaje:\n");
    printf("C (C17)\n\n");

    printf("Compilador:\n");
    printf("GCC\n\n");

    printf("Repositorio:\n");
    printf("GitHub\n\n");

    printf("Presione ENTER para volver...");

    getchar();
    getchar();
}

void mostrarConfiguracion(void)
{
    system("cls");

    printf("============================================================\n");
    printf("                   CONFIGURACION\n");
    printf("============================================================\n\n");

    printf("Esta seccion aun esta en desarrollo.\n\n");

    printf("En futuras versiones sera posible configurar:\n\n");

    printf("- Colores.\n");
    printf("- Sonido.\n");
    printf("- Musica.\n");
    printf("- Tiempo del cronometro.\n");
    printf("- Tema visual.\n");

    printf("\nPresione ENTER para volver...");

    getchar();
    getchar();
}