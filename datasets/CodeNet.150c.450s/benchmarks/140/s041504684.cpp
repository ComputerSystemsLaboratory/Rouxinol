#include<vector>
#include<iostream>
#include<functional>
#include<queue>
using namespace std;

struct edge
{
	int from, to, cost;
	bool operator>(const edge& other)const {
		return cost > other.cost;
	}
};

using edges = vector <edge>;
using graph = vector<edges>;

void add_edge(graph& g, int from, int to, int cost)
{
	g[from].push_back(edge{ from,to,cost });
	g[to].push_back(edge{ to,from,cost });
}

edges prim(graph& g)
{
	const int N = g.size();
	vector<bool>used(N);
	used[0] = true;
	priority_queue<edge, vector<edge>, greater<edge>>p_que;
	for (auto e : g[0])
	{
		p_que.push(e);
	}
	edges mst;
	while (!p_que.empty())
	{
		auto e = p_que.top();
		p_que.pop();
		if (used[e.to])
		{
			continue;
		}
		mst.push_back(e);
		used[e.to] = true;
		for (auto new_e : g[e.to])
		{
			p_que.push(new_e);
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
		int from, to, cost;
		cin >> from >> to >> cost;
		add_edge(g, from, to, cost);
	}
	const auto mst = prim(g);
	int ans = 0;
	for (auto e : mst)
	{
		ans += e.cost;

	}
	cout << ans << endl;

}


