#include <iomanip>
#include <iostream>

int main() {

    int seconds;
    int hours, minuts, second, aux;
    std::cin >> seconds;

    hours = seconds / 3600;
    aux = seconds % 3600;
    minuts = aux / 60;
    second = aux % 60;

    std::cout << hours << ":" << minuts << ":" << second << std::endl; 


    return 0;
}