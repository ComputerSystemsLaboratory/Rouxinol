#include<iostream>
#define MAX 100
#define INFTY 1<<21
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1

int M[MAX][MAX];
int d[MAX], color[MAX];
int n;

// ダイクストラのアルゴリズムを用いて、最短経路上の各頂点まで道のりを求めて出力する。
void dijkstra()
{
	for (int i = 0; i < n; i++)
	{
		d[i] = INFTY;
		color[i] = WHITE;
	}

	d[0] = 0;
	color[0] = GRAY;

	while (true)
	{
		int u = NIL;
		int minv = INFTY;
		for (int i = 0; i < n; i++)
		{
			if (color[i] != BLACK && d[i] < minv)
			{
				u = i;
				minv = d[i];
			}
		}

		if (u == NIL) break;

		color[u] = BLACK;

		for (int v = 0; v < n; v++)
		{
			if (color[v] != BLACK && M[u][v] != INFTY)
			{
				if (d[u] + M[u][v] < d[v])
				{
					d[v] = d[u] + M[u][v];
					color[v] = GRAY;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		int x = d[i] == INFTY ? -1 : d[i];
		std::cout << i << " " << x << std::endl;
	}

}

int main()
{
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			M[i][j] = INFTY;
		}
	}

	int u, k, v, c;
	for (int i = 0; i < n; i++)
	{
		std::cin >> u >> k;

		for (int j = 0; j < k; j++)
		{
			std::cin >> v >> c;

			M[u][v] = c;
		}
	}

	dijkstra();
}

