#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

constexpr int MOD = 1000000007;

template <typename T> class DisjointSet {
private:
    vector<T> rank, p;

    void link(T x, T y) {
        if (rank[x] > rank[y]) {
            p[y] = x;
        } else {
            p[x] = y;
            if (rank[x] == rank[y]) { rank[y]++; }
        }
    }

public:
    DisjointSet() {}
    DisjointSet(const DisjointSet& tree) : rank(tree.rank), p(tree.p) {}
    DisjointSet(T size) : rank(size, 0), p(size, 0) {
        rep(i, 0, size) { make_set(i); }
    }
    void make_set(T x) {
        p[x] = x;
        rank[x] = 0;
    }
    bool same(T x, T y) { return find_set(x) == find_set(y); }
    void unite(T x, T y) { link(find_set(x), find_set(y)); }
    T find_set(T x) {
        if (x != p[x]) {
            p[x] = find_set(p[x]);
            rank[x] = 1;
        }
        return p[x];
    }
};

struct Edge {
    int s, t, w;
    Edge(int _s = 0, int _t = 0, int _w = 0) : s(_s), t(_t), w(_w) {}
    Edge(const Edge& e) : s(e.s), t(e.t), w(e.w) {}
    bool operator<(const Edge& e) const { return w < e.w; }
};

vector<Edge> kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());

    DisjointSet<int> dset(n + 1);
    vector<Edge> K;

    for (auto e : edges) {
        // Append e only if e connects different parts of the graph.
        if (dset.find_set(e.s) != dset.find_set(e.t)) {
            dset.unite(e.s, e.t);
            K.push_back(e);
        }
    }
    return K;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, e;
    cin >> n >> e;

    vector<Edge> edges;
    rep(i, 0, e) {
        int s, t, w;
        cin >> s >> t >> w;
        edges.emplace_back(s, t, w);
    }

    vector<Edge> K = kruskal(n, edges);
    int ans = 0;
    for (auto e : K) { ans += e.w; }
    cout << ans << endl;

    return 0;
}
