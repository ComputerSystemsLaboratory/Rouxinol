#include <iostream>
#include <stdio.h>
#include <queue>
#define N 101
#define INFTY (1<<21)


int n;
int M[N][N];
int d[N];

void bfs(int u) {
    std::queue<int> Q;
    Q.push(u);
    for (int i = 0; i < n; i++) d[i] = INFTY;
    d[u] = 0;
    while ( ! Q.empty() ) {
        int j = Q.front();
        Q.pop();
        for (int v = 0; v < n; v++) {
            if (M[j][v] == 0) continue;
            if (d[v] != INFTY) continue;
            d[v] = d[j] + 1;
            Q.push(v);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i+1, d[i] == INFTY ? -1 : d[i]);
    }
}

int main() {
    int u, k, v;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) M[i][j] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        u--;
        if (k == 0) continue;
        for (int j = 0; j < k; j++) {
            scanf("%d", &v);
            v--;
            M[u][v] = 1;
        }
    }
    
    bfs(0);
    
    return 0;
}

