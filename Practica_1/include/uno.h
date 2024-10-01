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
 * @file uno.h: declaración de la clase Uno
 *
 */

#pragma once

#include "cero.h"
#include "fpr.h"
#include "sucesor.h"

class Uno : public FPR {
 public:
  Uno();
  int calcular(int valor_x) override;
};
