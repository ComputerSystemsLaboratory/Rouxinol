#include <queue>
#include <cstdio>
#include <vector>
using namespace std;
int V, s, t, p, q, d[100]; vector<pair<int, int> > G[100];
int main() {
	scanf("%d", &V);
	for(int i = 0; i < V; i++) {
		scanf("%d%d", &s, &t);
		for(int j = 0; j < t; j++) {
			scanf("%d%d", &p, &q);
			G[i].push_back(make_pair(p, q));
		}
	}
	for(int i = 1; i < V; i++) d[i] = 999999999;
	priority_queue<pair<int, int> > que; que.push(make_pair(0, 0));
	while(!que.empty()) {
		int v = que.top().second; que.pop();
		for(int i = 0; i < G[v].size(); i++) {
			int u = G[v][i].first, w = G[v][i].second;
			if(d[u] > d[v] + w) {
				d[u] = d[v] + w;
				que.push(make_pair(-d[u], u));
			}
		}
	}
	for(int i = 0; i < V; i++) printf("%d %d\n", i, d[i]);
	return 0;
}