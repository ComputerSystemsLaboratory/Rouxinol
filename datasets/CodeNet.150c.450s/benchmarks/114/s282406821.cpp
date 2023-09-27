#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

class UnionFind {
private:
    int n;
    vector<int> uni;
public:
    UnionFind(int _n) {
        n = _n;
        uni.clear();
        uni.resize(n, -1);
    }
    int root(int x) {
        if (uni[x] < 0) return x;
        return uni[x] = root(uni[x]);
    }
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    void unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;
        if (uni[x] > uni[y]) swap(x, y);
        uni[x] += uni[y];
        uni[y] = x;
    }
    void print() {
        for (auto x : uni) cout << x << " ";
        cout << endl;
    }
};

struct edge {
    int from, to, cost;
    edge(){}
    edge(int _from, int _to, int _cost) : from(_from), to(_to), cost(_cost) {}
    bool operator< (const edge& e) const {
        return cost == e.cost ? (from == e.from ? to < e.to : from < e.from) : cost < e.cost;
    }
};

class Kruskal {
private:
    int n;
    vector<edge> edges;
    UnionFind uf;
public:
    Kruskal(int _n) : n(_n), uf(UnionFind(n)) {
        rep(i, n) {
            rep(j, n) {
                int c;
                cin >> c;
                if (c == -1) c = 1e9;
                edges.emplace_back(i, j, c);
            }
        }
        sort(all(edges));
    }
    int calc() {
        int res = 0;
        for (auto &e : edges) {
            if (!uf.same(e.from, e.to)) {
                uf.unite(e.from, e.to);
                res += e.cost;
            }
        }
        return res;
    }
};

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    cin >> n;
    Kruskal kr(n);
    cout << kr.calc() << endl;
}