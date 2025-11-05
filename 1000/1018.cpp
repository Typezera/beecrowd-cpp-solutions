#include <iostream>

int main() {

    int nota, aux;
    double quant100,quant50,quant20,quant10,quant5,quant2,quant1; //inicializaçao da variaveis

    std::cin >> nota;

    // nessa etapa a propria regra da divisão por % ajuda a atualizar o valor da variavel garantindo o processo;
    quant100 = nota / 100;
    aux = nota % 100;
    quant50 = aux / 50;
    aux = aux % 50;
    quant20 = aux / 20;
    aux = aux % 20;
    quant10 = aux / 10;
    aux = aux % 10;
    quant5 = aux / 5;
    aux = aux % 5;
    quant2 = aux / 2;
    aux = aux % 2;
    quant1 = aux / 1;
    aux = aux % 1;

    std::cout << nota << std::endl;
    std::cout << quant100 << " nota(s) de R$ 100,00" << std::endl;
    std::cout << quant50 << " nota(s) de R$ 50,00" << std::endl;
    std::cout << quant20 << " nota(s) de R$ 20,00" << std::endl;
    std::cout << quant10 << " nota(s) de R$ 10,00" << std::endl;
    std::cout << quant5 << " nota(s) de R$ 5,00" << std::endl;
    std::cout << quant2 << " nota(s) de R$ 2,00" << std::endl;
    std::cout << quant1 << " nota(s) de R$ 1,00" << std::endl;

    return 0;
}