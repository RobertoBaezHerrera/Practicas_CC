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
 * @file sucesor.cc: definición de la clase Sucesor
 *
 */

#include "sucesor.h"

Sucesor::Sucesor() = default;

int Sucesor::calcular(int valor_x) {
  FPR::IncrementarContador();
  return valor_x + 1;
}
