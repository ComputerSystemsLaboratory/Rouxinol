#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1e9;
const int MOD = 1e9+7;

struct UnionFind {
	vector<int> data;

	UnionFind(int sz) {
		data.assign(sz, -1);
	}

	void unite(int x, int y) {
		x = find(x), y = find(y);
		if (x == y) return;
		if (data[x] > data[y]) swap(x, y);
		data[x] += data[y];
		data[y] = x;
	}

	int find(int k) {
		if(data[k] < 0) return(k);
		return data[k] = find(data[k]);
	}

	int size(int k)	{
		return -data[find(k)];
	}
};

struct edge {int from, to, cost;};

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v >> e;
    vector<edge> es(e);
    rep(i, e) {
        int x, y, z; cin >> x >> y >> z;
        es[i] = edge{x, y, z};
    }
    sort(all(es), comp);

    UnionFind uf(v);
    ll res = 0;
    rep(i, e) {
        edge e = es[i];
        if (uf.find(e.from)!=uf.find(e.to)) {
            uf.unite(e.from, e.to);
            res += e.cost;
        }
    }
    cout << res << endl;
}
