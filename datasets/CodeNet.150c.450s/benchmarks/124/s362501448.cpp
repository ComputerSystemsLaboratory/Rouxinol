#include<iostream>
#include<vector>
using namespace std;
const int MAX = 100;
const int INF = 10000000;
int n, G[MAX][MAX];
int dis[MAX];
bool Flag[MAX] = { false };
void init()
{
	for (int i = 0; i < n; i++)
		dis[i] = G[0][i];
	Flag[0] = true;
}
void dijkstra()
{
	for (int k = 1; k <= n - 1; k++)
	{
		int min = INF;
		int u;
		for (int j = 0; j < n; j++)
			if (dis[j] > 0 && dis[j] < INF && !Flag[j] && dis[j] < min)
			{
				min = dis[j];
				u = j;
			}
		Flag[u] = true;
		for (int v = 0; v < n; v++)
			if (!Flag[v] && dis[u]+G[u][v] < dis[v])
				dis[v] = dis[u] + G[u][v];
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
				G[i][j] = INF;
			else
				G[i][j] = 0;
	for (int i = 0; i < n; i++)
	{
		int u, d;
		cin >> u >> d;
		for (int j = 0; j < d; j++)
		{
			int v, w;
			cin >> v >> w;
			G[u][v] = w;
		}
	}
	init();
	dijkstra();
	for (int i = 0; i < n; i++)
		cout << i << " " << dis[i] << endl;
}

