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
 * @file cero.h: declaración de la clase Cero
 *
 */

#pragma once

#include "fpr.h"

class Cero : public FPR {
 public:
  Cero();
  int calcular(int valor_x) override;
};
