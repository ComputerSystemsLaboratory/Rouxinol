#include <iostream>
#include <algorithm>
using namespace std;

int V, E;
long long int cost[100][100]; //cost[from][to] -> cost
const long long int INF = 999999999999;

void warshallFloyd()
{
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			for (int k = 0; k < V; k++)
			{
				if (cost[j][i] == INF || cost[i][k] == INF) continue;
				cost[j][k] = min(cost[j][k], cost[j][i] + cost[i][k]);
			}
		}
	}
}

int main()
{
	cin >> V >> E;

	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (i == j) cost[i][j] = 0;
			else cost[i][j] = INF;
		}
	}
	for (int i = 0; i < E; i++)
	{
		int from, to, c;
		cin >> from >> to >> c;
		cost[from][to] = c;
	}

	warshallFloyd();

	for (int i = 0; i < V; i++)
	{
		if (cost[i][i] < 0)
		{
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (cost[i][j] == INF) cout << "INF";
			else cout << cost[i][j];
			if (j != V - 1) cout << " ";
		}
		cout << endl;
	}

	return 0;
}