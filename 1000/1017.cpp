#include <iostream>
#include <iomanip>

int main() {

    int tempo, velo, distancia;
    double valorFinal;
    const int combustivel = 12; // media de litros por km

    std::cin >> tempo >> velo;

    distancia = tempo * velo;
    valorFinal = static_cast<double>(distancia) / combustivel; //conversão, pois se deixar inteiro perde os numeros pós a virgula!

    std::cout << std::fixed << std::setprecision(3);

    std::cout << valorFinal << std::endl;

    return 0;
}