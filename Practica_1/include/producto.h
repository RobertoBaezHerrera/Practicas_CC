#pragma once

#include <vector>

#include "fpr.h"
#include "suma.h"

class Producto : public FPR {
 public:
  Producto();
  int calcular(std::vector<int> valores) override;
};
