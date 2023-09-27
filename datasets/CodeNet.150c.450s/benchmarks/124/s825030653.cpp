#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef float fl;
typedef long long ll;

static const int MAX = 100;
static const int INF = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void dijkstra() {
    int minv;
    int d[MAX], color[MAX];

    rep(i,n) {
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;
    // 最短経路の候補の中で最小の頂点を選ぶ
    while(1){
        minv = INF;
        int u = -1;
        rep(i,n) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1) break;
        color[u] = BLACK;

    // 次の最短経路の頂点を見つける
        rep(v,n) {
            if (color[v] != BLACK && M[u][v] != INF){
                if (d[v] > d[u] + M[u][v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    rep(i,n){
        cout << i << " " << ((d[i] == INF)? -1 : d[i]) << endl;
    }
}

int main(){
    cin >> n;
    rep(i,n){
        rep(j,n) M[i][j] = INF;
    }

    int k, c, u, v;
    rep(i,n){
        cin >> u >> k;
        rep(j,k){
            cin >> v >> c;
            M[u][v] = c;
        }
    }
    dijkstra();
    return 0;
}
