#include <iostream>
#include <cmath> 


int main(){
    
    int a, b, c, maiorAB, maior ;

    std::cin >> a >> b >> c;

    maiorAB = (a + b + std::abs(a - b)) / 2;
    maior = (maiorAB + c + std::abs(maiorAB - c)) / 2;

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}