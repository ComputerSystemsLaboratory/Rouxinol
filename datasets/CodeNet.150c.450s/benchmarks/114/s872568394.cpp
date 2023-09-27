#include <iostream>

using namespace std;

#define INT_MIN     (-2147483647 - 1) /* minimum (signed) int value */
#define INT_MAX       2147483647    /* maximum (signed) int value */
static const int MAX = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, m[MAX][MAX];

int prim()
{
	int color[MAX], p[MAX], d[MAX];
	int u, minv;

	for (int i = 0; i < n; ++i)
	{
		color[i] = WHITE;
		p[i] = -1;
		d[i] = INT_MAX;
	}

	d[0] = 0;

	while (1)
	{
		minv = INT_MAX;
		u = -1;
		for (int i = 0; i < n; ++i)
		{
			if (d[i] < minv && color[i] != BLACK)
			{
				u = i;
				minv = d[i];
			}
		}

		if (-1 == u) 
			break;
		color[u] = BLACK;

		for (int i = 0; i < n; ++i)
		{
			if (m[u][i] < d[i] && color[i] != BLACK)
			{
				d[i] = m[u][i];
				p[i] = u;
				color[i] = GRAY;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (p[i] != -1) 
			sum += m[p[i]][i];
	}
	return sum;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int e; cin >> e;
			m[i][j] = (e == -1) ? INT_MAX : e;
		}
	}
	cout << prim() << endl;
}