#pragma once

#include "cero.h"
#include "fpr.h"
#include "sucesor.h"

class Uno : public FPR {
 public:
  Uno();
  int calcular(int valor_x) override;
};
