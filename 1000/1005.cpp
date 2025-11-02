#include <iostream>
#include <iomanip>

int main () {
    double a, b;
    double media;

    std::cin >> a;
    std::cin >> b;

    double  calcPesoA = a * 3.5;
    double calcPesoB = b * 7.5;
    double total = calcPesoA + calcPesoB;
    
    media = total / 11;

    std::cout << std::fixed << std::setprecision(5);

    std::cout << "MEDIA = " << media << std::endl;

    return 0;
}