#include <iostream>
#include <cmath>

auto main () -> int
{
    int x , y;
    while (std::cin >> x >> y)
    {
        std::cout << static_cast < int > (std::log10 (x + y)) + 1 << std::endl;
    }
}