#include <iostream>

auto input (int (& a) [4] , int (& b) [4]) -> bool
{
    for (auto && elem : a)
    {
        if (! (std::cin >> elem))
        {
            return 0;
        }
    }
    for (auto && elem : b)
    {
        std::cin >> elem;
    }
    return 1;
}

auto main () -> int
{
    int a [4] , b[4];
    while (input (a , b))
    {
        auto flag = 0;
        for (auto i = 0; i < 4; ++ i)
        {
            for (auto j = 0; j < 4; ++ j)
            {
                if (a [i] == b [j])
                {
                    ++ flag;
                    break;
                }
            }
        }
        auto hit = 0;
        for (auto i = 0; i < 4; ++ i)
        {
            if (a [i] == b [i])
            {
                ++ hit;
            }
        }
        std::cout << hit << ' ' << (flag - hit) << std::endl;
    }
}