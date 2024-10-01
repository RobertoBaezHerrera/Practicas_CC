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
