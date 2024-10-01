#pragma once

#include "fpr.h"

class Cero : public FPR {
 public:
  Cero();
  int calcular(int valor_x) override;
};
