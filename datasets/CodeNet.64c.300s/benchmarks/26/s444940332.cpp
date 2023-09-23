#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ullong;

ullong power(ullong x, ullong n) {
	ullong num = 1000000007;
	ullong res = 1;
	if (n > 0) {
		res = power(x * x % num, n / 2);
		if (n % 2 != 0)
			res = res * x % num;
	}
	return res;
}

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	ullong p = power(m, n);

	cout << p << endl;

	return 0;
}