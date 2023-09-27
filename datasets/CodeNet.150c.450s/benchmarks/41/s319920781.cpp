#include <bits/stdc++.h>
 
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(a) (a).begin(),(a).end()
 
using namespace std;
using ll  = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
 
const ll MOD  = 1e9 + 7;
const ll LINF = 1LL << 60;
const int INF = 1e9 + 7;

int main(){
    ll v, e;
    cin >> v >> e;

    ll dist[v][v];
    rep(i, v)rep(j, v){
        if(i == j)dist[i][j] = 0;
        else dist[i][j] = LINF;
    }
    rep(i, e){
        ll s, t, d;
        cin >> s >> t >> d;

        dist[s][t] = d;
    }

    rep(k, v)rep(i, v)rep(j, v){
        if(dist[i][k] >= LINF || dist[k][j] >= LINF)continue;
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    }

    rep(i, v)if(dist[i][i] < 0){
        cout << "NEGATIVE CYCLE\n";
        return 0;
    }

    rep(i, v){
        rep(j, v){
            if(j > 0)cout << " ";
            if(dist[i][j] >= LINF)cout << "INF";
            else cout << dist[i][j];
        }
        cout << endl;
    }
}

