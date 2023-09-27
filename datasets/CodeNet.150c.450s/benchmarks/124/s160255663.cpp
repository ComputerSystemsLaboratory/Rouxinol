#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

#define MAX 100
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX], d[MAX], color[MAX];

void shortestPath(int s){
    int u, minv;
    //距離を初期化
    for(int i = 0; i < n; i++){
        d[i] = INFTY;
        color[i] = WHITE;
    }

    d[s] = 0;

    while(1){
        int u = -1;
        int minv = INFTY;
        //最も距離が近いものを更新
        for(int i = 0; i < n; i++){
            if(color[i] != BLACK && d[i] < INFTY){
                if(d[i] < minv){
                    u = i;
                    minv = d[i];
                }
            }
        }

        if(u == -1) break;
        color[u] = BLACK;

        for(int v = 0; v < n; v++){
            d[v] = min(d[v], d[u] + M[u][v]);
        }
    }
}

int main(){
    cin >> n;
    //隣接行列を作製

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            M[i][j] = INFTY;
        }
    }

    for(int i = 0; i < n; i++){
        int u, k, v, c;
        cin >> u >> k;
        for(int j = 0; j < k; j++){
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    shortestPath(0);

    rep(i,n){
        cout << i << " " << d[i] << endl;
    }

    return 0;
}
