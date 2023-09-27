#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <string.h>

using namespace std;
static const int INF = 1e9;
typedef pair<int, int> P;
struct edge
{
	int to;
	int cost;
};

int d[101];
vector<edge> G[101];

void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			int to, cost;
			cin >> to >> cost;
			edge e1;
			e1.to = to;
			e1.cost = cost;
			G[u].push_back(e1);
		}
	}
	for (int i = 0; i < 101; ++i)
	{
		d[i] = INF;
	}
	d[0] = 0;
	priority_queue<P, vector<P>, greater<P> > pque;
	pque.push(P(0, 0));
	while (!pque.empty())
	{
		P p = pque.top();
		pque.pop();
		int v = p.second;
		for (int i = 0; i < G[v].size(); ++i)
		{
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost)
			{
				d[e.to] = d[v] + e.cost;
				pque.push(P(d[e.to], e.to));
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << i << " " << d[i] << endl;
	}
}

int main()
{
	solve();
	return(0);
}