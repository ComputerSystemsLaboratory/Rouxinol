#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector< vector<ll> >
typedef long long ll;
typedef pair<int, int> P;
const ll INF = (1LL << 40);

int main(){
    int N, M;
    cin >> N >> M;
    Graph G(N, vector<ll>(N, INF));
    rep(i, M){
        int s, t, d;
        cin >> s >> t >> d;
        G[s][t] = d;
    }
    rep(i, N){
        G[i][i] = 0;
    }

    rep(k, N){
        rep(i, N){
            if(G[i][k] == INF) continue;
            rep(j, N){
                if(G[k][j] == INF) continue;
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }

    bool negative = false;
    rep(i, N){
        if(G[i][i] < 0){
            negative = true;
            break;
        } 
    }

    if(negative) cout << "NEGATIVE CYCLE" << endl;
    else{
        rep(i, N){
            rep(j, N){
                if(j) cout << ' ';
                if(G[i][j] == INF) cout << "INF";
                else cout << G[i][j];
            }
            cout << endl;
        }
    }
}
