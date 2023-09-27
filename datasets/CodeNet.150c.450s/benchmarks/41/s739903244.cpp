#include <bits/stdc++.h>

using namespace std;

using ll = long long;
constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;

int main() {
    ll V,E;
    cin >> V >> E;
    vector<vector<ll>> G(V,vector<ll>(V,INF));
    for(ll i=0;i<E;i++){
        ll x,y,cost;
        cin >> x >> y >> cost;
        G[x][y] = cost;
    }
    for(ll i=0;i<V;i++)G[i][i] = 0;
    for(ll k=0;k<V;k++){
        for(ll i=0;i<V;i++){
            for(ll j=0;j<V;j++){
                if(G[i][k]!=INF && G[k][j]!=INF)G[i][j] = min(G[i][j],G[i][k]+G[k][j]);
            }
        }
    }
    for(ll i=0;i<V;i++){
        if(G[i][i]<0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for(ll i=0;i<V;i++){
        for(ll j=0;j<V;j++){
            if(G[i][j]==INF){
                cout << "INF";
            }else {
                cout << G[i][j];
            }
            cout << (j==V-1 ? '\n':' ');
        }
    }
}
