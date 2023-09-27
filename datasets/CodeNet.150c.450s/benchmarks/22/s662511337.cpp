#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e9;

template <typename C, C inf>
class Bellman_Ford {
	struct edge {
		int from, to;
		C cost;
		edge(int _from, int _to, int _cost) : from(_from), to(_to), cost(_cost) {}
	};
	vector<edge> es;
	bool isdir;
	vector<C> d;
	int V;
public:
	Bellman_Ford(int _V, bool _isdirected = true) : isdir(_isdirected), V(_V), d(_V) { }
	void add(int a, int b, C c) {
		es.emplace_back(a, b, c);
		if (!isdir) es.emplace_back(b, a, c);
	}
	bool calc(int s) {
		fill(d.begin(), d.end(), inf);
		d[s] = C();
		bool update;
		for (int i = 0; i < V; i++) {
			update = false;
			for (auto &e : es) {
				if (d[e.from] == inf || d[e.to] <= d[e.from] + e.cost) continue;
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		return update;
	}
	vector<C> dist() {
		return d;
	}
};

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int V, E, r;
	cin >> V >> E >> r;
	Bellman_Ford<int, (int)1e9> bf(V);
	for (int i = 0; i < E; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		bf.add(s, t, d);
	}
	if (bf.calc(r)) {
		puts("NEGATIVE CYCLE");
	}
	else {
		auto d = bf.dist();
		for (int i = 0; i < V; i++) {
			if (d[i] == INF)
				puts("INF");
			else
				printf("%d\n", d[i]);
		}
	}
	return 0;
}