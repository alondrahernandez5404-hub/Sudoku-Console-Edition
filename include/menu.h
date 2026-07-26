#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include "usuario.h"

int mostrarMenuPrincipal(void);

void menuRegistrarUsuario(void);

void menuIniciarSesion(void);

void mostrarConfiguracion(void);

void mostrarCreditos(void);

Usuario *obtenerUsuarioActual(void);

void establecerUsuarioActual(Usuario *usuario);

int haySesionIniciada(void);

#endif