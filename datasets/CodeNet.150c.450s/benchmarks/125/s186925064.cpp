#include <cstdio>

int n, G[100][100], d[100], f[100], checked[100], time;

void dfs_visit(int u) {
    int i;
    checked[u] = 1;
    d[u] = ++time;
    for (i = 0; i < n; i++) {
        if (G[u][i] == 0) continue;
        if (checked[i] == 0) dfs_visit(i);
    }
    f[u] = ++time;
}

void dfs() {
    int i;
    for (i = 0; i < n; i++) checked[i] = 0;
    time = 0;

    for (i = 0; i < n; i++) {
        if (checked[i] == 0) dfs_visit(i);
    }
}

int main(void) {
    int u, k, v, i, j;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) G[i][j] = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        u--;
        for (j = 0; j < k; j++) {
            scanf("%d", &v);
            v--;
            G[u][v] = 1;
        }
    }

    dfs();

    for (i = 0; i < n; i++) {
        printf("%d %d %d\n", i + 1, d[i], f[i]);
    }

    return 0;
}