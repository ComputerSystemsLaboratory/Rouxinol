#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long m, n;
	cin >> m >> n;

	long long res = 1;

	if (n <= 1000) {
		for (long long i = 0; i < n; i++) {
			res = res * m;
			res = res % 1000000007;
		}
		cout << res << endl;
		return 0;
	}
	else {
		long long res0 = 1;
		long long res1 = 1;

		for (long long i = 0; i < 1000; i++) {
			res0 = res0 * m;
			res0 = res0 % 1000000007;
		}
		for (long long i = 0; i < n/1000; i++) {
			res1 = res1 * res0;
			res1 = res1 % 1000000007;
		}

		for (long long i = 0; i < n%1000; i++) {
			res1 = res1 * m;
			res1= res1 % 1000000007;
		}
		cout << res1 << endl;
		return 0;
	}
}
