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
static const ll MAX_M = 100001;

struct edge { int to, cost; };
typedef pair<ll, ll> P;
int V;
vector<edge> G[MAX_N];
ll d[MAX_N];
priority_queue<P, vector<P>, greater<P>> que;

void dijkstra(int s) {
	fill(d, d + V, INF);
	d[s] = 0;
	que.push(P(0, s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;
		if (d[v] < p.first)continue;
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
	ll E, r;
	cin >> V >> E >> r;

	rep(i, 0, E) {
		int s, t, d; cin >> s >> t >> d;
		edge *e = new edge();
		e->to = t;
		e->cost = d;

		G[s].push_back(*e);
	}

	dijkstra(r);

	rep(i, 0, V) {
		if (d[i] == INF)cout << "INF" << endl;
		else cout << d[i] << endl;
	}
	return 0;
}
