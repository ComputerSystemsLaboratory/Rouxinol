#include <iostream>

auto main () -> int
{
    const char * res [] = {"NO" , "YES"};
    int n;
    std::cin >> n;

    for (auto i = 0; i < n; ++ i)
    {
        int a , b , c;
        std::cin >> a >> b >> c;
        if (a > c)
        {
            std::swap (a , c);
        }
        if (b > c)
        {
            std::swap (b , c);
        }
        std::cout << res [a * a + b * b == c * c] << std::endl;
    }
}