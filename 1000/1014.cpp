#include <iostream>
#include <iomanip>

int main() {

    int x;
    double y, res;

    std::cin >> x >> y;

    res = x / y;

    std::cout << std::fixed << std::setprecision(3);

    std::cout << res << " km/l" << std::endl;

    return 0;
}