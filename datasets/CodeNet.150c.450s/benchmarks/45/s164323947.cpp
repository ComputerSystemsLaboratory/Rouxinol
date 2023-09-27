#include <iostream>

int main()
{
    uint64_t m, n, q = 1000000007, nl;
    std::cin >> m >> n;

    uint64_t r = 1;
    int64_t j = 1;
    while (j <= n)
    {
        if ((j & n) != 0)
        {
            r = (r * m) % q;
        }
        j *= 2;
        m = (m * m) % q;
    }
    std::cout << r << "\n";
    return 0;
}

