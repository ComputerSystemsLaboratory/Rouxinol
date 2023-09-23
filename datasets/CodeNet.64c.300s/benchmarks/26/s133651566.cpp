#include <iostream>

using namespace std;

typedef unsigned long long ull;
ull mod = ull(1e9 + 7);

ull power(ull m, ull n)
{
	ull pow = 1;
	while (n != 0) {
		m %= mod;
		if (n % 2 == 1) {
			pow *= m;
			pow %= mod;
		}
		m *= m;
		n >>= 1;
	}
	return pow;
}

int main()
{
	ull m, n;
	cin >> m >> n;
	cout << power(m, n) << endl;
	return 0;
}