Documento de Diseño del Proyecto (DDP)

Proyecto: Sudoku Console Edition
Autor: Alondra Estefania Hernandez Vargas
Lenguaje de programación: C (C17)
Aplicacion: VS Code
Lenguaje: C
Compiladores soportados: GCC
Repositorio: GitHub
Estado: En diseño

Índice
Objetivo del proyecto
Requisitos funcionales
Requisitos no funcionales
Organización del proyecto
Diseño de archivos de datos
Diseño de estructuras
Diseño del tablero
Controles
Colores
Animaciones
Algoritmos
Diagramas de flujo

Capítulo 1. Objetivo del proyecto
Descripción

Desarrollar un videojuego de Sudoku que funcione en consola, con una interfaz interactiva, sistema de usuarios, estadísticas, historial, ranking, guardado automático de partidas y generación aleatoria de tableros.

Objetivos
Practicar programación modular.
Implementar estructuras de datos.
Manejar archivos binarios.
Utilizar matrices bidimensionales.
Implementar algoritmos de generación y validación.
Crear una interfaz atractiva en consola.
Aprender organización de proyectos grandes en C.

Capítulo 2. Requisitos Funcionales
Sistema de usuarios

RF-01 Registrar usuario.

RF-02 Guardar usuario permanentemente.

RF-03 Iniciar sesión con un usuario existente.

RF-04 Mostrar nombre del jugador.

RF-05 Mostrar edad.

RF-06 Mostrar estadísticas personales.

RF-07 Mostrar mejor tiempo.

RF-08 Mostrar última fecha en la que jugo.

Sistema de partidas

RF-09 Crear una partida nueva.

RF-10 Continuar una partida guardada automáticamente.

RF-11 Guardar automáticamente al salir.

RF-12 Eliminar la partida guardada al ganar o perder.

Sistema Sudoku

RF-13 Generar Sudokus aleatorios.

RF-14 Tres dificultades:

Fácil
Normal
Difícil

RF-15 Mostrar tablero 9×9.

RF-16 Mostrar filas numeradas del 1 al 9.

RF-17 Mostrar columnas con letras A-I.

RF-18 Resaltar el bloque 3×3 donde está el cursor.

RF-19 Resaltar la fila activa.

RF-20 Resaltar la columna activa.

RF-21 Resaltar la casilla seleccionada.

RF-22 Permitir mover el cursor con flechas.

RF-23 Permitir colocar números del 1 al 9.

RF-24 Detectar teclas inválidas.

RF-25 Impedir modificar números originales del Sudoku.

RF-26 Permitir terminar con ENTER.

RF-27 Permitir salir con la tecla F.

RF-28 Permitir deshacer el último movimiento con la tecla R.

Tiempo

RF-29 Cronómetro de 10 minutos.

RF-30 Mostrar tiempo restante.

RF-31 Derrota automática al agotarse el tiempo.

Validación

RF-32 Validar el Sudoku al finalizar.

RF-33 Detectar errores.

RF-34 Mostrar únicamente las filas y columnas relacionadas con los errores.

RF-35 Mostrar coordenadas de los errores.

Estadísticas

RF-36 Registrar victorias.

RF-37 Registrar derrotas.

RF-38 Registrar mejor tiempo.

RF-39 Registrar Sudokus completados.

Ranking

RF-40 Mostrar Top 10 jugadores.

RF-41 Ordenar por victorias.

Historial

RF-42 Guardar todas las partidas.

RF-43 Mostrar historial.

Sonido

RF-44 Reproducir sonido al ganar.

RF-45 Reproducir sonido al perder.

Animaciones

RF-46 Animación inicial.

RF-47 Animación del ranking.

RF-48 Animación de victoria.

RF-49 Animación de derrota.

RF-50 Animación de carga.

Capítulo 3. Requisitos No Funcionales
Compatible con Linux.
Compatible con Windows.
Código completamente modular.
Un archivo .c por módulo.
Un archivo .h por módulo.
Compilación mediante GCC.
Uso de Git durante todo el desarrollo.
Uso de Makefile.
Comentarios claros y consistentes.
Código organizado por responsabilidad.

Capítulo 4. Organización del proyecto
Sudoku/
│
├── src/
├── include/
├── data/
├── docs/
├── obj/
├── bin/
├── .gitignore
├── README.md
└── Makefile

Capítulo 5. Diseño de archivos de datos
usuarios.dat
Información de cada usuario.

