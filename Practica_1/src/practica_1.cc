/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Asignatura: Complejidad Computacional
 * Curso: 4º
 * Práctica 1
 * @author Roberto Báez Herrera
 * Correo: alu0101497013@ull.edu.es
 * @date 03/10/2024
 * @file practica_1.cc: programa cliente.
 *
 */

#include <iostream>

#include "potencia.h"

int main() {
  std::cout
      << "Para calcular la función potencia(x,y), introduzca el valor x e y\n";
  int valor_x, valor_y;
  std::cin >> valor_x >> valor_y;
  // Funciones Primitivas Recursivas
  std::vector<int> valores = {valor_x, valor_y};
  Potencia potencia;
  std::cout << "Resultado: " << potencia.calcular(valores);
  std::cout << "\nNúmero de llamadas a funciones: " << FPR::ObtenerContador() << std::endl;
  return EXIT_SUCCESS;
}