#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    double val;
    int upMoney, quant, copy;

    double money[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    std::cin >> val;
    val = val * 100;
    round(val);
    copy = static_cast<int>(val);
    std::cout << "NOTAS:" << std::endl;
    for (int i = 0; i <= 11 ; i++)
    {

        upMoney = money[i];
        
        quant = copy / upMoney;
        copy = copy % upMoney;
        if (i <= 5)
        {
            std::cout << std::fixed << std::setprecision(2);
            std::cout << quant << " nota(s) de R$ " << money[i] / 100 << std::endl;
            if (i == 5)
            {
                std::cout << "MOEDAS:" << std::endl;
            }
            
        }else{
            std::cout << std::fixed << std::setprecision(2);
            std::cout << quant << " moeda(s) de R$ " << money[i] / 100 << std::endl;
        }
    }
    

    return 0;
};