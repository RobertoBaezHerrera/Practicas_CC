#include "sucesor.h"

Sucesor::Sucesor() = default;

int Sucesor::calcular(int valor_x) {
  FPR::IncrementarContador();
  return valor_x + 1;
}
