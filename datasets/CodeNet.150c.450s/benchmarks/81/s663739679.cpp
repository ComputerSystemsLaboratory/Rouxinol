#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX 100
#define INF 0x3f3f3f3f
using namespace std;
struct edge {
	int from, to, cost;
	edge(int a,int b,int c) {
		from = a;
		to = b;
		cost = c;
	}
};
typedef pair<int, int> P;
P fun(int s, int V, int E, vector<edge> es) {
	int d[MAX];
	fill(d, d + V, INF);
	d[s] = 0;
	while (true) {
		bool update = false;
		for (int i = 0; i<es.size(); i++) {
			edge e = es[i];
			if (d[e.from] != INF && d[e.to]>d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if (!update)
			break;
	}
	int sum = 0;
	for (int i = 0; i<V; i++)
		sum += d[i];
	return P(sum, s);
}
P cmp(P a, P b) {
	if (a.first == b.first)
		return a.second<b.second ? a : b;
	return a.first<b.first ? a : b;
}
int  main() {
	ios::sync_with_stdio(0);
	vector<edge> es;
	int n;
	while (cin >> n && n) {
		es.clear();
		P res = P(INF, INF);
		int a, b, c, V=0;
		for (int i = 0; i< n; i++) {
			cin >> a >> b >> c;
			es.push_back(edge(a, b, c));
			es.push_back(edge(b, a, c));
			V = max(max(a, b), V);
		}
		for (int j = 0; j<n; j++)
			res = cmp(res, fun(j, V+1, es.size(), es));
		cout << res.second << " " << res.first << endl;
	}
	return 0;
}
