#include <iostream>

long long int pow(long long int x, unsigned long long int n)
{
    if (n == 1)
    {
        return x;
    }
    else if (n % 2 == 0)
    {
        return pow(x * x, n / 2);
    }
    else
        return pow(x * x, n / 2) * x;
}

long long int powmod(long long int x, unsigned long long int n, long long int mod = 1000000007)
{
    x = x % mod;
    //   std::cout << "x=" << x << ", n=" << n << std::endl;
    if (n == 1)
    {
        return x;
    }
    else if (n % 2 == 0)
    {
      return powmod(x * x % mod, n / 2);
    }
    else
      return powmod(x * x % mod, n / 2) * x%mod;
}

int main()
{
    long long m, n;
    std::cin >> m >> n;
    std::cout << powmod(m, n) << std::endl;
}

