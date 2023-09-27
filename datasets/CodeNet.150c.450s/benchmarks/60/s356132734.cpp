#include <cstdio>

int main(void) {
    int n, u, k, v, i, j;
    scanf("%d", &n);
    int m[n+1][n+1];

    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            m[i][j] = 0;

    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; j++) {
            scanf("%d", &v);
            m[u][v] = 1;
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j-1) printf(" ");
            printf("%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}