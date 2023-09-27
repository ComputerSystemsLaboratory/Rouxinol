#include <iostream>

auto main () -> int
{
    int n;
    while (std::cin >> n)
    {
        int res = 0;
        for (auto a = 0; a < 10; ++ a)
        {
            for (auto b = 0; b < 10; ++ b)
            {
                for (auto c = 0; c < 10; ++ c)
                {
                    auto d = n - a - b - c;
                    if (0 <= d && d < 10)
                    {
                        ++ res;
                    }
                }
            }
        }
        std::cout << res << std::endl;
    }
}