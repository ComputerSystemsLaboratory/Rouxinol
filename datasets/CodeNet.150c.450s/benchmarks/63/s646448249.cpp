#include <algorithm>
#include <climits>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> i_i;
struct edge { int v, w; };

vector<int> dijkstra(int N, vector<vector<edge> >& G, int s) {
	vector<int> d(N, INT_MAX);
	d[s] = 0;
	priority_queue<i_i, vector<i_i>, greater<i_i> > pq;
	pq.push(i_i(0, s));
	while (pq.size()) {
		i_i p = pq.top(); pq.pop();
		int u = p.second;
		if (p.first > d[u]) continue;
		for (edge e: G[u])
			if (d[e.v] > d[u] + e.w) {
				d[e.v] = d[u] + e.w;
				pq.push(i_i(d[e.v], e.v));
			}
	}
	return d;
}


int main() {
	int N, M, s; cin >> N >> M >> s;
	vector<vector<edge> > G(N);
	while (M--) {
		int u, v, w; scanf("%d%d%d", &u, &v, &w);
		G[u].push_back(edge{v, w});
	}
	vector<int> d = dijkstra(N, G, s);
	for (int u = 0; u < N; u++)
		if (d[u] < INT_MAX) printf("%d\n", d[u]);
		else printf("INF\n");
}