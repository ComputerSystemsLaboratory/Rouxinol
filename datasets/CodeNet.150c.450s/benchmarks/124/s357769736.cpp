#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int INF = 0xfffffff;
const int MAX = 100;

struct Edge {
	int v;
	int c;
};

int main() {
	int n;
	vector<Edge> graph[MAX];
	int table[MAX];
	bool check[MAX];

	cin >> n;
	for (int i = 0; i < n; i++) {
		table[i] = INF;
		check[i] = false;
	}

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			Edge e;
			cin >> e.v >> e.c;
			graph[u].push_back(e);
		}
	}

	int u = 0;
	table[0] = 0;
	while (true) {
		check[u] = true;

		for (int i = 0; i < graph[u].size(); i++) {
			int v = graph[u][i].v;
			int c = graph[u][i].c;
			if (table[v] > c + table[u]) {
				table[v] = c + table[u];
			}
		}

		int m = INF;
		int prev = u;
		for (int i = 0; i < n; i++) {
			if (check[i])continue;
			if (table[i] < m) {
				m = table[i];
				u = i;
			}
		}
		if (u == prev)break;
	}

	for (int i = 0; i < n; i++) {
		cout << i << " " << table[i] << endl;
	}

	return 0;
}