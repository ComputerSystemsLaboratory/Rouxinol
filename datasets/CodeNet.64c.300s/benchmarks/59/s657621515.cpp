#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

bool isPrime(int v) {

	if (v == 2 || v == 3)
		return true;

	if (v % 2 == 0)
		return false;

	int p = ceil(sqrt(v));

	for (int i = 3; i <= p; i = i + 2) {
		if (v % i == 0)
			return false;
	}

	return true;
}

int main() {

	int n;
	scanf("%d", &n);

	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		int v;
		scanf("%d", &v);

		if (isPrime(v))
			++cnt;
	}

	cout << cnt << endl;

	return 0;
}