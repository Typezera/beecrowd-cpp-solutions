#include <iostream>
#include <iomanip>

int main() {

    double a, b, c;
    const double pi = 3.14159;

    std::cin >> a >> b >> c;

    double triangulo = (a * c) / 2;
    double circulo = (c * c) * pi;
    double trapezio = (a + b) * c / 2;
    double quadrado = b * b;
    double retangulo = (a * b);

    std::cout << std::fixed << std::setprecision(3);

    std::cout << "TRIANGULO: " << triangulo << std::endl;
    std::cout << "CIRCULO: " << circulo << std::endl;
    std::cout << "TRAPEZIO: " << trapezio << std::endl;
    std::cout << "QUADRADO: " << quadrado << std::endl;
    std::cout << "RETANGULO: " << retangulo << std::endl;

    return 0;
}