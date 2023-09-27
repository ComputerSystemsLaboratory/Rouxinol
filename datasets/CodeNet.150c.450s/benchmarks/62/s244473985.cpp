#include <algorithm>
#include <iostream>
#include <cstdio>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if (a > b)
        std::swap(a, b);
    if (b > c)
        std::swap(b, c);
    if (a > b)
        std::swap(a, b);
    std::cout << a << " " << b << " " << c << std::endl;
    return 0;
}
