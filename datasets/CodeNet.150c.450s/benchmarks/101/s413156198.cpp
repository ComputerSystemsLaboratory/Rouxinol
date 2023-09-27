//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using ld = long double;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

struct UnionFind {
    vector<int> par; // 親を指すvector,-par[親]は木のサイズ
    UnionFind(int n):par(n, -1) {} // uniteで親を埋め込んでいく必要あり
    int root(int x) { // 親をたどる&データの整理
        if(par[x] < 0) return x;
        return par[x] = root(par[x]);
    }
    bool unite(int x, int y) { // データの結合
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    bool same(int x, int y) {return root(x) == root(y);} // 所属判定
    int size(int x) {return -par[root(x)];} // 木のサイズ
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    UnionFind uft(n);
    rep(i, m) {
        int s, t;
        cin >> s >> t;
        uft.unite(s, t);
    }
    int q;
    cin >> q;
    while(q--) {
        int i, j;
        cin >> i >> j;
        cout << (uft.same(i, j)?"yes":"no") << endl;
    }
}
