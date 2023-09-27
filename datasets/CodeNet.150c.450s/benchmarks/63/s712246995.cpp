#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;
typedef pair<int, int> pii;
namespace MyLib {

	class Dijkstra {
		struct edge {
			int to, cost;
			edge(int to_, int cost_) : to(to_), cost(cost_) {}
		};
		bool isdirected;
		vector<int> d;
		vector<vector<edge>> G;
		int V, E;
	public:
		Dijkstra(int _V, bool _isdirected = true) : isdirected(_isdirected), V(_V), E(0), d(_V), G(_V) { }
		void add(int a, int b, int c) {
			G[a].push_back(edge(b, c));
			if (!isdirected) G[b].push_back(edge(a, c));
			E++;
		}
		void calc(int start) {
			fill(d.begin(), d.end(), INF);
			priority_queue<pii, vector<pii>, greater<pii>> que;
			d[start] = 0;
			que.push(pii(0, start));

			while (!que.empty()) {
				pii p = que.top(); que.pop();
				int v = p.second;
				if (d[v] < p.first) continue;
				for (size_t i = 0; i < G[v].size(); i++) {
					edge e = G[v][i];
					if (d[e.to] > d[v] + e.cost) {
						d[e.to] = d[v] + e.cost;
						que.push(pii(d[e.to], e.to));
					}
				}
			}
		}
		int dist(int to) {
			return d[to];
		}
	};
}
using namespace MyLib;
int main()
{
	int v, e, r;
	cin >> v >> e >> r;
	Dijkstra dk(v);
	for (int i = 0, s, t, d; i < e; i++) {
		cin >> s >> t >> d;
		dk.add(s, t, d);
	}
	dk.calc(r);
	for (int i = 0; i < v; i++) {
		if (dk.dist(i) == INF)
			cout << "INF" << endl;
		else
			cout << dk.dist(i) << endl;
	}
	return 0;
}