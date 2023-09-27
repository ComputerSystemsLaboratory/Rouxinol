#include<vector>
#include<iostream>
#include<queue>
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
using pii = pair<int, int>;
constexpr int INF = 1e9;

struct edge
{
	int from, to, cost;
	bool operator>(const edge& other)const {
		return cost > other.cost;
	}
};

using edges = vector<edge>;
using graph = vector<edges>;

void add_edge(graph& g, int from, int to, int cost)
{
	g[from].push_back(edge{ from,to,cost });
	g[to].push_back(edge{ to,from,cost });
}

edges prim(const graph& g)
{
	const int N = g.size();
	vector<bool> used(N);
	used[0] = true;
	priority_queue < edge, vector<edge>, greater<edge >>que;
	for (auto e : g[0])
	{
		que.push(e);
	}
	edges mst;
	while (!que.empty())
	{
		auto e = que.top();
		que.pop();
		if (used[e.to])
		{
			continue;
		}
		mst.push_back(e);
		
		used[e.to] = true;
		for (auto new_e : g[e.to])
		{
			que.push(new_e);
		}
	}
	return mst;
}

int main()
{
	int V, E;
	cin >> V >> E;
	graph g(V);
	for (int i = 0; i < E; i++)
	{
		int s, t, w;
		cin >> s >> t >> w;
		add_edge(g, s, t, w);
	}
	const auto mst = prim(g);
	int ans = 0;
	for (auto& e : mst)
	{
		ans += e.cost;
	}
	cout << ans << endl;
}



