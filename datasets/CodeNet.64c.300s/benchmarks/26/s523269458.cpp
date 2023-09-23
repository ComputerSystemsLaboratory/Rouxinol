#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ullong;

ullong power(ullong x, ullong n, int num) {
	ullong res = 1;
	if (n > 0) {
		res = power(x * x % num, n / 2, num);
		if (n % 2 != 0)
			res = res * x % num;
	}
	return res;
}

int main() {

	ullong num = 1000000007;
	int m, n;
	scanf("%d %d", &m, &n);

	ullong p = power(m, n, num);

	cout << p % num << endl;

	return 0;
}