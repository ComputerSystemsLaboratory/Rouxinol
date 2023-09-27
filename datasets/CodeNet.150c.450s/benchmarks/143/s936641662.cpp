#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define MOD 1000000007

using namespace std;
using ll = long long;

int main() {
	ll n, q, ans = 0;
	cin >> n;
	ll a[100001] = {};
	rep(i,n) {
		int x;
		cin >> x;
		ans += x;
		a[x]++;
	}
	cin >> q;
	vector<ll> b(q), c(q);
	rep(i,q) cin >> b[i] >> c[i];
	rep(i,q) {
		a[c[i]] += a[b[i]];
		ans += (c[i] - b[i]) * a[b[i]];
		a[b[i]] = 0;
		cout << ans << endl;
	}
	return 0;
}
