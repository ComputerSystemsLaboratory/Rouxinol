#include <iostream>
#include <stdio.h>
#define MAX 101
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];
int color[MAX];
int s_timer[MAX], b_timer[MAX], pass;

void dfs_search(int u) {
    int v;
    color[u] = GRAY;
    s_timer[u] = ++pass;
    for (v = 0; v < n; v++) {
        if (M[u][v] == 0) continue;
        if (color[v] == WHITE) {
            dfs_search(v);
        }
    }
    color[u] = BLACK;
    b_timer[u] = ++pass;
}

void dfs() {
    for (int i = 0; i < n; i++) {
        color[i] = WHITE;
    }
    pass = 0;
    
    for (int j = 0; j < n; j++) {
        if (color[j] == WHITE) dfs_search(j);
    }
    
    for (int t = 0; t < n; t++) {
        printf("%d %d %d\n", t+1, s_timer[t], b_timer[t]);
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
    
    dfs();
    
    return 0;
}

