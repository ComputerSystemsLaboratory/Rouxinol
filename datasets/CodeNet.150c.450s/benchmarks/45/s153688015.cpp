#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

#define DEBUG

#ifdef DEBUG

#define printd printf

#else

#define printd(...)

#endif

static constexpr int mod = 1'000'000'007;

uint64_t modpow(uint64_t base, uint64_t exp, uint64_t mod)
{
    base %= mod;

    uint64_t ans = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            ans = ans * base % mod;
        }
        base = base * base % mod;
        exp >>= 1;
    }

    return ans;
}

int main()
{
    int m, n;

    std::cin >> m >> n;

    std::cout << modpow(m, n, mod) << std::endl;

    return 0;
}

