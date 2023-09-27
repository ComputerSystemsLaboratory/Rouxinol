#include <stdio.h>

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
const int N = 100;
const int INF = 2000000000;

int g[N + 1][N + 1];
int d[N + 1], p[N + 1], color[N + 1];
int n;

void prim()
{
	for (int i = 1; i <= n; i++)
	{
		color[i] = WHITE;
		d[i] = INF;
		p[i] = -1;
	}
	d[1] = 0;

	while (true)
	{
		int min = INF;
		int u = -1;
		for (int i = 1; i <= n; i++)
		{
			if (color[i] != BLACK && d[i] < min)
			{
				min = d[i];
				u = i;
			}
		}
		if (u == -1)
			break;

		color[u] = BLACK;

		for (int i = 1; i <= n; i++)
		{
			if (color[i] != BLACK && g[u][i] != INF && d[i] > g[u][i])
			{
				d[i] = g[u][i];
				color[i] = GRAY;
				p[i] = u;
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (p[i] != -1)
			sum += g[p[i]][i];
	}
	printf("%d\n", sum);
}

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &g[i][j]);
			if (g[i][j] == -1)
				g[i][j] = INF;
		}
	prim();

	return 0;
}

