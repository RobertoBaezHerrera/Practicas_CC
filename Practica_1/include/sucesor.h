#pragma once

#include "fpr.h"

class Sucesor : public FPR {
 public:
  Sucesor();
  int calcular(int valor_x) override;
};
