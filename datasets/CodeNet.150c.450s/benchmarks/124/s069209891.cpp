#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cstring>
#define maxn 101
#define INF 0x3f3f3f3f
using namespace std;

int m[maxn][maxn] = {}, d[maxn] = {}, color[maxn] = {};
int n;

void Dijkstra()
{
	for (int i = 1; i < n; i++)
		d[i] = INF;
	d[0] = 0;
	while (true)
	{
		int mincost = INF,u;
		for(int i=0;i<n;i++)
			if (d[i] < mincost&&color[i]==0)
			{
				mincost = d[i];
				u = i;
			}
		if (mincost == INF)break;
		color[u] = 1;
		for (int i = 0; i < n; i++)
			if (color[i] == 0 && m[u][i] != -1)
				if (d[i] > d[u] + m[u][i])
					d[i] = d[u] + m[u][i];
	}
}
int main()
{
	scanf("%d", &n);
	memset(m, -1, sizeof(m));
	for (int i = 0; i < n; i++)
	{
		int u, k;
		scanf("%d %d", &u, &k);
		for (int i = 0; i < k;i++)
		{
			int v, c;
			scanf("%d%d", &v, &c);
			m[u][v] = c;
		}
	}
	Dijkstra();
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", i, d[i]);
	}
	return 0;
}
