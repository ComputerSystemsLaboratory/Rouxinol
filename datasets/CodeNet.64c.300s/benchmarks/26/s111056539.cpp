#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ullong;

ullong power(ullong x, ullong n) {
	int num = 1000000007;
	if (n == 0)
		return 1;

	ullong res = power(x * x % num, n / 2);
	if (n % 2 == 0) {
		res = res % num;
	} else {
		res = res * x % num;
	}

	return res;
}

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	ullong result = power(m, n);
	cout << result << endl;

	return 0;
}