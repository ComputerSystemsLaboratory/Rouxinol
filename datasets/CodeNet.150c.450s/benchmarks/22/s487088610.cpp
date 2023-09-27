#include <iostream>
#include <vector>

using namespace std;
static const int INF = 1e9;
static const int SIZE = 1001;

struct edge
{
	int from;
	int to;
	int cost;
};

vector<edge> Edge;
int d[SIZE];

void solve()
{
	int V, E, r;
	cin >> V >> E >> r;
	if (V == 0 || E == 0)
	{
		cout << 0 << endl;
		return;
	}
	for (int i = 0; i < E; ++i)
	{
		edge e;
		cin >> e.from >> e.to >> e.cost;
		Edge.push_back(e);
	}
	for (int i = 0; i < V; ++i)
	{
		d[i] = INF;
	}
	d[r] = 0;
	int count = 0;
	bool update = true;
	while (update)
	{
		update = false;
		for (int i = 0; i < Edge.size(); ++i)
		{
			edge e = Edge[i];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost)
			{
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		++count;
		if (count == V)
		{
			cout << "NEGATIVE CYCLE" << endl;
			return;
		}
	}
	for (int i = 0; i < V; ++i)
	{
		if (d[i] == INF)
		{
			cout << "INF" << endl;
		}
		else
		{
			cout << d[i] << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}