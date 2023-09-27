#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#include <functional>
using namespace std;

typedef pair<int, int> P;

vector<P> edge[100000];
priority_queue<P, vector<P>, greater<P>> que;
int cost[100000];
int V, E, r;
const int INF = 999999999;


int main()
{
	cin >> V >> E >> r;

	for (int i = 0; i < E; i++)
	{
		int from, to, d;
		cin >> from >> to >> d;
		edge[from].push_back(P(to, d));
	}

	for (int i = 0; i < 100000; i++)
	{
		cost[i] = INF;
	}

	cost[r] = 0;
	que.push(P(r, 0));

	while (!que.empty())
	{
		P now = que.top();
		que.pop();

		for (int i = 0; i < edge[now.first].size(); i++)
		{
			int to = edge[now.first][i].first;
			int c = now.second + edge[now.first][i].second;
			if (cost[to] > c)
			{
				cost[to] = c;
				que.push(P(to, c));
			}
		}
	}

	for (int i = 0; i < V; i++)
	{
		if (cost[i] == INF)
		{
			cout << "INF" << endl;
			continue;
		}
		cout << cost[i] << endl;
	}

	return 0;
}