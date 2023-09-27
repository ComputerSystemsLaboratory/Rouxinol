#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define INF 1<<30
#define LINF 1LL<<60

struct edge {
	ll u;
	ll v;
	ll cost;
	edge() {}
	edge(ll u, ll v, ll c) :u(u), v(v), cost(c) {}
};

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	ll V, E; cin >> V >> E;
	vector<vector<edge>> G(V);
	for (int i = 0; i < E;i++) {
		ll s, t, w; cin >> s >> t >> w;
		G[s].push_back(edge(s, t, w));
		G[t].push_back(edge(t, s, w));
	}

	vector<int> checked(V, 0);
	vector<ll> min_d(V, INF);
	ll ans = 0;
	min_d[0] = 0;
	while (true) {
		ll next = -1;
		for (int i = 0; i < V;i++) {
			if (checked[i] == 1)continue;
			if (next == -1 || min_d[i] < min_d[next]) {
				next = i;
			}
		}
		if (next == -1)break;
		checked[next] = 1;
		ans += min_d[next];
		for (auto e : G[next]) {
			min_d[e.v] = min(min_d[e.v], e.cost);
		}
	}

	/*for (int i = 0; i < V;i++) {
		if (checked[i] == 0) {
			cout << "cann't create minimum spanning tree" << endl;
			return 0;
		}
	}*/
	cout << ans << endl;
	return 0;
}