#include<iostream>
#define MAX 100
#define INFTY 1<<21
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1

int M[MAX][MAX];
int d[MAX], p[MAX], color[MAX];
int n;

// プリムのアルゴリズムを用いて、最小全域木の辺の重みの総和を返す
int prim()
{
	for (int i = 0; i < n; i++)
	{
		d[i] = INFTY;
		p[i] = NIL;
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
				if (M[u][v] < d[v])
				{
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] != NIL) sum += d[i];
	}

	return sum;
}

int main()
{
	std::cin >> n;

	int x;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> x;
			M[i][j] = x == -1 ? INFTY : x;
		}
	}

	std::cout << prim() << std::endl;

}

/*
木とは、閉路を持たないグラフ。
全域木とは、グラフのすべての頂点を含み木である限りできるだけ多くの辺を持つグラフ。
最小全域木とは、全域木の中で辺の重みの総和が最小のグラフ。
*/


