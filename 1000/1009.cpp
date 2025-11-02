#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string nome;
    double salario, bonus;

    std::cin >> nome;
    std::cin >> salario >> bonus;

    double resultado = (bonus * 0.15) + salario;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "TOTAL = " << "R$ " << resultado << std::endl;

    return 0;
}