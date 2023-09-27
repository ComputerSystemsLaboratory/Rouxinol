#include <iostream>
#include <cmath>

int main()
{
    double x;
    std::cin >> x;
    std::cout << static_cast<int>(std::pow(x, 3)) << std::endl;
}