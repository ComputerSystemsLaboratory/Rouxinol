#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ld = long double;

const int INF = (1 << 30) - 1;
const ll INF64 = ((ll)1 << 62) - 1;
const double PI = 3.1415926535897932384626433832795;

const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<vector<pair<int, int>>> m(n);

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v, c;
			cin >> v >> c;
			m[u].emplace_back(v, c);
		}
	}

	vector<int> d(n, INF), color(n);

	d[0] = 0;
	color[0] = 1;
	while (true) {
		int minv = INF;
		int u = -1;
		for (int i = 0; i < n; i++) {
			if (minv > d[i] && color[i] != 2) {
				u = i;
				minv = d[i];
			}
		}

		if (u == -1) {
			break;
		}

		color[u] = 2;
		for (auto e : m[u]) {
			if (color[e.first] != 2 && d[e.first] > d[u] + e.second) {
				d[e.first] = d[u] + e.second;
				color[e.first] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
	}
	return 0;
}

