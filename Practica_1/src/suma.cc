#include "suma.h"

Suma::Suma() = default;

int Suma::calcular(std::vector<int> valores) {
  FPR::IncrementarContador();
  if (valores[1] == 0) {
    Proyeccion proyeccion(1, 1);
    return proyeccion.calcular({valores[0]});
  }
  Suma suma;
  --valores[1];
  Sucesor sucesor;
  Proyeccion proyeccion(3, 3);
  return sucesor.calcular(proyeccion.calcular({valores[0], valores[1], suma.calcular(valores)}));
}
