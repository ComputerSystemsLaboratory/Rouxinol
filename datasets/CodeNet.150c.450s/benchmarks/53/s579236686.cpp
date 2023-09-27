#include <bits/stdc++.h>

using namespace std;

map< long long, int > prime_factor(long long n) {
	map< long long, int > ret;
	for (long long i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret[i]++;
			n /= i;
		}
	}
	if (n != 1) ret[n] = 1;
	return ret;
}

int main() {

	long long x;
	map<long long, int > a;
	cin >> x;
	a = prime_factor(x);

	auto iter = a.begin();

	cout << x << ":";

	while (iter != a.end()) {
		for (int i = 0; i < iter->second;i++) {
			cout << " " << iter->first;
		}
		iter = next(iter, 1);
	}
	cout << endl;
}
