#include "bits/stdc++.h"
using namespace std;

#define ASC(vec) vec.begin(), vec.end()		// 昇順ソート 例：sort(ASC(vec));
#define DESC(vec) vec.rbegin(), vec.rend()	// 降順ソート 例:sort(DESC(vec));
#define rep(i, n) for(int i = 0; i < (n); i++)
#define Rep(i, n) for(int i = 1; i < n; i++)

const int mod = 1000000007;
const int inf = (1 << 21);
const long long INF = 1LL << 60;

using ii = pair<int, int>;
using ll = long long;
using vi = vector<int>;
using vd = vector<double>;
using vb = vector<bool>;
using vl = vector<ll>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vii = vector<pair<int, int>>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll GCD(ll a, ll b) { return b ? GCD(b, a % b) : a; }
ll LCM(ll a, ll b) { return (a * b) / GCD(a, b); }
int round_int(int a, int b) { return (a + (b - 1)) / b; }

constexpr array<int, 9> dx = { 0, 1, 0, -1, -1, 1, 1, -1, 0 };
constexpr array<int, 9> dy = { 1, 0, -1, 0, 1, 1, -1, -1, 0 };

// ──────────────────────────────────────────────────────────────────


struct UnionFind {
	vi d;
	UnionFind(int n = 0) : d(n, -1) {}

	int find(int x) {
		if (d[x] < 0) return x;
		return d[x] = find(d[x]);
	}

	bool unite(int x, int y) {
		x = find(x), y = find(y);

		if (x == y) return false;

		if (d[x] > d[x]) swap(d[x], d[x]);
		d[x] += d[y];
		d[y] = x;
		return true;
	}

	bool same(int x, int y) { return find(x) == find(y); }
	int size(int x) { return -d[find(x)]; }
};

struct Edge {
	int a, b, cost;

	bool operator<(const Edge& o) const {
		return cost < o.cost;
	}
};

struct Graph
{
	int n;  // 頂点数
	vector<Edge> es;  // 辺集合

	// クラスカル法で無向最小全域木のコストの和を計算する
	// グラフが非連結のときは最小全域森のコストの和となる
	int kruskal() {
		// コストが小さい順にソート
		sort(es.begin(), es.end());

		UnionFind uf(n);
		int min_cost = 0;

		rep(ei, es.size()) {
			Edge& e = es[ei];
			if (!uf.same(e.a, e.b)) {
				// 辺を追加しても閉路ができないなら、その辺を採用する
				min_cost += e.cost;
				uf.unite(e.a, e.b);
			}
		}

		return min_cost;
	}
};


Graph input_graph() {
	Graph g;
	int m;
	cin >> g.n >> m;
	rep(i, m) {
		Edge e;
		cin >> e.a >> e.b >> e.cost;
		g.es.push_back(e);
	}
	return g;
}


int main()
{
	Graph g = input_graph();
	cout << g.kruskal() << endl;
	return 0;
}
