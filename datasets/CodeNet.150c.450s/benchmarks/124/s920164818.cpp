#include <bits/stdc++.h>
#define INF 1000000000
#define MAX_N 100
using namespace std;
int n;
int d[MAX_N];

struct edge {
	int to, cost;
	edge(int to_, int cost_) : to(to_), cost(cost_) {}
};
typedef pair<int, int> P;
vector<edge> G[MAX_N];

void Dijkstra(int start) {
	fill(d, d + n, INF);
	priority_queue<P, vector<P>, greater<P>> que;
	d[start] = 0;
	que.push(P(0, start));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;
		if (d[v] < p.first) continue;
		for (int i = 0; i < G[v].size(); i++) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0, u, k; i < n; i++) {
		cin >> u >> k;
		for (int j = 0, v, c; j < k; j++) {
			cin >> v >> c;
			G[u].push_back(edge(v, c));
		}
	}
	Dijkstra(0);
	for (int i = 0; i < n; i++) {
		cout << i << ' ' << d[i] << endl;
	}
	return 0;
}