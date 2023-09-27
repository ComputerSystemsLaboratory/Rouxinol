#include<vector>
#include<iostream>
#include<algorithm>
#define MAX_V 100
#define INF 1e9
using namespace std;
int cost[MAX_V][MAX_V];
int d[MAX_V];
int used[MAX_V];
int V;//頂点の数

void dijkstra(int s)
{
	d[s] = 0;
	while (true)
	{
		int v = -1;
		for (int u = 0; u < V; u++)
		{
			if (!used[u] && (v == -1 || d[u] < d[v]))
			{
				v = u;
			}
		}
		if (v == -1)
		{
			break;
		}
		used[v] = true;
		for (int u = 0; u < V; u++)
		{
			d[u] = min(d[u], d[v] + cost[v][u]);
		}


	}
}

int main()
{
	
	cin >> V;
	for (int i = 0; i < MAX_V; i++)

	{
		d[i] = INF;
		used[i] = false;

	
	
	
	}
	for (int i = 0; i < MAX_V; i++)
	{
		for (int j = 0; j < MAX_V; j++)

		{
			cost[i][j] = INF;
		}
	}





	for (int i = 0; i < V; i++)
	{
		int u;
		cin >> u;
		int k;
		cin >> k;
		for (int i = 0; i < k; i++)

		{
			int v_to;
			cin >> v_to;
			int c;
			cin >> c;
			cost[u][v_to] = c;

		}
	}
	dijkstra(0);
	for (int i = 0; i < V; i ++ )
	{
		cout <<i<<" "<< d[i] << endl;
	}

}

