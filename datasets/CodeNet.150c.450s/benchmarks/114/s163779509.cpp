#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;    using vvi = vector<vi>;
using vb = vector<bool>;   using vvb = vector<vb>;
using vl = vector<ll>;     using vvl = vector<vl>;
using vd = vector<double>; using vvd = vector<vd>;

#define REP(i,n) for(auto i = 0 * n; i < (n); ++i)
#define ALL(c) (c).begin(), (c).end()
#define FOR(i,s,e) for (ll i = s; i < (ll)e; i++)
#define TEN(x) ((ll)1e##x)

class UnionFind {
	typedef size_t U;
	vector<int32_t> v;
public:
	UnionFind(U n) : v(n, -1) {}
	U find(U x) { return v[x] < 0 ? x : (v[x] = find((U)v[x])); }
	bool same(U x, U y) { return find(x) == find(y); }
	U size(U x) { return (U)-v[find(x)]; }
	void unite(U x, U y) {
		x = find(x); y = find(y);
		if (x != y) {
			if (-v[x] < -v[y]) swap(x, y);
			v[x] += v[y];
			v[y] = x;
		}
	}
};

struct Edge{ uint32_t to, id; };
typedef vector<vector<Edge>> Graph;

template<class T> struct Kruskal{
	typedef uint32_t U;
	template<class V> Kruskal(U n, const V & u, const V & v, const vector<T> & w) : g(n) {
		vector<U> es(w.size());
		iota(es.begin(), es.end(), 0);
		sort(es.begin(), es.end(), [&](U i, U j) { return w[i] < w[j]; });
		UnionFind uf(n);
		for (U i : es) {
			if (!uf.same(u[i], v[i])) {
				uf.unite(u[i], v[i]); cost += w[i];
				g[u[i]].push_back({ (U)v[i], i }); g[v[i]].push_back({ (U)u[i], i });
			}
		}
	}
	Graph g; T cost = 0;
};

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);

	ll n; cin >> n;
	vl u, v, w;
	REP(i, n) REP(j, n) {
		ll x; cin >> x;
		if (x != -1) {
			u.push_back(i);
			v.push_back(j);
			w.push_back(x);
		}
	}
	Kruskal<ll> mst(n, u, v, w);
	cout << mst.cost << endl;
}