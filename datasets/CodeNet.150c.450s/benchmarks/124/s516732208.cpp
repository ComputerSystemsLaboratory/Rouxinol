#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int M[200][200];
string color[200];
int d[200];
int p[200];
int n;
const int INF = 1001001001;

void dijkstra(int s){
    rep(i, n){
        color[i] = "WHITE";
        d[i] = INF;
    }
    d[s] = 0;
    p[s] = -1;

    int u;
    while(true){
        int mincost = INF;
        for (int i = 0; i < n; i++){
            if(color[i] != "BLACK" && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INF){
            break;
        }
        color[u] = "BLACK";
        
        for (int v = 0; v < n; v++){
            if(color[v] != "BLACK" && M[u][v] != INF){
                if(d[u] + M[u][v] < d[v]){
                    d[v] = d[u] + M[u][v];
                    p[v] = u;
                    color[v] = "GRAY";
                }
            }
        }
    }
}

int main() {
    cin >> n;
    rep(i, n){
        rep(j, n){
            M[i][j] = INF;
        }
    }
    rep(i, n){
        int u; cin >> u;
        int k; cin >> k;
        rep(j, k){
            int c, v; cin >> c >> v;
            M[u][c] = v;
        }
    }
    dijkstra(0);
    rep(i, n){
        cout << i << " " << d[i] << endl;
    }

    return 0;
}
