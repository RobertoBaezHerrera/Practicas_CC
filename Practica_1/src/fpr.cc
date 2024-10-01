#include "fpr.h"

int FPR::contador_llamadas = 0;

void FPR::IncrementarContador() { contador_llamadas++; }

int FPR::ObtenerContador() { return contador_llamadas; }

int FPR::calcular(std::vector<int> valores) {
  std::cout << "Esta función es virtual y no se debe ejecutar\n";
  exit(EXIT_FAILURE);
}

int FPR::calcular(int valor_x) {
  std::cout << "Esta función es virtual y no se debe ejecutar\n";
  exit(EXIT_FAILURE);
}
