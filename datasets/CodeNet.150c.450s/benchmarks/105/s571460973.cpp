#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int64_t a[n]; for(int i = 0; i < n; ++i) cin >> a[i];
	string s; cin >> s;
	vector<int64_t> base;
	for(int i = n - 1; i >= 0; --i) {
		for(int64_t b : base) {
			a[i] = min(a[i], a[i] ^ b);
		}
		if(s[i] == '0') {
			if(a[i] != 0) {
				base.push_back(a[i]);
			}
		} else {
			if(a[i] != 0) {
				cout << 1 << '\n';
				return;
			}
		}
	}
	cout << 0 << '\n';
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
