#pragma once

#include <vector>

#include "fpr.h"
#include "producto.h"

class Potencia : public FPR {
 public:
  Potencia();
  int calcular(std::vector<int> valores) override;
};
