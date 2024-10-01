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
