#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e9 + 7, MOD = 1e9 + 7;
const long long LINF = 1e18;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
signed main() {
	int n, tmp = 100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		tmp *= 1.05;
		if (tmp % 1000) {
			tmp -= tmp % 1000;
			tmp += 1000;
		}
	}
	cout << tmp << endl;
	return 0;
}
