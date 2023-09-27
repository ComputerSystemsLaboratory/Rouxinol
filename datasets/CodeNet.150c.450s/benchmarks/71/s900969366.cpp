#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e9 + 7, MOD = 1e9 + 7;
const long long LINF = 1e18;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
signed main() {
	int n, ans;
	while (cin >> n) {
		ans = 0;
		for (int a = 0; a < 10; a++) {
			for (int b = 0; b < 10; b++) {
				for (int c = 0; c < 10; c++) {
					for (int d = 0; d < 10; d++) {
						if (a + b + c + d == n) {
							ans++;
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
