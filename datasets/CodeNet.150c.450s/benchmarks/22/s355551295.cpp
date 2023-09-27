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
int d[1000];
Edge e[2000];
int V, E, r;
bool flag;

int main()
{
	cin >> V >> E >> r;
	for (int i = 0; i < E; i++)
	{
		cin >> e[i].from >> e[i].to >> e[i].cost;
	}

	fill(d, d + V, INF);
	d[r] = 0;

	for (int i = 0; i < V; i++)
	{
		flag = true;
		for (int j = 0; j < E; j++)
		{
			if (d[e[j].from] != INF && d[e[j].to] > d[e[j].from] + e[j].cost)
			{
				flag = false;
				d[e[j].to] = d[e[j].from] + e[j].cost;
			}
		}
		if (flag) break;
		if (i == V - 1)
		{
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}

	for (int i = 0; i < V; i++)
	{
		if (d[i] == INF)
		{
			cout << "INF" << endl;
			continue;
		}
		cout << d[i] << endl;
	}

	return 0;
}