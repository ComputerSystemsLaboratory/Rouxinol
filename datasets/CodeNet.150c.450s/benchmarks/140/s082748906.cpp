#include <bits/stdc++.h>
 
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(a) (a).begin(),(a).end()
 
using namespace std;
using ll  = long long;
using pll = pair<ll, ll>;
 
const ll MOD  = 1e9+7;
const ll LINF = 1LL << 60;
const int INF = 1e9 + 7;

struct UnionFind {
    vector<ll> parent;
    vector<ll> usize;
 
    UnionFind(int n) : parent(n), usize(n, 1LL){
        rep(i, n)parent[i]=i;
    }
    
    int root(int x){
        if(parent[x] == x) return x;
        else return parent[x] = root(parent[x]);
    }
    
    bool issame(int x, int y){
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x);
        y = root(y);
 
        if(x == y)return false;
 
        if(parent[x] > parent[y]) swap(x, y);

        usize[x] += usize[y];
        parent[y] = x;
 
        return true;
    }
    
    int size(int x) {
        return usize[root(x)];
    }
};

int main(){
    ll v, e;
    cin >> v >> e;

    vector<ll> s(e), t(e), w(e);
    rep(i, e)cin >> s[i] >> t[i] >> w[i];

    vector<ll> ord(e);
    iota(ALL(ord), 0);
    sort(ALL(ord), [&](ll x, ll y){
        return w[x] < w[y];
    });

    UnionFind uf(v);

    ll ans = 0;
    rep(i, e){
        if(!uf.issame(s[ord[i]], t[ord[i]])){
            ans += w[ord[i]];
            uf.merge(s[ord[i]], t[ord[i]]);
        }
    }

    cout << ans << endl;
}
