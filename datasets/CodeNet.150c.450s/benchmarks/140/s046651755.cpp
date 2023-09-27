#include <bits/stdc++.h>
typedef long long lint;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

struct UnionFind {
    vector<int> v;

    UnionFind(int n) {
        v.resize(n);
        rep(i,n) v[i] = i;
    }
    int root(int x) {
        if (v[x] == x) return x;
        return v[x] = root(v[x]);
    }
    void unite(int x,int y) {
        if (root(x) == root(y)) return;
        v[root(x)] = root(y);
    }
};

int main() {
    int v,e; cin >> v >> e;
    tuple<int,int,int> stw[100000];
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> hq;
    rep(i,e) {
        int s,t,w; cin >> s >> t >> w;
        stw[i] = tuple<int,int,int>(s,t,w);
        hq.push(make_pair(w,i));
    }
    lint ans = 0;
    UnionFind uf(v);
    while (hq.size() != 0) {
        pair<int,int> t = hq.top(); hq.pop();
        int x,y;
        x = get<0>(stw[t.second]);
        y = get<1>(stw[t.second]);
        if (uf.root(x) == uf.root(y)) continue;
        uf.unite(x,y);
        ans += get<2>(stw[t.second]);
    }
    cout << ans << endl;
}
