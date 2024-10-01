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
 * @file uno.cc: definición de la clase Uno
 *
 */

#include "uno.h"

Uno::Uno() = default;

int Uno::calcular(int valor_x) {
  FPR::IncrementarContador();
  Cero cero;
  Sucesor sucesor;
  return sucesor.calcular(cero.calcular(valor_x));
}
