#include <cstdio>           // printf(), scanf()
#include <vector>
#include <queue>            // priority_queue
#include <algorithm>        // fill()
#include <utility>          // pair

using namespace std;
static const int MAX_V = 100000;
static const long INF = 1L << 62;

typedef pair<long, int> P;
struct edge
{
	int to;
	int cost;
};

vector<edge> G[MAX_V];
int V;

void
dijkstra(int s)
{
	priority_queue<P, vector<P>, greater<P> > que;
	long d[MAX_V];

	fill(d, d + V, INF);
	d[s] = 0;
	que.push(P(0, s));

	while (!que.empty())
	{
		P p = que.top(); que.pop();
		int u = p.second;
		if (d[u] < p.first)
			continue;

		for (unsigned int v = 0; v < G[u].size(); ++v)
		{
			edge e = G[u][v];
			if (d[u] + e.cost < d[e.to])
			{
				d[e.to] = d[u] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}

	for (int u = 0; u < V; ++u)
	{
		if (d[u] == INF)
			printf("INF\n");
		else
			printf("%ld\n", d[u]);
	}
}

int
main(int argc, char** argv)
{
	edge e;
	int E;
	int r;
	int s, t, d;
	int i;

	scanf("%d %d %d", &V, &E, &r);
	for (i = 0; i < E; ++i)
	{
		scanf("%d %d %d", &s, &t, &d);
		e.to = t;
		e.cost = d;
		G[s].push_back(e);
	}

	dijkstra(r);
	return 0;
}