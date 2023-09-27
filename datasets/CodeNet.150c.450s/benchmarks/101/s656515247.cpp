#include<bits/stdc++.h>
#define ll long long
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(i, n) for(int i=0; i<=n; i++)
#define repr(i, n) for(int i=n; i>0; i--)
#define REPR(i, n) for(int i=n; i>=0; i--)
const ll INF = 1LL<<60;
const int INT_INF = 1e9;
const ll MOD = 1e9+7;
template<class T> void puts(T x) { std::cout << x << std::endl; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

struct UnionFind {
    vector<int> parent;

    // Constructor
    UnionFind(int n) {
        parent.resize(n);
        rep(i, n) parent[i] = i;
    }

    // 親を取得
    int root(int x) {
        if (parent[x] == x) {
            return x;
        } else {
            parent[x] = root(parent[x]);
            return parent[x];
        }
    }

    // 二つのデータを同じ木にくっつける
    void connect(int x, int y) {
        int rx = root(x);
        int ry = root(y);

        if (rx == ry) return; // 元から同じ木に属する場合は何もしない
        parent[rx] = ry;
    }

    // 二つのデータが同じ木に属するか判定
    bool check(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int n, m; cin >> n >> m;
    UnionFind tree(n);
    rep(i, m) {
        int s, t; cin >> s >> t;
        tree.connect(s, t);
    }
    int q; cin >> q;
    rep(i, q) {
        int s, t; cin >> s >> t;
        cout << (tree.check(s, t) ? "yes" : "no") << endl;
    }
}