Campos previstos:

Nombre
Edad
Victorias
Derrotas
Mejor tiempo
Sudokus completados
Última fecha en la que se metio a jugar
Dificultad mas elegida
Estado de partida guardada

ranking.dat
Ranking general.

historial.dat
Historial completo de partidas.

partidas/
Una partida guardada por usuario.

Capítulo 6. Diseño de estructuras
Usuario
Información personal y estadísticas.

Partida
Estado completo de una partida.

Movimiento
Información necesaria para deshacer el último movimiento.

Ranking
Información utilizada para ordenar jugadores.

Historial
Información de partidas finalizadas.

Capítulo 7. Diseño del tablero
Características:

Tablero 9×9.
Dividido visualmente en bloques de 3×3.
Letras A-I en columnas.
Números 1-9 en filas.
Cursor movido con flechas.
Bloque activo resaltado.
Fila activa resaltada.
Columna activa resaltada.
Casilla activa resaltada.

Capítulo 8. Controles
Tecla	Acción
↑	Arriba
↓	Abajo
←	Izquierda
→	Derecha
1-9	Colocar número
ENTER	Finalizar Sudoku
R	Deshacer último movimiento
F	Salir de la partida

Capítulo 9. Colores
Elemento	  Color
Cursor	          Rosa fucsia
Bloque activo	  Rosa claro
Fila activa	  Azul claro
Columna activa	  Azul claro
Núm. fijo	  Blanco
Núm. del jugador  Amarillo
Error	          Rojo
Victoria	  Verde
Menús	          Cian

Capítulo 10. Animaciones
Pantalla de inicio.
Presentación del título.
Ranking animado.
Carga de partida.
Victoria.
Derrota.
Guardado.
Salida del programa.

Capítulo 11. Algoritmos
Se implementarán algoritmos para:

Generación aleatoria de Sudokus.
Eliminación de casillas según dificultad.
Validación de tablero.
Guardado de usuarios.
Guardado de partidas.
Cálculo de ranking.
Registro de historial.

Capítulo 12. Diagramas de flujo
Se documentarán los diagramas principales de:

Inicio del programa.
Registro.
Inicio de sesión.
Menú principal.
Juego.
Guardado.
Validación.
Ranking.

ORGANIZACION COMPLETA: 
Sudoku/
│
├── src/
│   ├── main.c
│   ├── menu.c
│   ├── usuario.c
│   ├── archivo.c
│   ├── sudoku.c
│   ├── generador.c
│   ├── cursor.c
│   ├── interfaz.c
│   ├── validacion.c
│   ├── tiempo.c
│   ├── ranking.c
│   ├── historial.c
│   ├── animaciones.c
│   ├── colores.c
│   ├── sonido.c
│   └── utilidades.c
│
├── include/
│   ├── menu.h
│   ├── usuario.h
│   ├── archivo.h
│   ├── sudoku.h
│   ├── generador.h
│   ├── cursor.h
│   ├── interfaz.h
│   ├── validacion.h
│   ├── tiempo.h
│   ├── ranking.h
│   ├── historial.h
│   ├── animaciones.h
│   ├── colores.h
│   ├── sonido.h
│   └── utilidades.h
│
├── data/
│   ├── usuarios.dat
│   ├── ranking.dat
│   ├── historial.dat
│   ├── configuracion.dat
│   └── partidas/
│
├── docs/
│   └── DDP.md
│
├── README.md
└── Makefile

ARQUITECTURA DE MODULOS:
| Archivo         | Responsabilidad                 |
| --------------- | ------------------------------- |
| `main.c`        | Control general del programa    |
| `menu.c`        | Menús del sistema               |
| `usuario.c`     | Gestión de usuarios             |
| `archivo.c`     | Lectura y escritura de archivos |
| `sudoku.c`      | Lógica del tablero              |
| `generador.c`   | Generación de sudokus           |
| `cursor.c`      | Movimiento del cursor           |
| `interfaz.c`    | Dibujado en consola             |
| `validacion.c`  | Verificación del tablero        |
| `tiempo.c`      | Cronómetro                      |
| `ranking.c`     | Ranking de jugadores            |
| `historial.c`   | Historial de partidas           |
| `animaciones.c` | Efectos visuales                |
| `colores.c`     | Manejo de colores               |
| `sonido.c`      | Sonidos del juego               |
| `utilidades.c`  | Funciones auxiliares            |