#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

class Bellman_Ford {
	struct edge {
		int from, to, cost;
		edge(int _from, int _to, int _cost) : from(_from), to(_to), cost(_cost) {}
	};
	vector<edge> es;
	bool isdirected;
	vector<int> d;
	int V;
public:
	Bellman_Ford(int _V, bool _isdirected = true) : isdirected(_isdirected), V(_V), d(_V) { }
	void add(int a, int b, int c) {
		es.push_back(edge(a, b, c));
		if (!isdirected) es.push_back(edge(b, a, c));
	}
	bool calc(int start) {
		fill(d.begin(), d.end(), INF);
		d[start] = 0;
		bool update;
		for (int i = 0; i < V; i++) {
			update = false;
			for (auto &e : es) {
				if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
					d[e.to] = d[e.from] + e.cost;
					update = true;
				}
			}
			if (!update) return false;
		}
		return true;
	}
	int dist(int to) {
		return d[to];
	}
};

int main()
{
	int V, E, r;
	cin >> V >> E >> r;
	Bellman_Ford bf(V);
	for (int i = 0, s, t, d; i < E; i++) {
		cin >> s >> t >> d;
		bf.add(s, t, d);
	}

	if (!bf.calc(r)) {
		for (int i = 0; i < V; i++) {
			if (bf.dist(i) == INF)
				cout << "INF" << endl;
			else
				cout << bf.dist(i) << endl;
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}