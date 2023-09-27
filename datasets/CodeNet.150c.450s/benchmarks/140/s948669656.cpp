#include <bits/stdc++.h>

//単一始点最短経路（負の重みをもつ辺を含む）
//https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, char, ll> t4;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

const ll mod = 1000000007;

struct edge {
	int from;
	int to;
	ll cost;
};

struct UnionFind {
public:
	vector <ll> par; // 
	vector <ll> siz; // 

	UnionFind(ll sz_) : par(sz_), siz(sz_, 1LL) {
		for (ll i = 0; i < sz_; ++i) par[i] = i;
	}
	void init(ll sz_) {
		par.resize(sz_);
		siz.assign(sz_, 1LL);
		for (ll i = 0; i < sz_; ++i) par[i] = i;
	}

	ll root(ll x) {
		while (par[x] != x) {
			x = par[x] = par[par[x]];
		}
		return x;
	}

	bool merge(ll x, ll y) {
		x = root(x);
		y = root(y);
		if (x == y) return false;
		if (siz[x] < siz[y]) swap(x, y);
		siz[x] += siz[y];
		par[y] = x;
		return true;
	}

	bool issame(ll x, ll y) {
		return root(x) == root(y);
	}

	ll size(ll x) {
		return siz[root(x)];
	}
};

struct KruskalRunner {
	static bool orderByCost(const edge& e1, const edge& e2) {
		return e1.cost < e2.cost;
	}

	ll solve(int vCount, vector<edge>& edges) {
		sort(edges.begin(), edges.end(), orderByCost);
		UnionFind uf = UnionFind(vCount);
		ll sum = 0;
		for (int i = 0; i < edges.size(); ++i) {
			edge e = edges[i];
			if (!uf.issame(e.from, e.to)) {
				uf.merge(e.from, e.to);
				sum += e.cost;
			}
		}
		return sum;
	}
};
int main(void)
{
	int v, e;
	cin >> v >> e;
	vector<edge> g;
	rep(i, e) {
		int s, t, c;
		cin >> s >> t >> c;
		g.push_back({ s, t, c });
	}
	KruskalRunner r;
	auto cost = r.solve(v, g);
	cout << cost << endl;
	return 0;
}

