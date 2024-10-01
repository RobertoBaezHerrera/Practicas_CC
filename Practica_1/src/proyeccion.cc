#include "proyeccion.h"

Proyeccion::Proyeccion() = default;

Proyeccion::Proyeccion(int tamano, int indice)
    : tamano_(tamano), indice_(indice) {}

int Proyeccion::calcular(std::vector<int> valores) {
  FPR::IncrementarContador();
  if (indice_ <= 0) {
    std::cerr << "Error: no se puede hacer la proyección de un valor de índice igual o menor a 0\n";
    exit(EXIT_FAILURE);
  }
  return valores[indice_ - 1];
}
