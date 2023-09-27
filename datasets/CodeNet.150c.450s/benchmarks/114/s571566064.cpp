#include <stdio.h>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim() {
    int d[n], p[n];
    int color[n];
    
    for(int i=0; i<n; i++) {
        color[i] = WHITE;
        d[i] = INFTY;
        p[i] = -1;
    }
    
    d[0] = 0;
    
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
                if(M[u][v] < d[v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    
    int sum = 0;
    for (int i=0; i<n; i++) {
        if(p[i] != -1) sum += M[i][p[i]];
    }
    return sum;
}

int main() {
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int tmp;
            scanf("%d", &tmp);
            M[i][j] = (tmp == -1) ? INFTY : tmp;
        }
    }
    
    int sum = prim();
    printf("%d\n", sum);
    
    return 0;
}
