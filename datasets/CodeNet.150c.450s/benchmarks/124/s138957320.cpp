#include <stdio.h>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];
int d[MAX];

void dijkstra(int s) {
    int p[n];
    int color[n];
    
    for(int i=0; i<n; i++) {
        color[i] = WHITE;
        d[i] = INFTY;
        p[i] = -1;
    }
    
    d[s] = 0;
    
    while(1) {
        int u;
        int mincost = INFTY;
        for (int i=0; i<n; i++) {
            if (color[i] != BLACK && d[i] < mincost) {
                mincost = d[i];
                u = i;
            }
        }
        
        if (mincost == INFTY) break;
        
        color[u] = BLACK;
        
        for (int v=0; v<=n; v++) {
            if (color[v] != BLACK && M[u][v] != INFTY) {
                if(d[u] + M[u][v] < d[v]) {
                    d[v] = d[u] + M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            M[i][j] = INFTY;
        }
    }
    
    int u, k;
    for (int i=0; i<n; i++) {
        scanf("%d %d", &u, &k);
        for (int j=0; j<k; j++) {
            int index, tmp;
            scanf("%d %d", &index, &tmp);
            M[u][index] = tmp;
        }
    }
    
    dijkstra(0);
    
    for(int i=0; i<n; i++) {
        printf("%d %d\n", i, d[i]);
    }
    
    return 0;
}
