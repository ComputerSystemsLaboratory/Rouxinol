#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF 1<<30
#define LINF 1LL<<60

class WarshallFloyd{
public:
    ll V;
    vector<vector<ll>> d;
    WarshallFloyd(ll V):V(V){
        d.assign(V, vector<ll>(V,LINF));
        for(int i = 0; i < V;i++){
            d[i][i] = 0;
        }
    }
    
    void add_edge(ll u,ll v,ll cost,bool undirected = false){
        d[u][v] = min(d[u][v],cost);
        if(undirected){
            d[v][u] = min(d[v][u],cost);
        }
    }
    
    void calc(){
        for (int i = 0; i < V; i++)      // ?????±????????????
            for (int j = 0; j < V; j++)    // ????§???????
                for (int k = 0; k < V; k++)  // ??????
                {
                    
                    if(d[j][i] == LINF || d[i][k] == LINF)continue;
                    d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
                }
    }
    
    inline ll get_dist(ll s,ll t) {return d[s][t];} // // ????????? := d[i][i] < 0
};

int main(){
    ll V,E; cin >> V >> E;
    WarshallFloyd WF(V);
    for(int i = 0; i < E;i++){
        ll s,t,d; cin >> s >> t >> d;
        WF.add_edge(s, t, d);
    }
    WF.calc();
    
    for(int i = 0; i < V;i++){
        if(WF.get_dist(i, i) < 0){
            cout << "NEGATIVE CYCLE" << endl; return 0;
        }
    }
    
    vector<ll> ans(V);
    for(int i = 0; i < V;i++){
        for(int j = 0; j < V;j++){
            if(WF.get_dist(i, j) == LINF){
                cout << "INF";
            }else{
               cout << WF.get_dist(i, j);
            }
            if(j != V - 1)cout << " ";
        }
        cout << endl;
    }
    return 0;
}