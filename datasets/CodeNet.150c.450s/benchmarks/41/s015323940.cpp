#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979323846;

int main(){
    int v,e;
    cin >> v >> e;
    vector<vector<ll>> dist(v,vector<ll>(v,LINF));
    rep(i,v) dist[i][i] = 0;
    rep(i,e){
        ll s,t,d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }

    rep(k,v)rep(i,v)rep(j,v){
        if(dist[i][k]!=LINF&&dist[k][j]!=LINF) dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
    }

    rep(i,v){
        if(dist[i][i]<0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i,v)rep(j,v){
        if(dist[i][j]>=LINF) cout << "INF" <<  (j==v-1?'\n':' ');
        else cout << dist[i][j] <<  (j==v-1?'\n':' ');
    }

    return 0;
}
