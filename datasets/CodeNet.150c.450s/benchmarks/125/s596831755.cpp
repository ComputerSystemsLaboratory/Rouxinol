#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

struct Node {
	int k, d, f;
	vector<int> v;
};

#define MAX_N 100

Node node[MAX_N + 1];
int stamp = 1;

void dfs(int u) {
	if (node[u].d == 0) {
		node[u].d = stamp++;
		for (int i = 0; i < node[u].k; ++i)
			if (node[u].v[i] != u)
				dfs(node[u].v[i]);
		if (node[u].f == 0) node[u].f = stamp++;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int u;
		cin >> u;
		cin >> node[u].k;
		for (int j = 0; j < node[u].k; ++j) {
			int v;
			cin >> v;
			node[u].v.push_back(v);
		}
		node[u].d = node[u].f = 0;
	}
	for (int i = 1; i <= n; ++i)
		dfs(i);
	for (int i = 1; i <= n; ++i)
		cout << i << " " << node[i].d << " " << node[i].f << endl;
	return 0;
}