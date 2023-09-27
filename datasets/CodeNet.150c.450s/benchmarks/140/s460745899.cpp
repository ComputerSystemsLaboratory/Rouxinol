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

ll V;
ll d[MAX_N] = {};
struct edge { ll to, cost; };
typedef pair<ll, ll> P;
vector<edge> G[MAX_N];
priority_queue <P, vector<P>, greater<P>> que;
bool mst[MAX_N];

ll cost = 0;

bool complete() {
	ll cnt = 0;
	rep(i, 0, V) {
		if (mst[i])cnt++;
	}
	return (cnt == V);
}

void prim(ll s) {
	fill(d, d + V, INF);
	d[s] = 0;
	que.push(P(0, s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		ll v = p.second;
		if (mst[v])continue;

		cost += p.first;
		mst[v] = true;

		rep(i, 0, G[v].size()) {
			edge e = G[v][i];
			if (!mst[e.to]) {
				que.push(P(e.cost, e.to));
			}
		}

		if (complete())break;
	}
}

int main() {
	//freopen("C://testcase//in7.txt", "r", stdin);

	ll E; cin >> V >> E;
	rep(i, 0, E) {
		ll s, t, d; cin >> s >> t >> d;
		G[s].push_back(edge{ t,d });
		G[t].push_back(edge{ s,d });
	}

	prim(0);

	cout << cost << endl;

	return 0;
}
