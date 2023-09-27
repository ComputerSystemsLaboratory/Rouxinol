#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int INF = 1 << 30;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		vector<int> a(n);
		rep(i, n) cin >> a[i];
		sort(a.begin(), a.end());
		int ans = INF;
		rep(i, n - 1) ans = min(ans, a[i + 1] - a[i]);
		cout << ans << endl;
	}
	return 0;
}
