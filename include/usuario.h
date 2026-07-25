#ifndef USUARIO_H
#define USUARIO_H
#include <stdbool.h>

#define LONGITUD_NOMBRE 50
#define LONGITUD_FECHA  25

typedef enum
{
    FACIL = 1,
    NORMAL,
    DIFICIL

} Dificultad;

typedef struct
{
    char nombre[LONGITUD_NOMBRE];
    int edad;

    int victorias;
    int derrotas;

    int sudokusCompletados;

    int mejorTiempo;

    char ultimaFecha[LONGITUD_FECHA];

    Dificultad dificultadFavorita;

    bool tienePartidaGuardada;

} Usuario;

void inicializarUsuario(Usuario *usuario);

void registrarUsuario(Usuario *usuario);

void mostrarPerfilUsuario(const Usuario *usuario);

void reiniciarEstadisticas(Usuario *usuario);

void agregarVictoria(Usuario *usuario);

void agregarDerrota(Usuario *usuario);

void agregarSudokuCompletado(Usuario *usuario);

void actualizarMejorTiempo(Usuario *usuario, int tiempo);

void actualizarFecha(Usuario *usuario);


void establecerPartidaGuardada(
    Usuario *usuario,
    bool estado
);

/* Devuelve verdadero si el usuario tiene partida */
bool tienePartida(const Usuario *usuario);

#endif