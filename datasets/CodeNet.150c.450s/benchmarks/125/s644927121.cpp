#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <cstring>

using namespace std;
using ll = long long;
using pint = pair<int, int>;
using Graph = vector<vector<int>>;

ll INF = 1LL << 60;

Graph G;
vector<bool> seen;
vector<int> d, f;

void dfs(Graph& G, int v, int& num) {
	seen[v] = true;
	d[v] = num++;
	for (int nv : G[v]) {
		if (seen[nv]) continue;
		dfs(G, nv, num);
	}
	f[v] = num++;
}

int main() {
	int n;
	cin >> n;
	G.resize(n);
	seen.resize(n);
	d.resize(n);
	f.resize(n);
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			v--;
			G[u].push_back(v);
		}
	}

	int num = 1;
	for (int i = 0; i < n; i++) {
		if (!seen[i]) dfs(G, i, num);
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
	return 0;
}
