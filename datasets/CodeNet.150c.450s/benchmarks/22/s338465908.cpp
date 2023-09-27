//Single Source Shortest Path (Negative Edges)
#include<iostream>
#include<vector>
#include<algorithm>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main()
{
    const ll INF = 1e8;
    struct edge{
        ll from;
        ll to;
        ll cost;
    };
    ll V, E, r;
    cin >> V >> E >> r;
    vector<edge>edges(E);
    rep(i,E){
        int s, t, d;
        cin >> s >> t >> d;
        edges[i] = {s, t, d};
    }
    vector<ll>shortest(V, INF);
    shortest[r] = 0;
    rep(i,V-1){
        rep(j,E){
            if(shortest[edges[j].from] != INF){
                shortest[edges[j].to] = min(shortest[edges[j].to], shortest[edges[j].from] + edges[j].cost);
            }
        }
    }
    bool ok = true;
    rep(j,E){
        ll a = shortest[edges[j].to];
        if(shortest[edges[j].from] != INF){
            shortest[edges[j].to] = min(shortest[edges[j].to], shortest[edges[j].from] + edges[j].cost);
        }
        if(a != shortest[edges[j].to] && a < 1e7){ 
            ok = false;
            break;
        }
    }
    if(!ok){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }else{
        rep(i,V){
            if(shortest[i] == INF) cout << "INF" << endl;
            else cout << shortest[i] << endl;
        }
    }
    return 0;
}
