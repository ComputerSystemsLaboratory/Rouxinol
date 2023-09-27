#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second
template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1; } return 0; }
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int, pii> pip;
const ll INF = 1ll<<29;
const ll MOD = 1000000007;
const double EPS = 1e-9;
const bool debug = 0;
//---------------------------------//

struct UnionFind {
	vector<int> par;
	vector<int> rank;
	
	UnionFind() {}
	UnionFind(int n) {
		init(n);
	}
	
	int operator[] (int x) {
		return find(x);
	}

	void init(int n) {
		par.resize(n);
		rank.resize(n);
		REP(i, n) {
			par[i] = i;
			rank[i] = 0;
		}
	}

	int find(int x) {
		if (par[x] == x) return x;
		return par[x] = find(par[x]);
	}

	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return;

		if (rank[x] < rank[y]) {
			par[x] = y;
		} else {
			par[y] = x;
			if (rank[x] == rank[y]) rank[x]++;
		}
	}

	bool same(int x, int y) {
		return find(x) == find(y);
	}
};

int main() {
	int n, q;
	cin >> n >> q;
	
	UnionFind uf(n);
	
	// UnionFind??¨????????????
	for (int i = 0; i < q; i++) {
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		
		if (com == 0) { // unite
			uf.unite(x, y);
		}
		else { // same
			printf("%d\n", uf.same(x, y));
		}
	}
	return 0;
}