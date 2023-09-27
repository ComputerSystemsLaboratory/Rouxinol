#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

const int INF = 1e9;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	rep(i, n) rep(j, n) cin >> a[i][j];
	vector<int> mn(n, INF);
	mn[0] = 0;
	vector<bool> used(n, false);
	int ans = 0;
	while (1) {
		int v = -1;
		rep(u, n) if (!used[u] && (v == -1 || mn[u] < mn[v])) v = u;
		if (v == -1) break;
		used[v] = true;
		ans += mn[v];
		rep(u, n) if (a[v][u] != -1) mn[u] = min(mn[u], a[v][u]);
	}
	cout << ans << endl;
	return 0;
}
