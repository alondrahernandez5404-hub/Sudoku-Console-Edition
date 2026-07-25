#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <stdbool.h>

#include "usuario.h"
#define ARCHIVO_USUARIOS       "data/usuarios.dat"
#define ARCHIVO_RANKING        "data/ranking.dat"
#define ARCHIVO_HISTORIAL      "data/historial.dat"
#define CARPETA_PARTIDAS       "data/partidas/"

bool existeArchivoUsuarios(void);

bool crearArchivoUsuarios(void);

bool guardarUsuario(const Usuario *usuario);

bool buscarUsuario(
    const char *nombre,
    Usuario *usuario
);

bool actualizarUsuario(
    const Usuario *usuario
);

bool eliminarUsuario(
    const char *nombre
);

int contarUsuarios(void);

void mostrarUsuarios(void);

bool guardarPartida(
    const Usuario *usuario,
    const void *partida,
    size_t tamano
);

bool cargarPartida(
    const Usuario *usuario,
    void *partida,
    size_t tamano
);

bool eliminarPartida(
    const Usuario *usuario
);

bool existePartida(
    const Usuario *usuario
);

bool guardarConfiguracion(void);

bool cargarConfiguracion(void);

bool guardarRanking(void);

bool cargarRanking(void);

bool guardarHistorial(void);

bool cargarHistorial(void);

#endif