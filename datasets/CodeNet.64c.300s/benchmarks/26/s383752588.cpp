#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define int long long
using namespace std;
signed main() {
	int m, n, mod = 1000000007;
	cin >> m >> n;
	int k = 1;
	while (n) {
		if (n % 2 == 1) {
			k *= m;
			n--;
		}
		m *= m; n /= 2;
		k %= mod; m %= mod;
	}
	cout << k << endl;
}
