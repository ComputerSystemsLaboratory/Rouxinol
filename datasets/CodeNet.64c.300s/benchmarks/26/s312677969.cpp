#include <iostream>
using namespace std;

long long modAdd(long long a, long long b, long long mod) {
	return ((a % mod) + (b % mod)) % mod;
}

long long modSub(long long a, long long b, long long mod) {
	long long c = ((a % mod) - (b % mod)) % mod;
	return ((c < 0) ? c + mod : c);
}
long long modMul(long long a, long long b, long long mod) {
	return ((a % mod) * (b % mod)) % mod;
}

long long modPow(long long a, long long n, long long mod) {
	long long res = 1;
	while (n > 0)
	{
		if (n & 1) {
			res = modMul(res, a, mod);
		}
		a = modMul(a, a, mod);
		n >>= 1;
	}
	return res;
}

long long modDiv(long long a, long long b, long long mod) {
	return modMul(a, modPow(b, mod - 2, mod), mod);
}

long long modCombination(long long n, long long r, long long mod) {
	if (r > n / 2)
		return modCombination(n, n - r, mod);
	long long res = 1;
	for (long long i = 1; i <= r; i++) {
		res = modMul(res, n - i + 1, mod);
		res = modDiv(res, i, mod);
	}
	return res;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << modPow(m, n, 1000000007) << endl;
	return 0;
}
