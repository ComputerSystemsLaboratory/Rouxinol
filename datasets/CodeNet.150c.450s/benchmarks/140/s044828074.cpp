#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;

struct Edge {
    ll a;
    ll b;
    ll c;
};

struct UnionFind {
    UnionFind(int n) {
        rank.assign(n, 0);
        parent.resize(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (x == parent[x])
            return x;
        return parent[x] = find(parent[x]);
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    void unit(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y)
            return;

        if (rank[x] < rank[y]) {
            parent[x] = y;
        }
        else {
            parent[y] = x;
            if (rank[x] == rank[y])
                rank[x]++;
        }
    }

    vector<int> rank;
    vector<int> parent;
};

int main() {
    ll N, M;
    cin >> N >> M;
    priority_queue<Edge, vector<Edge>, function<bool(Edge, Edge)>> q([](Edge a, Edge b) { return a.c > b.c; });
    REP(i, M) {
        Edge e;
        cin >> e.a >> e.b >> e.c;
        q.push(e);
    }

    UnionFind uf(N);
    ll ans = 0;
    while (!q.empty()) {
        auto t = q.top();
        q.pop();
        if (uf.same(t.a, t.b))
            continue;
        uf.unit(t.a, t.b);
        ans += t.c;
    }

    cout << ans << endl;

    return 0;
}
