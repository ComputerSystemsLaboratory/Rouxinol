#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

static const int N = 100001;

int n, m;
int color[N], dist;

vector<int> G[N];

void dfs(int i, int c){
	queue<int> q; q.push(i);
	color[i] = c;

	while (!q.empty()) {
		int u = q.front(); q.pop();
		for (int i = 0; i < G[u].size(); ++i){
			int v = G[u][i];
			if (-1 == color[v]){
				color[v] = c;
				q.push(v);
			}
		}
	}
}


void search(){
	for (int i = 0; i < n; ++i) color[i] = -1;

	int c = 0;
	for (int i = 0; i < n; ++i)	{
		if (color[i] == -1) dfs(i, c++);
	}
}


int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		int u, v; cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	search();

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int u, v; cin >> u >> v;
		if (color[u] == color[v]) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}