#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <queue>
using namespace std;
const int INF = 1 << 30;
const int NIL = -1;
const int MAXN = 105;
int graph[MAXN][MAXN];
int vis[MAXN];
int d[MAXN];
int n;
void dijkstra(int s)
{
	for (int i = 0; i < n; ++i)
	{
		vis[i] = false;
		d[i] = graph[0][i];
	}
	vis[s] = true;
	d[s] = 0;
	while (true)
	{
		int minicost = INF;
		int id = -1;
		for (int i = 0; i < n; ++i)
		{
			if (!vis[i] && minicost > d[i])
			{
				minicost = d[i];
				id = i;
			}
		}
		if (minicost == INF)
			break;
		vis[id] = true;
		for (int i = 0; i < n; ++i)
		{
			if (!vis[i] && d[i] > d[id] + graph[id][i])
				d[i] = d[id] + graph[id][i];
		}
	}
}

int main(void)
{
		
	int k, s, e, w;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			graph[i][j] = INF;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d%d", &s, &k);
		while (k--)
		{
			scanf("%d %d", &e, &w);
			graph[s][e] = w;
		}
	}
	dijkstra(0);
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", i, d[i]);

	return 0;
}