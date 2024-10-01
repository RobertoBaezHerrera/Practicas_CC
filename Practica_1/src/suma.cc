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
 * @file suma.cc: definición de la clase Suma
 *
 */

#include "suma.h"

Suma::Suma() = default;

int Suma::calcular(std::vector<int> valores) {
  FPR::IncrementarContador();
  // Ecuación base
  if (valores[1] == 0) {
    Proyeccion proyeccion(1, 1);
    return proyeccion.calcular({valores[0]});
  }
  // Ecuación de recursión
  Suma suma;
  --valores[1];
  Sucesor sucesor;
  Proyeccion proyeccion(3, 3);
  return sucesor.calcular(proyeccion.calcular({valores[0], valores[1], suma.calcular(valores)}));
}
