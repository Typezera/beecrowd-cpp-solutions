#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double x1,x2,y1,y2, tot1, tot2, res;

    std::cin >> x1 >> y1 >> x2 >> y2;

    tot1 = std::pow((x2 - x1), 2);
    tot2 = std::pow((y2 - y1), 2);

    res = std::sqrt(tot1 + tot2);

    std::cout << std::fixed << std::setprecision(4);

    std::cout << res << std::endl;

    return 0;
}