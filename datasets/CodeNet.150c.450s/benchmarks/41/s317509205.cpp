#include<iostream>
#include<algorithm>

using namespace std;

typedef long long ll;

#define rep(i,n) for(ll i=0;i<(n);i++)
#define INF (1e12)

ll V,E;
ll G[100][100];

int main() {
    cin >> V >> E;
    rep(i,V)rep(j,V)G[i][j] = INF;
    rep(i,V)G[i][i] = 0;

    rep(i,E) {
        ll s,t,d;
        cin >> s >> t >> d;
        G[s][t] = d;
    }


    rep(k,V) {
        rep(i,V) {
            rep(j,V)
                G[i][j] = min(G[i][j],G[i][k] + G[k][j]);
        }
    }

    rep(i,V) {
        if(G[i][i] != 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    rep(i,V) {
        rep(j,V) {
            if(G[i][j] < INF / 2)cout << G[i][j];//負の辺があるとINFより小さくなることがある
            else cout << "INF";
            cout << ((j < V - 1) ? " " : "");
        }
        cout << endl;
    }
    return 0;
}
