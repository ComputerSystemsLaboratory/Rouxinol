#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Edge
{
public:
	int from, to, cost;
	Edge(){}
};

const int INF = 999999999;
int cost[1000];
Edge e[2000];
int V, E, r;
bool isUpdated;

bool bellmanford()
{
	fill(cost, cost + V, INF);
	cost[r] = 0;

	for (int i = 0; i < V; i++)
	{
		isUpdated = false;
		for (int j = 0; j < E; j++)
		{
			if (cost[e[j].from] == INF) continue;
			if (cost[e[j].to] <= cost[e[j].from] + e[j].cost) continue;
			isUpdated = true;
			cost[e[j].to] = cost[e[j].from] + e[j].cost;
		}
		if (!isUpdated) return true;
	}
	return false;
}

int main()
{
	cin >> V >> E >> r;
	for (int i = 0; i < E; i++)
	{
		cin >> e[i].from >> e[i].to >> e[i].cost;
	}

	if (bellmanford())
	{
		for (int i = 0; i < V; i++)
		{
			if (cost[i] == INF)
			{
				cout << "INF" << endl;
				continue;
			}
			cout << cost[i] << endl;
		}
	}
	else
	{
		cout << "NEGATIVE CYCLE" << endl;
	}

	return 0;
}