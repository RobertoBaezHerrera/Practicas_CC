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
 * @file producto.cc: definición de la clase Producto
 *
 */

#include "producto.h"

Producto::Producto() = default;

int Producto::calcular(std::vector<int> valores) {
  FPR::IncrementarContador();
  if (valores[1] == 0) {
    Cero cero;
    return cero.calcular(valores[0]);
  }
  Suma suma;
  Proyeccion proyeccion31(3, 1);
  Proyeccion proyeccion33(3, 3);
  --valores[1];
  Producto producto;
  std::vector<int> fpr = {valores[0], valores[1], producto.calcular(valores)};
  std::vector<int> combinacion_proyecciones = {proyeccion31.calcular(fpr), proyeccion33.calcular(fpr)};
  return suma.calcular(combinacion_proyecciones);
}
