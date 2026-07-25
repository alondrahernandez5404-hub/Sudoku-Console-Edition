#include "../include/usuario.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

void inicializarUsuario(Usuario *usuario)
{
    strcpy(usuario->nombre, "");

    usuario->edad = 0;

    usuario->victorias = 0;
    usuario->derrotas = 0;

    usuario->sudokusCompletados = 0;

    usuario->mejorTiempo = 0;

    strcpy(usuario->ultimaFecha, "Sin registro");

    usuario->dificultadFavorita = FACIL;

    usuario->tienePartidaGuardada = false;
}

void registrarUsuario(Usuario *usuario)
{
    printf("\n=====================================\n");
    printf("      REGISTRO DE USUARIO\n");
    printf("=====================================\n\n");

    printf("Nombre: ");
    fgets(usuario->nombre, LONGITUD_NOMBRE, stdin);

    usuario->nombre[strcspn(usuario->nombre, "\n")] = '\0';

    printf("Edad: ");
    scanf("%d", &usuario->edad);

    getchar();

    usuario->victorias = 0;
    usuario->derrotas = 0;
    usuario->sudokusCompletados = 0;
    usuario->mejorTiempo = 0;

    strcpy(usuario->ultimaFecha, "Primer ingreso");

    usuario->dificultadFavorita = FACIL;

    usuario->tienePartidaGuardada = false;
}

void mostrarPerfilUsuario(const Usuario *usuario)
{
    printf("\n=====================================\n");
    printf("           PERFIL DEL USUARIO\n");
    printf("=====================================\n\n");

    printf("Nombre                : %s\n", usuario->nombre);
    printf("Edad                  : %d\n", usuario->edad);

    printf("Victorias             : %d\n",
           usuario->victorias);

    printf("Derrotas              : %d\n",
           usuario->derrotas);

    printf("Sudokus completados   : %d\n",
           usuario->sudokusCompletados);

    printf("Mejor tiempo          : %d segundos\n",
           usuario->mejorTiempo);

    printf("Ultima fecha          : %s\n",
           usuario->ultimaFecha);

    printf("Dificultad favorita   : ");

    switch(usuario->dificultadFavorita)
    {
        case FACIL:
            printf("Facil");
            break;

        case NORMAL:
            printf("Normal");
            break;

        case DIFICIL:
            printf("Dificil");
            break;

        default:
            printf("Sin definir");
            break;
    }

    printf("\n");

    printf("Partida guardada      : ");

    if(usuario->tienePartidaGuardada)
        printf("SI\n");
    else
        printf("NO\n");

    printf("\n");
}

void reiniciarEstadisticas(Usuario *usuario)
{
    usuario->victorias = 0;

    usuario->derrotas = 0;

    usuario->sudokusCompletados = 0;

    usuario->mejorTiempo = 0;

    usuario->dificultadFavorita = FACIL;
}

void agregarVictoria(Usuario *usuario)
{
    usuario->victorias++;
}

void agregarDerrota(Usuario *usuario)
{
    usuario->derrotas++;
}

void agregarSudokuCompletado(Usuario *usuario)
{
    usuario->sudokusCompletados++;
}

void actualizarMejorTiempo(
    Usuario *usuario,
    int tiempo)
{
    if(usuario->mejorTiempo == 0)
    {
        usuario->mejorTiempo = tiempo;
    }
    else if(tiempo < usuario->mejorTiempo)
    {
        usuario->mejorTiempo = tiempo;
    }
}

void actualizarFecha(Usuario *usuario)
{
    time_t fechaActual;

    struct tm *informacion;

    fechaActual = time(NULL);

    informacion = localtime(&fechaActual);

    strftime(usuario->ultimaFecha,
             LONGITUD_FECHA,
             "%d/%m/%Y",
             informacion);
}

void establecerPartidaGuardada(
    Usuario *usuario,
    bool estado)
{
    usuario->tienePartidaGuardada = estado;
}

bool tienePartida(
    const Usuario *usuario)
{
    return usuario->tienePartidaGuardada;
}