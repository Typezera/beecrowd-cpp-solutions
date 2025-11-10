#include <iostream>
#include <iomanip>

int main() {

    int age, year, month, day, aux;

    std::cin >> age;

    year = age / 365;
    aux = age % 365; // 35
    month = aux / 30; // 
    day = aux % 30;

    std::cout << year << " ano(s)" << std::endl;
    std::cout << month << " mes(es)" << std::endl;
    std::cout << day << " dia(s)" << std::endl;

    return 0;
}