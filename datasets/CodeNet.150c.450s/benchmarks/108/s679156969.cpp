#include <stdio.h>
#include <queue>
#include <algorithm>

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;

int n;
int M[N][N]; // ??£??\??????
int d[N]; // ???????????¢


void bfs()
{
    int i;
    for (i = 0; i < n; i++) {
        d[i] = -1;
    }
    
    int u;
    u = 0;
    d[u] = 0;
    queue<int> q;
    q.push(u);
    
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (i = 0; i < n; i++) {
            if (M[u][i] == 0) continue;
            if (d[i] != -1) continue;
            q.push(i);
            d[i] = d[u] + 1;
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("%d %d\n", i+1, d[i]);
    }
}


int main()
{
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }
    
    // input graph
    int u, k, v;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; j++) {
            scanf("%d", &v);
            M[u-1][v-1] = 1;
        }
    }
    
    bfs();
    
    return 0;
}