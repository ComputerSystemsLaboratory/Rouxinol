#include<bits/stdc++.h>
using namespace std;

using ll= long long;
const ll INF=1LL<<60;
const ll MOD=1000000007;

struct Edge {
    long long from;
    long long to;
    long long cost;
};
using Edges = vector<Edge>;


bool bellman_ford(Edges &Es, int V, int r, vector<ll> &dist){
    dist[r]=0;
    int cnt=0;
    while(cnt < V){
        bool end=true;
        for(auto x: Es){
            if(dist[x.from] != INF && dist[x.to] > dist[x.from]+x.cost){
                dist[x.to]=dist[x.from]+x.cost;
                end=false;
            }
        }
        if(end) break;
        cnt++;
    }
    return (cnt == V);
}

int main(){
    int V, E, r;
    Edges Es;
    vector<ll> dist;
    cin >> V >> E >> r;
    Es.resize(E);
    dist.assign(V, INF);
    for(int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        Es[i].from=s;
        Es[i].to=t;
        Es[i].cost=d;
    }
    if(bellman_ford(Es, V, r, dist)) cout << "NEGATIVE CYCLE" << endl;
    else{
        for(auto x: dist){
            if(x == INF) cout << "INF" << endl;
            else cout << x << endl;
        }
    }
    return 0;
}
