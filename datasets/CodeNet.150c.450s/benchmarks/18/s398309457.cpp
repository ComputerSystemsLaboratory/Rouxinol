#include <iostream>

auto main () -> int
{
    auto z = 100000;
    int n;
    std::cin >> n;
    for (auto i = 0; i < n; ++ i)
    {
        auto d = z / 100 * 5; // 5%
        if (d % 1000)
        {
            d += 1000 - d % 1000;
        }
        z += d;
    }
    std::cout << z << std::endl;
}