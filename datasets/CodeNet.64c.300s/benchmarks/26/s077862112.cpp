#include <cstdio>
#include <iostream>

using namespace std;

typedef unsigned long long ullong;

const int DIV = 1000000007;

ullong power(ullong m, ullong n) {
	if (n == 0)
		return 1;
	ullong res = power(m * m % DIV, n / 2);
	if (n % 2 != 0) {
		res = res * m % DIV;
	}
	return res;
}
int main() {

	int m, n;
	scanf("%d %d", &m, &n);
	cout << power(m, n) << endl;

	return 0;
}