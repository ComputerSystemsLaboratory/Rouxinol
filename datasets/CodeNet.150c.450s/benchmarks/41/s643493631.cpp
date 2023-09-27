#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
using namespace std;
typedef pair<int, int> P;


const int INF = 6e9;
int V, E;
int d[110][110];

void warshall_floyd(){
    rep(k, 0, V){
        rep(i, 0, V){
            rep(j, 0, V){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}


signed main(){
    cin >> V >> E;
    rep(i, 0, V) rep(j, 0, V) d[i][j] = INF;    
    rep(i, 0, V) d[i][i] = 0;    
    int s, t, a;
    rep(i, 0, E){
        cin >> s >> t >> a;
        d[s][t] = a;
        // d[t][s] = a;
    }
    warshall_floyd();
    rep(i, 0, V){
        if(d[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    rep(i, 0, V){
        rep(j, 0, V){
            if(j != 0) cout << " ";
            if(d[i][j] >= INF / 2) cout << "INF";
            else cout << d[i][j];
        }
        cout << endl;
    }
}