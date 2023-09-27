#include <iostream>
#include <vector>
#define INF 1<<30
#define WHITE 0
#define GRAY 1
#define BLACK 2
int G[101][101];
using namespace std;
int n;

void prim(int *d, int *pi){
    int color[n];
    int u = 0;
    for (int i = 0; i < n; i++){
        d[i] = pi[i] = INF;
        color[i] = WHITE;
    }
    d[0] = 0;
    while (1){
        int mincost = INF;
        for (int i = 0; i < n; i++){
            if (color[i] != BLACK && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }
        if (mincost == INF) break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++){
            int w = G[u][v];
            if (w == -1) continue;
            else if (color[v] != BLACK && d[u]+w < d[v]){
                pi[v] = u;
                d[v] = d[u] + w;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    cin >> n;
    int d[n], pi[n], sum = 0;
    int u, k, v, c;

    //initialize
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            G[i][j] = -1;
        }
    }
    //input
    for (int i = 0; i < n; i++){
        cin >> u >> k;
        for (int j = 0; j < k; j++){
            cin >> v >> c;
            G[u][v] = c;
        }
    }
    prim(d, pi);
    for (int i = 0; i < n; i++){
        cout << i << " " << d[i] << endl;
    }
    return 0;
}

