#include <iostream>
#include <iomanip>

int main() {

    double raio;
    const double pi = 3.14159;
    std::cin >> raio;

    double tot = (4.0/3) * pi * (raio * raio * raio);
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "VOLUME = " << tot << std::endl;

    return 0;
}