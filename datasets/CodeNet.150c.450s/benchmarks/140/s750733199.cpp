#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define _GLIBCXX_DEBUG

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vd = vector<double>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvd = vector<vd>;
using vvvi = vector<vvi>;
using vvvll = vector<vvll>;
using vvvd = vector<vvd>;

const double pi=acos(-1);
const ll MOD=1e9+7;
const ll INF=(1LL<<60);

struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

struct edge{int u,v,cost;};

bool comp(const edge& e1,const edge& e2){
    return e1.cost<e2.cost;
}

edge es[100010];
int v,e;

int kruskal(){
    sort(es,es+e,comp);
    //cout<<es[0].cost<<endl;
    //cout<<es[e-1].cost<<endl;
    UnionFind uf(v+1);
    int res=0;
    for (int i=0;i<e;i++){
        auto e=es[i];
        if (!uf.issame(e.u,e.v)){
           uf. merge(e.u,e.v);
            res+=e.cost;
        }
    }
    return res;
}

int main() {
    cin>>v>>e;
    rep(i,e){
        int a,b,c;
        cin>>a>>b>>c;
        edge e1={a,b,c};
        es[i]=e1;
    }
    int ans=kruskal();
    cout<<ans<<endl;

    return 0;
}
