#include <bits/stdc++.h>
using namespace std;
using uint = uint32_t;
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


struct Edge{ uint32_t to, id; };
typedef vector<vector<Edge>> Graph;

template<class T> struct Prim {
	Prim(const Graph & es, const vector<T> & ws) : g(es.size()) {
		typedef uint32_t U;
		typedef tuple<T, U, U, U> P;
		U n = es.size();
		vector<U> unexp(n, 1);
		priority_queue<P, vector<P>, greater<P>> q; q.emplace(0, n, 0, 0);
		while (!q.empty()) {
			T w; U u, v, i; tie(w, u, v, i) = q.top(); q.pop();
			if (unexp[v]) {
				unexp[v] = 0;
				if (u != n) { g[u].push_back({ v, i }); g[v].push_back({ u, i }); cost += w; }
				for (auto e : es[v]) if (unexp[e.to]) q.emplace(ws[e.id], v, e.to, e.id);
			}
		}
	}
	Graph g; T cost = 0;
};

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);

	uint n; cin >> n;
	Graph g(n);
	vl w;
	REP(i, n) REP(j, n) {
		ll x; cin >> x;
		if (x != -1) {
			g[i].push_back({j, (uint)w.size()});
			g[j].push_back({i, (uint)w.size()});
			w.push_back(x);
		}
	}
	Prim<ll> mst(g, w);
	cout << mst.cost << endl;
}