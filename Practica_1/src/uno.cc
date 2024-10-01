#include "uno.h"

Uno::Uno() = default;

int Uno::calcular(int valor_x) {
  FPR::IncrementarContador();
  Cero cero;
  Sucesor sucesor;
  return sucesor.calcular(cero.calcular(valor_x));
}
