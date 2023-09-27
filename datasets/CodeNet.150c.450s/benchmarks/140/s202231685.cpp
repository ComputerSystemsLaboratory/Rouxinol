#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int , int> ;
#define PI 3.14159265358979323846264338327950
#define INF 1e18 


int main () {
    ll V, E ;
    cin >> V >> E ;
    vector<vector<P>> cost(V) ;
    rep(i, E){
        int s, t, w ;
        cin >> s >> t >> w ;
        P p = P(t, w) ;
        cost[s].push_back(p) ;
        P k = P(s, w) ;
        cost[t].push_back(k) ;
    }
    vector<bool> used (V, false) ;
    vector<ll> d (V, INF) ;
    d[0] = 0;
    ll res = 0 ;
    while(1 == 1){
        int v = -1 ;
        rep(i, V){
            if(!used[i] && (v == -1 || d[i] < d[v])){
                v = i ;
            }
        }
        if(v == -1){
            break ;
        }
        used[v] = true ;
        res += d[v] ;
     
            rep(j, cost[v].size()){
                ll k = cost[v][j].second ;
                ll m = cost[v][j].first ;
                d[m] = min(d[m],  k) ;
            }
        
    }
    cout << res << endl ;

} 

