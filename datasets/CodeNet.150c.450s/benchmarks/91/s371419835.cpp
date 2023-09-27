#include <iostream>

auto is_prime (int x) -> bool
{
    for (auto i = 2; i * i <= x; ++ i)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

auto main () -> int
{
    int prime_num [1000000] = {0 , 0 , 1};
    for (auto i = 3; i < 1000000; ++ i)
    {
        prime_num [i] = prime_num [i - 1] + is_prime (i);
    }

    int n;
    while (std::cin >> n)
    {
        std::cout << prime_num [n] << std::endl;
    }
}