#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, ll, ll> t4;
typedef tuple<ll, ll, ll, ll, ll> t5;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

using namespace std;

static const ll INF = 1e15;

struct warshall_floyd {
	static void solve(vector<vector<ll>>& d) {
		int n = d.size();
		rep(k, n) {
			rep(i, n) {
				rep(j, n) {
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
	}
};

int main() {
	int n;
	cin >> n;
	vector<vector<ll>> dist(n, vector<ll>(n, INF));
	rep(i, n) {
		dist[i][i] = 0;
	}
	rep(i, n) {
		int a, v;
		cin >> a >> v;
		rep(j, v) {
			int t;
			cin >> t;
			t--;
			dist[i][t] = 1;
		}
	}
	warshall_floyd::solve(dist);
	rep(i, n) {
		if (dist[0][i] == INF) {
			cout << i + 1 << " " << -1 << endl;
		}
		else {
			cout << i + 1 << " " << dist[0][i] << endl;
		}
	}
	return 0;
}

