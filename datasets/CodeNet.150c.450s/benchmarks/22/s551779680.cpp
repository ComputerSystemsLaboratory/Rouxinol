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

//////////////////////////////////////////////////////
//BellmanFord/////////////////////////////////////////
//////////////////////////////////////////////////////
struct edge { int from, to, cost; };
edge es[MAX_M];
ll d[MAX_N];
int V, E;

void bellmanFord(int s) {
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
bool find_negative_loop() {
	rep(i, 0, V)d[i] = 0;
	rep(i, 0, V) {
		rep(j, 0, E) {
			edge e = es[j];
			if (d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				if (i == V - 1) return true;
			}
		}
	}
	return false;
}
///////////////////////////////////////////////////////
int main() {
	ll r; cin >> V >> E >> r;
	rep(i, 0, E) {
		ll s, t, d; cin >> s >> t >> d;
		es[i].from = s;
		es[i].to = t;
		es[i].cost = d;
	}

	//if (find_negative_loop()) {
	//	cout << "NEGATIVE CYCLE" << endl;
	//	return 0;
	//}
	bellmanFord(r);

	rep(i, 0, V) {
		if (d[i] == INF)cout << "INF" << endl;
		else cout << d[i] << endl;
	}
	return 0;
}
