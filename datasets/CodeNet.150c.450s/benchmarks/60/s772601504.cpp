#include<stdio.h>

#define MAX 100

int G[MAX+1][MAX+1];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            G[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        int u,k;
        scanf("%d %d", &u, &k);
        for (int j = 0; j < k; ++j) {
            int t;
            scanf("%d", &t);
            G[u][t] = 1;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j > 1) printf(" ");
            printf("%d",G[i][j]);
        }
        printf("\n");
    }
}