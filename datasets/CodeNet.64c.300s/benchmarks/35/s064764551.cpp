#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int M[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        int u, degree;
        scanf("%d %d", &u, &degree);
        u--;    // convert to 0 index
        for (int j = 0; j < degree; j++) {
            int v;
            scanf("%d", &v);
            v--;    // convert to 0 index
            M[u][v] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j) { printf(" "); }
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
}
