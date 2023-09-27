#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
#ifdef _MSC_VER
int getchar_unlocked() { return getchar(); }
#endif
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define FOR(i, m, n) for(int i=(m); i<(n); ++i)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define dump(x) cerr << #x << " = " << (x) << endl;
#define qp(f) [](auto i){return f;}
using LL=long long;
using VI=vector<int>;
using VL=vector<LL>;
using VS=vector<string>;
using VVI=vector<vector<int>>;
using PII=pair<int, int>;

struct Edge {
	int to, cost;
	Edge(int to, int cost) : to(to), cost(cost) {}
};
const int INF = 1'000'000'000;

int v, e, r;
vector<vector<Edge>> graph;
vector<int> dist;

bool BellmanFord() {
	dist[r] = 0;
	rep(i, v) {
		rep(j, v) {
			rep(k, sz(graph[j])) {
				Edge e = graph[j][k];
				if (dist[j] != INF && dist[e.to] > dist[j] + e.cost) {
					dist[e.to] = dist[j] + e.cost;
					if (i == v - 1)return true;
				}
			}
		}
	}
	return false;
}


int main() {
	cin >> v >> e >> r;
	graph.resize(v);
	dist = vector<int>(v, INF);

	rep(i, e) {
		int s, t, d;
		cin >> s >> t >> d;
		graph[s].pb({ t,d });
	}

	if (BellmanFord()) {
		puts("NEGATIVE CYCLE");
	}
	else {
		rep(i, v) {
			if (dist[i] == INF)puts("INF");
			else cout << dist[i] << endl;
		}
	}
}
