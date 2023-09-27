#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

const int INF = 1e9;

int main() {
	int v, e, r;
	cin >> v >> e >> r;
	vector<vector<pii>> g(v);
	rep(i, e) {
		int s, t, d;
		cin >> s >> t >> d;
		g[s].push_back(make_pair(t, d));
	}
	vector<int> ans(v, INF);
	ans[r] = 0;
	priority_queue<pii, vector<pii>, greater<pii>> q;
	q.push(make_pair(ans[r], r));
	while (!q.empty()) {
		pii p = q.top();
		q.pop();
		if (ans[p.second] < p.first) continue;
		for (auto a : g[p.second]) {
			if (ans[a.first] > ans[p.second] + a.second) {
				ans[a.first] = ans[p.second] + a.second;
				q.push(make_pair(ans[a.first], a.first));
			}
		}
	}
	rep(i, v) {
		if (ans[i] != INF) cout << ans[i] << endl;
		else cout << "INF" << endl;
	}
	return 0;
}
