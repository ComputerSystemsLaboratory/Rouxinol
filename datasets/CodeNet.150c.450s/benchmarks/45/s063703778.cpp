#include <iostream>

long long mod_pow(long long m, long long n, long long mod)
{
	long long res = 1;
	while (n > 0)
	{
		if (n & 1)
		{
			res = res * m % mod;
		}
		m = m * m % mod;
		n >>= 1;
	}
	return res;
}

int main()
{
	long long m, n;
	std::cin >> m >> n;
	std::cout << mod_pow(m, n, 1000000007) << '\n';;
}

