#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ullong;

ullong power(ullong m, ullong n, ullong M) {
	ullong res = 1;
	if (n > 0) {
		res = power(m, n / 2, M);
		if (n % 2 == 0) {
			res = (res * res) % M;
		} else {
			res = (((res * res) % M) * m) % M;
		}
	}
	return res;
}

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	cout << power(m, n, 1000000007) << endl;

	return 0;
}