#include <bits/stdc++.h>

#define rep(i, first, to) for(ll i = first; i < to; ++i)

using namespace std;
typedef long long ll;

int s[(int)1e4], t[500];
int n, q;
void solve() {
	cin >> n;
	rep(i, 0, n) {
		cin >> s[i];
	}
	cin >> q;
	rep(i, 0, q) {
		cin >> t[i];
	}
	int ans = 0;
	rep(i, 0, q) {
		rep(j, 0, n) {
			if (t[i] == s[j]) {
				++ans;
				break;
			}
		}
	}
	cout << ans << endl;
}

int main() {
	solve();
	return 0;
}