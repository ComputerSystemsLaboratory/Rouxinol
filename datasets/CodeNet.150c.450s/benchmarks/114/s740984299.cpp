#include <cstdio>
using namespace std;
#define MAXN 100
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAXN][MAXN];

int prim()
{
	int d[MAXN], p[MAXN], color[MAXN];
	int u, minv;
	for(int i = 0; i < n; i++)
	{
		d[i] = INFTY;
		p[i] = -1;
		color[i] = WHITE;
		//printf("===\n");
	}
	d[0] = 0;
	while(true)
	{
		u = -1;
		minv = INFTY;
		for(int i = 0; i < n; i++)
		{
			if(color[i] != BLACK && d[i] < minv)
			{
				u = i;
				minv = d[i];
				//printf("%d \n", u);
			}
		}
		if(u == -1)
		{
			break;
		}
		color[u] = BLACK;
		for(int v = 0; v < n; v++)
		{
			if(color[v] != BLACK && M[u][v] != INFTY)
			{
				if(d[v] > M[u][v])
				{
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(p[i] != -1)
		{
			sum += M[i][p[i]];
		}
	}
	return sum;
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int e;
			scanf("%d", &e);
			M[i][j] = (e == -1) ? INFTY : e;
		}
	}
	printf("%d\n", prim());
	return 0;
}

