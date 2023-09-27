#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <tuple>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define show(a, n) rep(i,n) {cout<<a[i]<<' ';} cout<<endl
#define show2(a, n, m) rep(i, n) { rep(j, m) {cout << a[i][j] << ' ';} cout << endl;} 
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<long long, long long> pll;
typedef long double ld;

const int INF = 1 << 30;
const long long INFL = 1LL << 60;
const int MOD = 1000000007;
const int MAX = 100000;
const int N = 100010;

struct UnionFind {
	vector<int> par;

	UnionFind(int N) : par(N) {
		for (int i = 0; i < N; i++) par[i] = i;
	}

	int root(int x) {
		if (par[x] == x) return x;
		return par[x] = root(par[x]);
	}

	bool issame(int x, int y) {
		return root(x) == root(y);
	}

	void merge(int x, int y) {
		int rx = root(x);
		int ry = root(y);
		if (rx == ry) return;
		par[rx] = ry;
	}
};

int main() {
//	cout << fixed << setprecision(15);
	int n, m;
	cin >> n >> m;
	vll s(m), t(m), w(m);
	rep(i, m) cin >> s[i] >> t[i] >> w[i];

	vector<pll> p(m);
	rep(i, m) p[i] = pll(w[i], i);
	sort(p.begin(), p.end());

	UnionFind uf(n);
	ll ans = 0;
	rep(i, m) {
		int j = p[i].second;
		if(uf.issame(s[j], t[j])) continue;
		uf.merge(s[j], t[j]);
		ans += p[i].first;
	}
	cout << ans << endl;
}

