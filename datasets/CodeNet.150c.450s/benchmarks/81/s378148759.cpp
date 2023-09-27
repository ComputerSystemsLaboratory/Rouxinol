#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>

using namespace std;

static const int INF = 1e9;
int d[11];
struct edge
{
	int from;
	int to;
	int cost;
};

void BellmanFord()
{
	int n;
	while (cin >> n, n)
	{
		vector<edge> E;
		for (int i = 0; i < n; ++i)
		{
			int from, to, cost;
			cin >> from >> to >> cost;
			edge e1, e2;
			e1.from = e2.to = from;
			e1.to = e2.from = to;
			e1.cost = e2.cost = cost;
			E.push_back(e1);
			E.push_back(e2);
		}
		int minPos = 0;
		int minSumCost = INF;
		for (int i = 0; i < 10; ++i)
		{			
			for (int j = 0; j < 10; ++j)
			{
				d[j] = INF;
			}
			d[i] = 0;
			bool update = true;
			while (update)
			{
				update = false;
				for (int j = 0; j < E.size(); ++j)
				{
					edge e = E[j];
					if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost)
					{
						d[e.to] = d[e.from] + e.cost;
						update = true;
					}
				}
			}
			int sum = 0;
			for (int j = 0; j < 10; ++j)
			{
				if (d[j] != INF)
				{
					sum += d[j];
				}
			}
			if (sum == 0)
			{
				continue;
			}
			if (minSumCost > sum)
			{
				minSumCost = sum;
				minPos = i;
			}
		}
		cout << minPos << " " << minSumCost << endl;
	}
}

typedef pair<int, int> P;
struct edge2
{
	int to;
	int cost;
};

void Dijkstra()
{
	int n;
	while (cin >> n, n)
	{
		vector<edge2> E[11];
		for (int i = 0; i < n; ++i)
		{
			int from, to, cost;
			cin >> from >> to >> cost;
			edge2 e1, e2;
			e1.to = to;
			e2.to = from;			
			e1.cost = e2.cost = cost;
			E[from].push_back(e1);
			E[to].push_back(e2);
		}
		int minPos = 0;
		int minSumCost = INF;
		for (int i = 0; i < 10; ++i)
		{
			priority_queue<P, vector<P>, greater<P> > que;
			for (int j = 0; j < 10; ++j)
			{
				d[j] = INF;
			}
			d[i] = 0;
			que.push(P(0, i));
			while (!que.empty())
			{
				P p = que.top();
				que.pop(); int v = p.second;
				if (d[v] < p.first)
				{
					continue;
				}
				for (int j = 0; j < E[v].size(); ++j)
				{
					edge2 e = E[v][j];
					if (d[e.to] > d[v] + e.cost)
					{
						d[e.to] = d[v] + e.cost;
						que.push(P(d[e.to], e.to));
					}
				}
			}
			int sum = 0;
			for (int j = 0; j < 10; ++j)
			{
				if (d[j] != INF)
				{
					sum += d[j];
				}
			}
			if (sum == 0)
			{
				continue;
			}
			if (minSumCost > sum)
			{
				minSumCost = sum;
				minPos = i;
			}
		}
		cout << minPos << " " << minSumCost << endl;
	}
}

int dist[11][11];
void WarshallFloyd()
{
	int n;
	while (cin >> n, n)
	{
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				dist[i][j] = INF;
			}
			dist[i][i] = 0;
		}
		for (int i = 0; i < n; ++i)
		{
			int from, to, cost;
			cin >> from >> to >> cost;
			dist[from][to] = cost;
			dist[to][from] = cost;
		}
		for (int k = 0; k < 10; ++k)
		{
			for (int i = 0; i < 10; ++i)
			{
				for (int j = 0; j < 10; ++j)
				{
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
		int minSumCost = INF;
		int minPos = 0;
		for (int i = 0; i < 10; ++i)
		{
			int sum = 0;
			for (int j = 0; j < 10; ++j)
			{
				if (dist[i][j] != INF)
				{
					sum += dist[i][j];
				}
			}
			if (sum == 0)
			{
				continue;
			}
			if (minSumCost > sum)
			{
				minSumCost = sum;
				minPos = i;
			}
		}
		cout << minPos << " " << minSumCost << endl;
	}
}

int main()
{
	//BellmanFord();
	Dijkstra();
	//WarshallFloyd();
	return(0);
}