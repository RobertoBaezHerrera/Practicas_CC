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
 * @file proyeccion.cc: definición de la clase Proyeccion
 *
 */

#include "proyeccion.h"

Proyeccion::Proyeccion() = default;

Proyeccion::Proyeccion(int tamano, int indice) : tamano_(tamano), indice_(indice) { }

int Proyeccion::calcular(std::vector<int> valores) {
  FPR::IncrementarContador();
  if (indice_ <= 0) {
    std::cerr << "Error: no se puede hacer la proyección de un valor de índice igual o menor a 0\n";
    exit(EXIT_FAILURE);
  }
  return valores[indice_ - 1];
}
