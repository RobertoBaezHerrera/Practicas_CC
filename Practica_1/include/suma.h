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
 * @file suma.h: declaración de la clase Suma
 *
 */

#pragma once

#include <vector>

#include "fpr.h"
#include "proyeccion.h"
#include "uno.h"

class Suma : public FPR {
 public:
  Suma();
  int calcular(std::vector<int> valores) override;
};
