#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
#define INF 1LL<<60

struct edge {
    int from;
    int to;
    ll w;

    bool operator<(const edge& other) const {
        if (w < other.w) return true;
        else return false;
    }
};

class UnionFind {
public:
    vector <int> par; // 各元の親を表す配列
    vector <int> siz; // 素集合のサイズを表す配列(1 で初期化)

    // Constructor
    UnionFind(int sz_): par(sz_), siz(sz_, 1) {
        for (int i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }
    void init(int sz_) {
        par.resize(sz_);
        siz.assign(sz_, 1);  // resize だとなぜか初期化されなかった
        for (int i = 0; i < sz_; ++i) par[i] = i; // 初期では親は自分自身
    }

    // Member Function
    // Find
    int root(int x) { // 根の検索
        while (par[x] != x) {
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }

    // Union(Unite, Merge)
    bool merge(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        // merge technique（データ構造をマージするテク．小を大にくっつける）
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(int x, int y) { // 連結判定
        return root(x) == root(y);
    }

    int size(int x) { // 素集合のサイズ
        return siz[root(x)];
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    // vector< vector<edge> > edges(N, vector<edge>());
    vector<edge> edges;

    REP(i, M) {
        int s, t;
        int w;
        cin >> s >> t >> w;
        edge e = {s, t, w};
        edges.push_back(e);
    } 

    sort(ALL(edges));

    UnionFind uf = UnionFind(N);
    set<int> U;
    vector<edge> tree;

    for(edge e: edges) {
        int v1 = e.from;
        int v2 = e.to;
        if(!uf.issame(v1, v2)) {
            uf.merge(v1, v2);
            tree.push_back(e);
        }
    }

    int ans = 0;
    for(edge e: tree)
        ans += e.w;
    cout << ans << endl;
    // printf("%lld\n", ans);
    return 0;
}
