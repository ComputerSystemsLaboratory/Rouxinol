#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
#define INF 1e18 

int main (){
    int V, E ;
    cin >> V >> E ;
    vector<vector<ll>> cost (V, vector<ll> (V)) ;
    rep(i, V){
        rep(j, V){
            if(i == j){
                cost[i][j] = 0;
            }
            else {
                cost[i][j] = INF ;
            }
        }
    }
    rep(i, E){
        ll s, t, d ;
        cin >> s >> t >> d ;
        cost[s][t] = d ;
    }
    rep(k, V){
        rep(i, V){
            rep(j, V){
                cost[i][j] = min (cost[i][j], cost[i][k] + cost[k][j]) ;
            }
        }
    }
    bool neg = false ;
    rep(i, V){
        if(cost[i][i] < 0){
            neg = true ;
        }
    }
    if(neg){
        cout << "NEGATIVE CYCLE" << endl ;
    }
    else {
        rep(i, V){
            rep(j, V){
                if(j) cout << " " ;
                if(cost[i][j] > 1000000000000){
                    cout << "INF" ;
                }
                else {
                    cout << cost[i][j] ;
                }
            }
            cout << endl ;

        }
    }
}
