
# PRÁCTICA 1: Implementación de Funciones Primitivas Recursivas

Este proyecto es parte de la asignatura Complejidad Computacional en el 4º curso de Ingeniería Informática de la Universidad de La Laguna. El código implementa y utiliza Funciones Primitivas Recursivas (FPR) como Cero, Sucesor, Proyección, Suma, Producto, y Potencia, en un programa cliente que calcula la potencia de un número usando la definición recursiva.


## Estructura del Proyecto

El proyecto está organizado en las siguientes carpetas:

bin/           # Ejecutable final del proyecto
include/       # Archivos de cabecera (.h) con las declaraciones de clases
objects/       # Archivos objeto (.o) generados durante la compilación
src/           # Archivos fuente (.cc) con las definiciones de clases
Makefile       # Script para automatizar la compilación del proyecto

## Compilación

El proyecto utiliza un archivo Makefile para facilitar la compilación.

 - Compilar proyecto completo:
    make
 - Eliminar archivos intermedios (objetos) y el ejecutable:
    make clean




## Modo de ejecución
Para ejecutar el programa, compila el proyecto y luego ejecuta el archivo resultante desde la carpeta bin:
 - ./bin/practica_1

El programa solicitará dos valores, x y y, para calcular la función potencia x^y usando las funciones primitivas recursivas. El resultado se mostrará en pantalla junto con el número de llamadas a funciones realizadas.

## Ejemplo de ejecución
$ ./bin/practica_1
Para calcular la función potencia(x,y), introduzca el valor x e y
2 3
Resultado: 8
Número de llamadas a funciones: 12

## Autor
Roberto Báez Herrera
Estudiante de Ingeniería Informática en la Universidad de La Laguna.