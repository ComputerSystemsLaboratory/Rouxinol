#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <string.h>

using namespace std;
static const int INF = 1e9;
static const int SIZE = 10001;
typedef pair<int, int> P;
struct edge
{
	int to;
	int cost;
};

bool isUsed[SIZE];
vector<edge> G[SIZE];

void solve()
{
	int V, E;
	cin >> V >> E;
	for (int i = 0; i < E; ++i)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		edge e1, e2;
		e1.to = to;
		e1.cost = cost;
		e2.to = from;
		e2.cost = cost;
		G[from].push_back(e1);
		G[to].push_back(e2);
	}
	memset(isUsed, 0, sizeof(isUsed));
	int ans = 0;
	priority_queue<P, vector<P>, greater<P> > pque;
	pque.push(P(0, 0));
	while (!pque.empty())
	{
		P p = pque.top();
		pque.pop();
		int v = p.second;
		if (isUsed[v])
		{
			continue;
		}
		isUsed[v] = true;
		ans += p.first;
		for (int i = 0; i < G[v].size(); ++i)
		{
			edge e = G[v][i];
			pque.push(P(e.cost, e.to));
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}