#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <tuple>
#include <cstring>
#include <map>
#include <iomanip>
#include <ctime>
#include <complex>
#include <cassert>
#include <climits>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define _ << " " <<
#define all(X) (X).begin(), (X).end()
#define len(X) (X).size()
#define Pii pair<int, int>
#define Pll pair<ll, ll>
#define Tiii tuple<int, int, int>
#define Tlll tuple<ll, ll, ll>
typedef priority_queue<Tiii, vector<Tiii>, greater<Tiii>> pq;

class UnionFind {
public:
    vector<int> par;
    vector<int> rnk;
    vector<int> sze;

    UnionFind(ll n): par(n), rnk(n, 0), sze(n, 1) {
        for (ll i = 0; i < n; ++i) par[i] = i;
    }

    void init(int n) {
        for (int i = 0; i < n; i++) {
            par.resize(n);
            rnk.assign(n, 0);
            sze.assign(n, 1);
        }
    }

    int find(int x) {
        if (par[x] == x) return x;
        else return par[x] = find(par[x]);
    }

    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return 0;
        if (rnk[x] < rnk[y]) {
            sze[y] = sze[x] + sze[y];
            par[x] = y;
        }
        else {
            sze[x] = sze[x] + sze[y];
            par[y] = x;
            if (rnk[x] == rnk[y]) rnk[x]++;
        }
        return 1;
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    bool size(int x) {
        return sze[find(x)];
    }
};

pair<vector<Pii>, int> Kruscal(int v, pq U) {
    UnionFind uf(v);
    vector<Pii> mst;
    int cost = 0;
    while (!U.empty()) {
        Tiii q = U.top();
        U.pop();
        int c = get<0>(q), ti = get<1>(q), tj = get<2>(q);
        if (!uf.same(ti, tj)) {
            uf.unite(ti, tj);
            mst.emplace_back(ti, tj);
            cost += c;
        }
    }
    return pair<vector<Pii>, int>(mst, cost);
}

int main() {
    int v, e;
    cin >> v >> e;

    pq que;
    for (int i = 0; i < e; i++) {
        int a, b, r;
        cin >> a >> b >> r;
        que.push(Tiii(r, a, b));
    }

    cout << Kruscal(v, que).second << endl;
}
