#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long ipow(long long b, long long e) {
	if (e == 0) {
		return 1;
	} else if (e % 2 == 0) {
		return ipow(b * b % MOD, e / 2) % MOD;
	} else {
		return ipow(b * b % MOD, e / 2) * b  % MOD;
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << ipow(m, n) % MOD << endl;
	return 0;
}

