#include <bits/stdc++.h>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
#define INF 1e18 

int main (){
    int V, E, r;
    cin >> V >> E >> r ;
    vector<vector<pair<ll,ll>>> cost (V) ; 
    rep(i, E){
        int s, t, c;
        cin >> s >> t >> c ;
        cost[s].emplace_back(t, c) ;
    }
    vector<ll> d (V, INF) ;
    d[r] = 0 ;
    priority_queue <P, vector<P>, greater<P> > que ;
    que.push(P(0, r)) ; 
    while(!que.empty()){
        P p = que.top() ;
        que.pop() ;
        int v = p.second ;
        if(d[v] < p.first) {
            continue ;
        }
        rep(i, cost[v].size()){
            int k = cost[v][i].first ;
            if(d[k] > d[v] + cost[v][i].second){
                d[k] = d[v] + cost[v][i].second ;
                que.push(P(d[k], k)) ;
            }
        }
    }
        rep(i, V){
        if(d[i] > 1e10){
            cout << "INF" << endl ;
        }
        else {
        cout << d[i] << endl ;
        }
    }
}
