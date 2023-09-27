#include <iostream>

auto main () -> int
{
    constexpr auto n = 10;
    int highest [3] = {};
    
    for (int i = 0; i < n; ++ i)
    {
        int h;
        std::cin >> h;
        if (highest [0] < h)
        {
            highest [2] = highest [1];
            highest [1] = highest [0];
            highest [0] = h;
        }
        else if (highest [1] < h)
        {
            highest [2] = highest [1];
            highest [1] = h;
        }
        else if (highest [2] < h)
        {
            highest [2] = h;
        }
    }

    for (auto && elem : highest)
    {
        std::cout << elem << std::endl;
    }
}