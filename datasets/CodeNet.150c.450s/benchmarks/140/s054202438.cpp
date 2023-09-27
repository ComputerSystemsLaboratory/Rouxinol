#include "bits/stdc++.h"
#include <sys/timeb.h>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define replrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) replrev(i,0,n)
#define repi(itr,ds) for(auto itr = ds.begin(); itr != ds.end(); ++itr)
#define mp make_pair
#define INF 1000000007
#define INFL 2000000000000000000LL
#define MOD 1000000007
#define PI 3.1415926536
#define RMAX 4294967295
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<P> vP;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<char> > vvc;
typedef vector<vector<P> > vvP;
typedef priority_queue<int, vector<int>, greater<int> > pqli;
typedef priority_queue<P, vector<P>, greater<P> > pqlP;


class UnionFind {
public:
	vector<int> par, rank;

	void init(int n) {
		par = vector<int>(n);
		rank = vector<int>(n);
		for (int i = 0; i < n; i++) {
			par[i] = i;
			rank[i] = 0;
		}
	}

	// ??¨??????????±???????
	int find(int x) {
		if (par[x] == x) {
			return x;
		}
		else {
			return par[x] = find(par[x]);
		}
	}

	// x??¨y????±??????????????????????
	void unite(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y)return;

		if (rank[x] < rank[y]) {
			par[x] = y;
		}
		else {
			par[y] = x;
			if (rank[x] == rank[y])rank[x]++;
		}
	}

	// x??¨y???????????????????±????????????????
	bool same(int x, int y) {
		return find(x) == find(y);
	}

	UnionFind(int n) {
		init(n);
	}

	UnionFind() {}
};

int main() {
	int V, E;
	cin >> V >> E;
	UnionFind uf(V);
	priority_queue<pair<int, P>, vector<pair<int, P> >, greater<pair<int, P> > > edge;

	rep(i, E) {
		int s, t, w;
		cin >> s >> t >> w;
		edge.push(mp(w, mp(s, t)));
	}
	ll ans = 0;
	rep(i, V - 1) {
		pair<int, P> e;
		do {
			e = edge.top();
			edge.pop();
		} while (uf.same(e.second.first, e.second.second));
		ans += e.first;
		uf.unite(e.second.first, e.second.second);
	}

	cout << ans << endl;

	return 0;
}