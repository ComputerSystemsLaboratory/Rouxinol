#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(signed i = 0; i < signed(n); i++)

signed main() {
	int r, c;
	while (cin >> r >> c && r) {
		vector<vector<int>> v(r, vector<int>(c));
		rep(i, r) rep(j, c) cin >> v[i][j];
		int ans = 0;
		rep(b, 1 << r) {
			int tmp = 0;
			rep(j, c) {
				int bl = 0;
				rep(i, r) bl += v[i][j] ^ ((b >> i) & 1);
				tmp += max(bl, r - bl);
			}
			ans = max(ans, tmp);
		}
		cout << ans << endl;
	}
}