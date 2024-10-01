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
 * @file fpr.h: declaración de la clase padre FPR
 *
 */

#pragma once

#include <iostream>
#include <vector>

// Funciones Primitivas Recursivas
class FPR {
 protected:
  static int contador_llamadas;

 public:
  virtual int calcular(std::vector<int> valores);
  virtual int calcular(int valor_x);

  // Métodos para el contador de llamadas a funciones
  static void IncrementarContador();
  static int ObtenerContador();
};
