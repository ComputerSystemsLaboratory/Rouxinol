#include <bits/stdc++.h>
#define MODNum 1000000007
#define WHITE  0
#define GRAY   1
#define BLACK  2
#define INFTY  2147483647
#define REP(type, i, a, b) for( type i = a; i < b; i++ )
typedef long long ll;

using namespace std;

int main (void) {
    int N;
    scanf("%d", &N);
    int u,v,k;
    int c[N][N];  /* 辺の重みを記録した隣接行列 */
    int color[N]; /* 頂点の訪問状態 */
    int d[N];     /* 最短コストの記録 */
    int p[N];     /* 最短経路木における頂点vの親 */
    int weight;
    /* Initialization */
    for ( int i = 0; i < N; i++ ){
        d[i]     = INFTY;
        color[i] = WHITE;
        p[i]     = -1;
        for ( int j = 0; j < N; j++ ) c[i][j] = INFTY;
    }
    /* グラフを読み込み */
    for ( int i = 0; i < N; i++ ){
        scanf("%d %d", &u, &k);
        for ( int j = 0; j < k; j++ ){
            scanf("%d %d", &v, &weight);
            c[u][v] = weight;
        }
    }
    /* 始点 */
    d[0]     = 0;
    color[0] = GRAY;
    int minv;

    while ( 1 ){
        minv = INFTY;
        u = -1;
        /* 確定していない値の中で最小のものを探す　*/
        for ( int i = 0; i < N; i++ ){
            if ( minv > d[i] && color[i] != BLACK ){
                u    = i;
                minv = d[i];
            }
        }
        if ( u == -1 ) break;
        color[u] = BLACK; /* 値を確定 */
        for ( v = 0; v < N; v++ ){
            if ( color[v] != BLACK && c[u][v] != INFTY ){
                /* まだ確定していない頂点との経路が存在するなら */
                if ( d[v] > d[u] + c[u][v] ){
                    /* 最短経路を探索、他にあるなら更新 */
                    d[v] = d[u] + c[u][v];
                    color[v] = GRAY;
                }
            }
        }

    }

    /* 各頂点までの最短距離 */
    for ( int i = 0; i < N; i++ ){
        printf("%d %d\n", i, d[i]);
    }

    return 0;
}
