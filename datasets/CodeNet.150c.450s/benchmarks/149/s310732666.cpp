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
//Union Find /////////////////////////////////////////
//////////////////////////////////////////////////////
int par[MAX_N];
int rak[MAX_N];

void init(int n) {
	rep(i, 0, n) {
		par[i] = i;
		rak[i] = 0;
	}
}

int find(int x) {
	if (par[x] == x)return x;
	else return par[x] = find(par[x]);
}

void unite(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)return;

	if (rak[x] < rak[y]) par[x] = y;
	else {
		par[x] = y;
		if (rak[x] == rak[y]) rak[x]++;
	}
}

bool same(int x, int y) {
	return find(x) == find(y);
}
////////////////////////////////////////////////////

int main() {
	ll n, q; cin >> n >> q;
	init(n);

	rep(i, 0, q) {
		ll a, b, c; cin >> a >> b >> c;
		if (a == 0) {
			unite(b, c);
		}
		else if (a == 1) {
			cout << (same(b, c) ? 1 : 0) << endl;
		}
	}

	return 0;
}
