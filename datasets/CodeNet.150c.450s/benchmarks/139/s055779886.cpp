#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> mat(n + 1);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		mat[u].push_back(v);
		mat[v].push_back(u);
	}

	vector<int> o;
	o.push_back(1);

	vector<int> visited(n + 1);
	visited[1] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < mat[o[i]].size(); j++) {
			int p = mat[o[i]][j];
			if (!visited[p]) {
				visited[p] = o[i];
				o.push_back(p);
			}
		}
	}

	if (o.size() == n) {
		cout << "Yes" << endl;
		for (int i = 2; i <= n; i++) {
			cout << visited[i] << endl;
		}
	} else {
		cout << "No" << endl;
	}

	return 0;
}
