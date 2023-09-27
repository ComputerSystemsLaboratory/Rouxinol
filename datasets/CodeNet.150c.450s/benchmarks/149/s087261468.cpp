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
ll n, q;

ll par[MAX_N];
ll rak[MAX_N];

void init_uf(ll n) {
	rep(i, 0, n) {
		par[i] = i;
		rak[i] = 0;
	}
}
ll find(ll n) {
	if (n == par[n]) {
		return n;
	}
	else {
		return par[n] = find(par[n]);
	}
}
void unite(ll x, ll y) {
	x = find(x);
	y = find(y);

	if (x == y) return;
	if (rak[x] < rak[y]) {
		par[x] = y;
	}
	else {
		par[y] = x;
		if (rak[x] == rak[y])rak[x]++;
	}
}

bool same(ll x, ll y) {
	return find(x) == find(y);
}
int main() {
	cin >> n >> q;
	init_uf(n);

	rep(i, 0, q) {
		ll com, x, y; cin >> com >> x >> y;
		if (com == 0) {//unite
			unite(x, y);
		}
		else {//same
			if (same(x, y)) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}

	return 0;
}
