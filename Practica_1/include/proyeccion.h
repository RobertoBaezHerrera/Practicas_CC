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
 * @file proyeccion.h: declaración de la clase Proyeccion
 *
 */

#pragma once

#include <vector>

#include "fpr.h"

class Proyeccion : public FPR {
 public:
  Proyeccion();
  Proyeccion(int tamano, int indice);
  int calcular(std::vector<int> valores) override;

 private:
  int tamano_, indice_;
};
