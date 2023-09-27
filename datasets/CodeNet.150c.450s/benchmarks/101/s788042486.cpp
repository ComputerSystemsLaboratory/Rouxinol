#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

static const int N = 100000;
static const int NIL = -1;

int n, m, c;
vector<int> G[N];
int color[N];

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	color[u] = c;

	while (!q.empty())
	{
		u = q.front(); q.pop();
		for (int i = 0; i < G[u].size(); ++i)
		{
			int v = G[u][i];
			if (color[v] == -1)
			{
				q.push(v);
				color[v] = c;
			}
		}
	}
}

void DrawColor()
{
	c = 0;
	for (int i = 0; i < n; ++i) color[i] = -1;
	for (int i = 0; i < n; ++i)
	{
		if (color[i] == -1) bfs(i);
		c++;
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int u, v; cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	DrawColor();

	int n2, p1, p2;
	cin >> n2;
	for (int i = 0; i < n2; ++i)
	{
		cin >> p1 >> p2;
		if (color[p1] == color[p2])
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}