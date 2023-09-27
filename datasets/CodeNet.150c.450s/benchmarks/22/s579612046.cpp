#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i=0;i<(n);++i)
const ll MOD=1e9+7;

template<typename T>
struct BellmanFord{
    const T inf=numeric_limits<T>::max();
    struct edge{
        int u,v; T w;
        edge(int u,int v,T w):u(u),v(v),w(w){}
    };
    int n;
    vector<vector<int>> G;
    vector<int> used,reach;
    BellmanFord(int n):n(n),G(n),used(n,0),reach(n,1){}
    vector<edge> es;
    void add_edge(int u,int v,T c){
        es.emplace_back(u,v,c);
        G[u].emplace_back(v);
    }
    vector<T> build(int from,int &neg_loop){
        vector<T> d(n,inf);
        d[from]=0;
        for (int i=0;i<n;++i){
            int update=0;
            for (auto e:es){
                if (!reach[e.u]||!reach[e.v]||d[e.u]==inf) continue;
                if (d[e.u]+e.w<d[e.v]) d[e.v]=d[e.u]+e.w,update=1;
            }
            if (!update) break;
            if (i==n-1){neg_loop=1; return d;}
        }
        neg_loop=0;
        return d;
    }
    void dfs(int v){
        if (used[v]) return;
        used[v]=1;
        for (int u:G[v]) dfs(u);
    }
    T shortest_path(int from,int to,int &neg_loop){
        for (int i=0;i<n;++i){
            fill(used.begin(),used.end(),0);
            dfs(i);
            reach[i]=used[to];
        }
        return build(from,neg_loop)[to];
    }
};


const ll INF=1e9;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V,E,r; cin >> V >> E >> r;
    BellmanFord<int> G(V);
    rep(i,E){
        int s,t,d; cin >> s >> t >> d;
        G.add_edge(s,t,d);
    }
    int neg_loop=0;
    vector<int> d=G.build(r,neg_loop);
    if (neg_loop){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i,V){
        if (d[i]>INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}
