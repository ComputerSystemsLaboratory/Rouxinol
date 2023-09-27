#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
int n, m, r, s, t, f, d[100000]; vector<pair<int, int> > g[100000];
int main() {
	scanf("%d%d%d", &n, &m, &r);
	for(int i = 0; i < m; i++) {
		scanf("%d%d%d", &s, &t, &f);
		g[s].push_back(make_pair(t, f));
	}
	for(int i = 0; i < n; i++) d[i] = 999999999; d[r] = 0;
	priority_queue<pair<int, int> > que; que.push(make_pair(0, r));
	while(!que.empty()) {
		int v = que.top().second; que.pop();
		for(int i = 0; i < g[v].size(); i++) {
			int u = g[v][i].first;
			int e = g[v][i].second;
			if(d[u] > d[v] + e) {
				d[u] = d[v] + e;
				que.push(make_pair(-d[u], u));
			}
		}
	}
	for(int i = 0; i < n; i++) {
		if(d[i] != 999999999) {
			printf("%d\n", d[i]);
		}
		else {
			printf("INF\n");
		}
	}
	return 0;
}