#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

struct UF{
    vector<int> par, sz;
    void init(int n){
        par.resize(n);
        sz.resize(n, 1);
        rep(i, 0, n) par[i] = i;
    }
    int find(int x){
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    void unite(int x, int y){
        x = find(x); y = find(y);
        if(x == y) return;
        if(sz[x] > sz[y]) swap(x, y);
        sz[x] += sz[y];
        par[y] = x;
    }
    bool same(int x, int y){
        return find(x) == find(y);
    }
};

signed main(){
    int n, q;
    cin >> n >> q;
    UF uf;
    uf.init(n);
    rep(i, 0, q){
        int c, x, y;
        cin >> c >> x >> y;
        if(c == 0){
            uf.unite(x, y);
        }else{
            cout << (uf.same(x, y) ? 1: 0) << endl;
        }
    }
}