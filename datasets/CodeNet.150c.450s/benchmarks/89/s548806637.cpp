#include <iostream>

using namespace std;

typedef long long ll;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a, d, n;
	while ( cin >> a >> d >> n, a || d || n ) {
		int cnt = 0;
		int ans = 0;
		for (ll i = a;; i += d) {
			if (isPrime(i)) {
				if (++cnt == n) {
					ans = i;
					break;
				}
			}
		}
		cout << ans << endl;
	}
}