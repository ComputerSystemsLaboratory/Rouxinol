#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int main() {
	int n, k;
	while (cin >> n >> k) {
		if (n == 0 && k == 0) break;
		vector<ll> a(n + 1);
		rep(i, n) {
			int x;
			cin >> x;
			a[i + 1] = a[i] + x;
		}
		ll mx = 0;
		for (int i = 0; i <= n - k; i++) mx = max(mx, a[k + i] - a[i]);
		cout << mx << endl;
	}
	return 0;
}
