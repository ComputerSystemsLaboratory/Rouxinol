#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

struct UnionFind{
    vector<int> par;

    UnionFind(int n) : par(n,-1) { }
    void init(int n) { par.assign(n,-1); }

    int root(int x){
        if(par[x]<0) return x;
        else return par[x]=root(par[x]);
    }

    bool issame(int x,int y){
        return root(x)==root(y);
    }

    bool merge(int x,int y){
        x=root(x);
        y=root(y);
        if(x==y) return false;
        if(par[x]>par[y]) swap(x,y);
        par[x]+=par[y];
        par[y]=x;
        return true;
    }

    int size(int x){
        return -par[root(x)];
    }
};

int main(){
    int N,M;
    cin>>N>>M;

    // Kruskal法
    // O(ElogE)
    // Kruskal 法で使用する枝
    using pint = pair<int,int>;
    using Edge = pair<ll, pint>;
    vector<Edge> edges;
    //枝入力
    rep(i,M) {
        int u,v;
        ll c;
        cin>>u>>v>>c;
        edges.push_back({c, pint(u, v)});
    }
    // Kruskal 法
    sort(all(edges));
    // unionfindのスニペット読み込んで
    UnionFind uf(N);
    ll res = 0;
    for (auto e : edges) {
        int u = e.second.first, v = e.second.second;
        ll cost = e.first;
        if (uf.issame(u, v)) continue;
        uf.merge(u, v);
        res += cost;
    }
    cout << res << endl;
}


 
