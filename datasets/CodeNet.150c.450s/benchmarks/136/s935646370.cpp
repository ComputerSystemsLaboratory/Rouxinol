#include <iostream>

auto gcd (unsigned a , unsigned b) -> unsigned
{
    return b ? gcd (b , a % b) : a;
}

auto lcm (unsigned a , unsigned b) -> unsigned
{
    return a / gcd (a , b) * b;
}

auto main () -> int
{
    unsigned int a , b;
    while (std::cin >> a >> b)
    {
        std::cout << gcd (a , b) << ' ' << lcm (a , b) << std::endl;
    }
}