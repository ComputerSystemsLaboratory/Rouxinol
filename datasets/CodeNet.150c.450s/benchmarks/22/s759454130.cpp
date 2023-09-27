#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007
typedef long long ll;
struct Edge{ll u,v,cost;};
using Edges = vector<Edge>;

vector<ll> Bellman_ford(const Edges &edges,int V,int s){
    vector<ll> dist(V,INF);
    dist[s] = 0;
    for(int i = 0; i < V ; i++){
        for(auto e : edges){
            if(dist[e.u] == INF)continue;
            if(dist[e.v] > dist[e.u]+e.cost){
                dist[e.v] = dist[e.u]+e.cost;
                if(i == V-1)return vector<ll>();
            }
        }
    }
    return dist;
}

int main(){
    int V,E,s;cin >> V >> E >> s;
    Edges es(E);
    for(int i = 0; i < E ; i++){
        cin >> es[i].u >> es[i].v >> es[i].cost;
    }

    vector<ll> dist = Bellman_ford(es,V,s);
    if(dist.empty())cout << "NEGATIVE CYCLE" << endl;
    else{
        for(auto d : dist){
            if(d == INF)cout << "INF" << endl;
            else cout << d << endl;
        }
    }

    return 0;
}
