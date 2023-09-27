#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 2e9;

ll dist[105][105];

void warchall_floyd(int N){
    rep(k,N)rep(i,N){
        if(dist[i][k] == INF) continue;
        rep(j,N){
            if(dist[k][j] == INF) continue;
	        chmin(dist[i][j], dist[i][k]+dist[k][j]);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int v, e;
    cin >> v >> e;
    rep(i,v){
        rep(j,v) dist[i][j] = INF;
        dist[i][i] = 0;
    }
    rep(i,e){
        int s, t, d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }
    warchall_floyd(v);
    bool neg = false;
    rep(i,v) if(dist[i][i] < 0) neg = true;
    if(neg){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i,v){
        rep(j,v){
            if(dist[i][j] < INF) cout << dist[i][j];
            else cout << "INF";
            if(j < v-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
