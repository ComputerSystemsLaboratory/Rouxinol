#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <string>

using namespace std;

const double PI = 3.14159265358979;

vector<int> G[100000];
int visited[100000];

void dfs_stack(int node, int color) {

	stack<int> st;

	visited[node] = color;
	st.push(node);

	while (!st.empty()) {

		int u = st.top();
		bool isPop = true;
		for (int i = 0; i < G[u].size(); i++) {
			if (!visited[G[u][i]]) {
				visited[G[u][i]] = color;
				st.push(G[u][i]);
				isPop = false;
			}
		}
		if (isPop) {
			st.pop();
		}
	}
}

int main() {
	
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)	{
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	for (int i = 0; i < n; i++)	{
		if (!visited[i])
			dfs_stack(i, i + 1);
	}

	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		if (visited[a] == visited[b] && visited[a] && visited[b]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}

