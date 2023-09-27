#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

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
			if (color[v] == NEW)
			{
				color[v] = VISITING;
				t1[v] = t++;
				s.push(v);
			}
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

int main()
{
	getMatrix();
	dfs();
}