#include "bits/stdc++.h"
using namespace  std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define INF 1<<30
#define LINF 1LL<<60


class Dijkstra{
public:
    ll V;
    ll root;
    
    struct edge{
        ll u;
        ll v;
        ll cost;
        edge(){}
        edge(ll u,ll v,ll c):u(u),v(v),cost(c){}
    };
    
    vector<vector<edge>> G;
    vector<ll> dist;
    
    Dijkstra(ll V):V(V){
        G.resize(V);
        dist.assign(V, INF);
    }
    void add_edge(ll u,ll v,ll cost, bool undirected = false){
        G[u].emplace_back(edge(u,v,cost));
        if(undirected){
            G[v].push_back(edge(v,u,cost));
        }
    }
    
    void calc_dist(ll root){
        this->root = root;
        dist[root] = 0;
        queue<pll> q; q.push({root,0});
        while(!q.empty()){
            auto p = q.front(); q.pop();
            ll n = p.first;
            ll now_d = p.second;
            if(now_d > dist[n]) continue;
            for(auto e:G[n]){
                if(dist[e.v] > dist[e.u] + e.cost){
                    dist[e.v] = dist[e.u] + e.cost;
                    q.push({e.v,now_d + e.cost});
                }
            }
        }
    }
    
    inline ll get_dist(ll n) const{ return dist[n];}
};

int main(){
    cin.tie(0); ios::sync_with_stdio(false);
    ll V,E,r; cin >> V >> E >>r;
    Dijkstra dijkstra(V);
    for(int i = 0; i < E;i++){
        ll s,t,d; cin >> s >> t >> d;
        dijkstra.add_edge(s, t, d);
    }
    
    dijkstra.calc_dist(r);
    
    for(int i = 0; i < V;i++){
        ll dist = dijkstra.get_dist(i);
        if(dist != INF) cout << dist;
        else cout << "INF";
        cout <<endl;
    }
    
    return 0;
}