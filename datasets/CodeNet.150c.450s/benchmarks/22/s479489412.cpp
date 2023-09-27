#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
typedef long long  ll;
#define rep(i,s,n)for(ll i=s;i<n;i++)
#define repe(i,s,n)for(ll i=s;i<=n;i++)

static const ll MOD = 1e9 + 7;
static const ll INF = (ll)1 << 62;

static const ll MAX_N = 100001;
static const ll MAX_M = 200001;

ll V, E;
struct edge {
	ll from, to, cost;
};
edge es[MAX_M];
ll d[MAX_N];
void bellmanford(ll s) {
	fill(d, d + V, INF);
	d[s] = 0;
	ll cnt = 0;
	while (1) {
		cnt++;
		bool update = false;
		rep(i, 0, E) {
			edge e = es[i];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				if (cnt == V - 1) {
					cout << "NEGATIVE CYCLE" << endl;
					exit(0);
				}
				update = true;
			}
		}
		if (!update) break;
	}
}
vector<edge> G[MAX_N];
typedef pair<ll, ll> P;
priority_queue<P, vector<P>, greater<P>> que;

void dijkstra(ll s) {
	fill(d, d + V, INF);
	d[s] = 0;
	que.push(P(0, s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (p.first > d[v])continue;
		rep(i, 0, G[v].size()) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

int main() {
	ll r; cin >> V >> E >> r;
	//rep(i, 0, E) {
	//	ll s, t, d; cin >> s >> t >> d;
	//	G[s].push_back(edge{ t, d });
	//	//G[t].push_back(edge{ s, d });
	//}
	rep(i, 0, E) {
		ll s, t, d; cin >> s >> t >> d;
		es[i].from = s;
		es[i].to = t;
		es[i].cost = d;
	}

	//dijkstra(r);
	bellmanford(r);

	rep(i, 0, V) {
		if (d[i] == INF)cout << "INF" << endl;
		else cout << d[i] << endl;
	}

	return 0;
}
