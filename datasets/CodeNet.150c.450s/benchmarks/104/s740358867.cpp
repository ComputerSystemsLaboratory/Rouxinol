#include <iostream>
#include <cstdio>

auto main () -> int
{
    int amida [31];
    
    int w;
    std::cin >> w;
    for (auto i = 1; i <= w; ++ i)
    {
        amida [i] = i;
    }

    int n;
    std::cin >> n;
    for (auto i = 0; i < n; ++ i)
    {
        int a , b;
        std::scanf ("%d,%d" , & a , & b);
        std::swap (amida [a] , amida [b]);
    }

    for (auto i = 1; i <= w; ++ i)
    {
        std::cout << amida [i] << std::endl;
    }
}