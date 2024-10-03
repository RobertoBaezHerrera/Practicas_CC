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
 * @file fpr.cc: definición de la clase padre FPR
 *
 */

#include "fpr.h"

int FPR::contador_llamadas = 0;

void FPR::IncrementarContador() { contador_llamadas++; }

int FPR::ObtenerContador() { return contador_llamadas; }

int FPR::calcular(std::vector<int> valores) {
  std::cout << "Esta función es virtual y no se debe ejecutar\n";
  exit(EXIT_SUCCESS);
}

int FPR::calcular(int valor_x) {
  std::cout << "Esta función es virtual y no se debe ejecutar\n";
  exit(EXIT_SUCCESS);
}
