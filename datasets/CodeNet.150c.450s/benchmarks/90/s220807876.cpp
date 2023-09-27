#include <iostream>

template <typename T , unsigned N>
auto findMax (T (& a) [N]) -> T
{
    auto res = a [0];
    for (auto && elem : a)
    {
        res = std::max (res , elem);
    }
    return res;
}

auto main () -> int
{
    int a [110] = {};
    int n;
    while (std::cin >> n)
    {
        ++ a [n];
    }
    auto m = findMax (a);
    for (auto i = 1; i <= 100; ++ i)
    {
        if (a [i] == m)
        {
            std::cout << i << std::endl;
        }
    }
}