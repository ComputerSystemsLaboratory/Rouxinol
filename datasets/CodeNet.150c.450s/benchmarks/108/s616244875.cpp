#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

static const int N = 100;
static const int INFTY = (1 << 21);

int n, m[N][N];
int dist[N];

void bfs(int idx)
{
	for (int i = 0; i < n; ++i) dist[i] = INFTY;

	queue<int> q;
	q.push(idx);
	dist[idx] = 0;

	while (!q.empty())
	{
		int u = q.front(); q.pop();
		for (int v = 0; v < n; ++v)
		{
			if (m[u][v] == 0) continue;
			if (dist[v] != INFTY) continue;

			dist[v] = dist[u] + 1;
			q.push(v);
		}
	}
	for (int i = 0; i < n; ++i)
		cout << i + 1 << " " << ((dist[i] == INFTY) ? (-1) : dist[i]) << endl;
}

int main()
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			m[i][j] = 0;
		}
	}
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int u, d;
		cin >> u >> d;
		for (int j = 0; j < d; ++j)
		{
			int v; cin >> v;
			m[u-1][v-1] = 1;
		}
	}

	bfs(0);

	return 0;
}