#include <iostream>
#include <sstream>

auto main () -> int
{
    int a [4][3][10] = {};
    int n;
    std::cin >> n;
    for (auto i = 0; i < n; ++ i)
    {
        int b , f , r , v;
        std::cin >> b >> f >> r >> v;
        a [b - 1] [f - 1] [r - 1] += v;
    }
    for (auto && tower : a)
    {
        for (auto && floor : tower)
        {
            for (auto && elem : floor)
            {
                std::cout << ' ' << elem;
            }
            std::cout << std::endl;
        }
        if (tower != a [3])
            std::cout << "####################" << std::endl;
    }
}