#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define inf 1000000000000000
#define mod 1000000007
typedef pair<int, int> P;

bool prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)return false;
	}
	return n != 1;
}
int gcd(int x, int y) {
	if (y == 0)return x;
	return gcd(y, x % y);
}
int lcm(int x, int y) {
	return x / gcd(x, y) * y;
}

struct edge {
	int from, to, cost;
};

edge g[3000];
int d[1050];
int V, E, S;

signed main() {
	cin >> V >> E >> S;
	rep(i, E) {
		cin >> g[i].from >> g[i].to >> g[i].cost;
	}
	fill(d, d + V, inf);
	d[S] = 0;
	for (int i = 0; i < V; i++) {
		bool update = false;
		rep(j, E) {
			edge e = g[j];
			if (d[e.from] != inf && d[e.from] + e.cost < d[e.to]) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if (!update) {
			break;
		}
		if (i == V - 1) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	rep(i, V) {
		if (d[i] == inf) {
			cout << "INF" << endl;
		}
		else {
			cout << d[i] << endl;
		}
	}

	return 0;
}

