#include <iostream>
#include <iomanip>

int main() {

    int codPeca1, quant1, codePeca2, quant2;
    float valorPeca1, valorPeca2;

    std::cin >> codPeca1 >> quant1 >> valorPeca1 >> codePeca2 >> quant2 >> valorPeca2;

    float totPeca1 = valorPeca1 * quant1;
    float totPeca2 = valorPeca2 * quant2;

    float result = totPeca1 + totPeca2;
    
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "VALOR A PAGAR: R$ " << result << std::endl;
    return 0;
}