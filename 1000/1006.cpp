#include <iostream>
#include <iomanip>

int main() {
    double a, b, c, media;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    double calcPesoA = a * 2;
    double calcPesoB = b * 3;
    double calcPesoC = c * 5;
    double tot = calcPesoA + calcPesoB+ calcPesoC;

    media = tot / 10;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << media << std::endl;

    return 0;
}