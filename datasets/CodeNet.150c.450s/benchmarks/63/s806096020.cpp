
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;


struct edge
{
	int to;
	long long cost;
	edge(int to_, long long cost_) :
		to(to_), cost(cost_) {}
};
const long long INF = 123456789012345;
using P = pair<long long, int>;//first:cost,second:vertice
void dijkstra(vector<edge>graph_[],long long dist[], int n_, int s_)
{
	priority_queue<P, vector<P>, greater<P>>que;
	que.push({ 0,s_ });
	fill(dist, dist + n_, INF);
	dist[s_] = 0ll;
	while (!que.empty())
	{
		auto q = que.top();
		que.pop();
		long long thd = q.first;
		int thv = q.second;
		if (thd > dist[thv])
		{
			continue;
		}
		for (auto ed : graph_[thv])
		{
			if (dist[ed.to] > ed.cost + thd)
			{
				dist[ed.to] = ed.cost + thd;
				que.push({ dist[ed.to],ed.to });
			}
		}
	}
}

vector<edge>graph[123456];
long long dist[123456];

int main(void)
{
	int vn, en, r;
	scanf("%d %d %d", &vn, &en, &r);
	for (int i = 0; i < en; ++i)
	{
		int s, t; long long d;
		scanf("%d %d %lld", &s, &t, &d);
		graph[s].push_back(edge(t, d));
	}
	dijkstra(graph, dist, vn, r);
	for (int j = 0; j < vn; ++j)
	{
		if (dist[j] >= INF)printf("INF\n");
		else printf("%lld\n", dist[j]);
	}
	return 0;
}