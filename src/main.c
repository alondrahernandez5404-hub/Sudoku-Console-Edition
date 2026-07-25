
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
                printf("\n[Iniciar sesion - En desarrollo]\n");
                break;

            case 2:
                printf("\n[Registrar usuario - En desarrollo]\n");
                break;

            case 3:
                printf("\n[Ranking - En desarrollo]\n");
                break;

            case 4:
                printf("\n[Historial - En desarrollo]\n");
                break;

            case 5:
                printf("\n[Configuracion - En desarrollo]\n");
                break;

            case 6:
                printf("\n[Creditos - En desarrollo]\n");
                break;

            case 0:
                printf("\nGracias por jugar Sudoku Console Edition.\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
                break;
        }

    } while (opcion != 0);

    return EXIT_SUCCESS;
}