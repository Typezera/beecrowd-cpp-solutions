#include <iostream>
#include <iomanip>

int main() {

    int numFun, horas;
    double pHora;

    std::cin >> numFun >> horas >> pHora;

    double salario = horas * pHora;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "NUMBER = " << numFun << std::endl;
    std::cout << "SALARY = " << "U$ " << salario << std::endl;
 
    return 0;
}