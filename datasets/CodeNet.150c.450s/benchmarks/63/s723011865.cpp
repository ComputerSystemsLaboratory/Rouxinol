#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stdio.h>
#include <math.h>


using namespace std;

typedef long long ll;

typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<ll> vll;

typedef pair<int, int> P;

typedef queue<int> qi;
typedef queue<string> qs;


#define rep(i, n) for(int i=0; i<(n); ++i)
#define repp(i, a, b) for(int i = (a); i <= (b); i++)
#define Rep(i, n) for(int i=n; i >= 0; i--)

#define all(v) v.begin(), v.end()
//sort( all(v) )　などと使える


const ll INF = 10000000000;

int main() {
	int V, E; ll r; cin >> V >> E >> r;
	vector<vector<pair<int, ll>>> G(V);
	rep(i, E) {
		int s, t, d; cin >> s >> t >> d;
		G[s].push_back(make_pair(t, d));
	}

	vector<ll> dist(V, INF);
	dist[r] = 0;

	priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<pair<int, ll>>> que;
	que.push(make_pair(r, 0));

	while (!que.empty()) {
		pair<int, ll> p = que.top(); que.pop();

		int v = p.first;

		rep(i, G[v].size()) {
			int nv = G[v][i].first;
			ll cost = G[v][i].second;

			if (dist[nv] > dist[v] + cost) {
				dist[nv] = dist[v] + cost;
				que.push(make_pair(nv, dist[nv]));
			}
		}
	}

	rep(i, V) {
		ll d = dist[i];
		if (d != INF) cout << d << endl;
		else cout << "INF" << endl;
	}
}
