#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;
#define INT_MIN     (-2147483647 - 1) /* minimum (signed) int value */
#define INT_MAX       2147483647    /* maximum (signed) int value */


static const int N = 100;
static const int NEW = 0;
static const int VISITING = 1;
static const int OLD = 2;

int n, m[N][N] = {0}, t;
int color[N] = { 0 }, t1[N] = { 0 }, t2[N] = {0};

void getMatrix()
{
	int u, v, k;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			cin >> v;
			m[u-1][v-1] = 1;
		}
	}
}

int nxt(int idx)
{
	for (int i = 0; i < n; ++i)
	{
		if (1 == m[idx][i] && color[i] == NEW)
			return i;
	}
	return -1;
}

void dfs_visit(int idx)
{
	stack<int> s;
	s.push(idx);
	color[idx] = VISITING;
	t1[idx] = t++;


	while (!s.empty())
	{
		int u = s.top();
		int v = nxt(u);
		if (-1 != v)
		{
			color[v] = VISITING;
			t1[v] = t++;
			s.push(v);
		}
		else
		{
			s.pop();
			color[u] = OLD;
			t2[u] = t++;
		}
	}
}

void dfs()
{
	t = 1;

	for (int i = 0; i < n; ++i)
		color[i] = NEW;

	for (int i = 0; i < n; ++i)
	{
		if (color[i] == NEW)
			dfs_visit(i);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << i + 1 << " " << t1[i] << " " << t2[i] << endl;
	}
}

int dist[N];

void bfs(int idx)
{
	queue<int> q;
	q.push(idx);

	for (int i = 0; i < n; ++i)
		dist[i] = INT_MAX;
	dist[idx] = 0;

	int u;
	while (!q.empty())
	{
		u = q.front(); q.pop();
		for (int i = 0; i < n; ++i)
		{
			if (m[u][i] == 0) continue;
			if (dist[i] != INT_MAX) continue;
			dist[i] = dist[u] + 1;
			q.push(i);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << i + 1 << " " <<( (dist[i] == INT_MAX) ? (-1) : dist[i]) << endl;
	}
}


int main()
{
	getMatrix();
	bfs(0);
}