#include <iostream>

int main() {
  
  // con = convert
  double pesos, reais, soles, conpesos, conreais, consoles ,dollars;

  std::cout<< "Enter number of Colombian Pesos: ";
  std::cin>> pesos;

  std::cout<< "Enter number of Brazilian Reais: ";
  std::cin>> reais;

  std::cout<< "Enter number of Peruvaian Soles: ";
  std::cin>> soles;
  
  conpesos = 0.00032;
  conreais = 0.27;
  consoles = 0.3;

  dollars = (conpesos * pesos) + (conreais * reais) + (consoles * soles);

  std::cout<< "Total USD = $" << dollars << "\n";

}
