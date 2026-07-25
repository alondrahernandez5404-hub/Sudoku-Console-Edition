
#include "../include/archivo.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool existeArchivoUsuarios(void)
{
    FILE *archivo;

    archivo = fopen(ARCHIVO_USUARIOS, "rb");

    if (archivo == NULL)
    {
        return false;
    }

    fclose(archivo);

    return true;
}

bool crearArchivoUsuarios(void)
{
    FILE *archivo;

    archivo = fopen(ARCHIVO_USUARIOS, "ab");

    if (archivo == NULL)
    {
        return false;
    }

    fclose(archivo);

    return true;
}

bool guardarUsuario(const Usuario *usuario)
{
    FILE *archivo;

    archivo = fopen(ARCHIVO_USUARIOS, "ab");

    if (archivo == NULL)
    {
        return false;
    }

    fwrite(usuario, sizeof(Usuario), 1, archivo);

    fclose(archivo);

    return true;
}

bool buscarUsuario(const char *nombre, Usuario *usuario)
{
    FILE *archivo;

    Usuario temporal;

    archivo = fopen(ARCHIVO_USUARIOS, "rb");

    if (archivo == NULL)
    {
        return false;
    }

    while (fread(&temporal, sizeof(Usuario), 1, archivo) == 1)
    {
        if (strcmp(nombre, temporal.nombre) == 0)
        {
            *usuario = temporal;

            fclose(archivo);

            return true;
        }
    }

    fclose(archivo);

    return false;
}

bool actualizarUsuario(const Usuario *usuario)
{
    FILE *archivo;

    Usuario temporal;

    long posicion = 0;

    archivo = fopen(ARCHIVO_USUARIOS, "rb+");

    if (archivo == NULL)
    {
        return false;
    }

    while (fread(&temporal, sizeof(Usuario), 1, archivo) == 1)
    {
        if (strcmp(usuario->nombre, temporal.nombre) == 0)
        {
            fseek(archivo, posicion, SEEK_SET);

            fwrite(usuario, sizeof(Usuario), 1, archivo);

            fclose(archivo);

            return true;
        }

        posicion += sizeof(Usuario);
    }

    fclose(archivo);

    return false;
}

bool eliminarUsuario(const char *nombre)
{
    FILE *original;
    FILE *temporal;

    Usuario usuario;

    bool eliminado = false;

    original = fopen(ARCHIVO_USUARIOS, "rb");

    if (original == NULL)
    {
        return false;
    }

    temporal = fopen("data/temp.dat", "wb");

    if (temporal == NULL)
    {
        fclose(original);
        return false;
    }

    while (fread(&usuario, sizeof(Usuario), 1, original) == 1)
    {
        if (strcmp(nombre, usuario.nombre) != 0)
        {
            fwrite(&usuario, sizeof(Usuario), 1, temporal);
        }
        else
        {
            eliminado = true;
        }
    }

    fclose(original);
    fclose(temporal);

    remove(ARCHIVO_USUARIOS);

    rename("data/temp.dat", ARCHIVO_USUARIOS);

    return eliminado;
}

int contarUsuarios(void)
{
    FILE *archivo;

    Usuario usuario;

    int contador = 0;

    archivo = fopen(ARCHIVO_USUARIOS, "rb");

    if (archivo == NULL)
    {
        return 0;
    }

    while (fread(&usuario, sizeof(Usuario), 1, archivo) == 1)
    {
        contador++;
    }

    fclose(archivo);

    return contador;
}

void mostrarUsuarios(void)
{
    FILE *archivo;

    Usuario usuario;

    archivo = fopen(ARCHIVO_USUARIOS, "rb");

    if (archivo == NULL)
    {
        printf("\nNo existen usuarios registrados.\n");

        return;
    }

    printf("\n=========== USUARIOS ===========\n\n");

    while (fread(&usuario, sizeof(Usuario), 1, archivo) == 1)
    {
        printf("%s\n", usuario.nombre);
    }

    fclose(archivo);
}

bool guardarPartida(const Usuario *usuario,
                    const void *partida,
                    size_t tamano)
{
    (void)usuario;
    (void)partida;
    (void)tamano;

    return false;
}

bool cargarPartida(const Usuario *usuario,
                   void *partida,
                   size_t tamano)
{
    (void)usuario;
    (void)partida;
    (void)tamano;

    return false;
}

bool eliminarPartida(const Usuario *usuario)
{
    (void)usuario;

    return false;
}

bool existePartida(const Usuario *usuario)
{
    (void)usuario;

    return false;
}

bool guardarConfiguracion(void)
{
    return false;
}

bool cargarConfiguracion(void)
{
    return false;
}

bool guardarRanking(void)
{
    return false;
}

bool cargarRanking(void)
{
    return false;
}

bool guardarHistorial(void)
{
    return false;
}

bool cargarHistorial(void)
{
    return false;
}