#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

static const int N = 100000;
const int NIL = -1;

int n, m;
vector<int> G[N];
int color[N];

void dfs(int r, int c){
	queue<int> q; q.push(r);
	color[r] = c;

	while (!q.empty()) {
		int u = q.front(); q.pop();

		for (int i = 0; i < G[u].size(); ++i)
		{
			int v = G[u][i];
			if (color[v] == NIL){
				color[v] = c;
				q.push(v);
			}
		}
	}
}

void assignColor(){
	int id = 1;
	for (int i = 0; i < n; ++i) color[i] = NIL;
	for (int i = 0; i < n; ++i) {
		if (color[i] == NIL) dfs(i, id++);
	}
}


int main(){
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int u, v; cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	assignColor();
	int q; cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int s, t; cin >> s >> t;
		cout << ((color[s] == color[t]) ? "yes" : "no") << endl;
	}

	return 0;
}