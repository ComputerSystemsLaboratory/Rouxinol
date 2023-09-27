#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

bool isPrime(int x) {
	if (x == 2)
		return true;
	if (x % 2 == 0)
		return false;
	int i = 3;
	while (i <= sqrt(x)) {
		if (x % i == 0)
			return false;
		++i;
	}
	return true;
}

int main() {

	int n;
	scanf("%d", &n);
	int x[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (isPrime(x[i])) {
			++cnt;
		}
	}
	cout << cnt << endl;

	return 0;
}