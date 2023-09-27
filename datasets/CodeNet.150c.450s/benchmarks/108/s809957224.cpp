#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REPR(i, n) for (int i = n - 1; i >= 0; --i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORR(i, a, b) for (int i = b - 1; i >= a; --i)
#define SORT(v) sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define REV(v) reverse(v.begin(), v.end())
#define ITER(itr, v) for (auto itr = v.begin(); itr != v.end(); ++itr)
#define LB(v, x) (lower_bound(v.begin(), v.end(), x) - v.begin())
#define UB(v, x) (upper_bound(v.begin(), v.end(), x) - v.begin())
#define SZ(v) (int)v.size()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<vector<int>> edge(n + 1);
	FOR(i, 1, n + 1) {
		int u, k;
		cin >> u >> k;
		REP(j, k) {
			int v;
			cin >> v;
			edge[u].emplace_back(v);
		}
	}
	vector<int> d(n + 1, -1);
	d[1] = 0;
	queue<int> qu;
	qu.emplace(1);
	while (!qu.empty()) {
		int i = qu.front();
		qu.pop();
		for (auto &j : edge[i]) {
			if (d[j] < 0) {
				d[j] = d[i] + 1;
				qu.emplace(j);
			}
		}
	}
	FOR(i, 1, n + 1) {
		cout << i << " " << d[i] << endl;
	}

	return 0;
}
