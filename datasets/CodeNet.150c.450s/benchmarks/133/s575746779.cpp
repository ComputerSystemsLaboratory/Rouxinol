#include "bits/stdc++.h"
#define rep(i,n) for(ll i=0;i<(n);i++)
using namespace std;
using ll = long long;


int main() {
	int D;
	cin >> D;
	int c[26];
	rep(i, 26) {
		cin >> c[i];
	}
	vector<vector<int>> s(D, vector<int>(26));
	for (int i = 0; i < D; i++) {
		for (int j = 0; j < 26; j++) {
			cin >> s[i][j];
		}
	}
	vector<int> t(D);
	rep(i, D) {
		cin >> t[i];
	}
	int last[26];
	rep(i, 26) {
		last[i] = 0;
	}
	int ans = 0;
	rep(d, D) {
		ans += s[d][t[d] - 1];
		last[t[d] - 1] = d + 1;
		rep(i, 26) {
			ans -= c[i] * (d + 1 - last[i]);
		}
		cout << ans << endl;
	}


	return 0;
}