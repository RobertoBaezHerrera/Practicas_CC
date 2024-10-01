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
 * @file potencia.cc: definición de la clase Potencia
 *
 */

#include "potencia.h"

Potencia::Potencia() = default;

int Potencia::calcular(std::vector<int> valores) {
  FPR::IncrementarContador();
  // Ecuación límite
  if (valores[1] == 0) {
    Uno uno;
    return uno.calcular(valores[0]);
  }
  // Ecuación de recursión
  Producto producto;
  Proyeccion proyeccion31(3, 1);
  Proyeccion proyeccion33(3, 3);
  --valores[1];
  Potencia potencia;
  std::vector<int> fpr = {valores[0], valores[1], potencia.calcular(valores)};
  std::vector<int> combinacion_proyecciones = {proyeccion31.calcular(fpr),
                                               proyeccion33.calcular(fpr)};
  return producto.calcular(combinacion_proyecciones);
}
