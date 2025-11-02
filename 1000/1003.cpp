#include <iostream>
#include <iomanip>


int main() {
    double raio;
    const double PI = 3.14159;

    std::cin >> raio;

    double result = (raio * raio) * PI;

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "A=" << result << std::endl;

    return 0;
}