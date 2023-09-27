#include <iostream>

using namespace std;

static const int N = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, m[N][N];

int prim()
{
	int d[N], p[N], color[N];

	for (int i = 0; i < n; ++i)
	{
		d[i] = INFTY;
		p[i] = -1;
		color[i] = WHITE;
	}

	d[0] = 0;

	while (1)
	{
		int u = -1;
		int minv = INFTY;
		for (int i = 0; i < n; ++i)
		{
			if (minv > d[i] && color[i] != BLACK)
			{
				minv = d[i];
				u = i;
			}
		}

		if (u == -1) break;
		color[u] = BLACK;

		for (int v = 0; v < n; ++v)
		{
			if (m[u][v] != INFTY && color[v] != BLACK && m[u][v] < d[v])
			{
				d[v] = m[u][v];
				p[v] = u;
				color[v] = GRAY;
			}
		}
	}

	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		if (p[i] != -1) s += m[p[i]][i];
	}

	return s;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int e; cin >> e;
			m[i][j] = (e == -1) ? INFTY : e;
		}
	}

	cout << prim() << endl;
	return 0;
}