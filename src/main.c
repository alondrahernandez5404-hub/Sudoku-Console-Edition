#include <stdio.h>
#include <stdlib.h>

#include "../include/menu.h"

int main(void)
{
    int opcion;

    do
    {
        opcion = mostrarMenuPrincipal();

        switch (opcion)
        {
            case 1:
                menuIniciarSesion();
                break;

            case 2:
                menuRegistrarUsuario();
                break;

            case 3:
                printf("\n[Ranking - En desarrollo]\n");
                printf("\nPresione ENTER para continuar...");
                getchar();
                getchar();
                break;

            case 4:
                printf("\n[Historial - En desarrollo]\n");
                printf("\nPresione ENTER para continuar...");
                getchar();
                getchar();
                break;

            case 5:
                mostrarConfiguracion();
                break;

            case 6:
                mostrarCreditos();
                break;

            case 0:
                printf("\nGracias por jugar Sudoku Console Edition.\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
                printf("\nPresione ENTER para continuar...");
                getchar();
                getchar();
                break;
        }

    } while (opcion != 0);

    return EXIT_SUCCESS;
}