#include<stdio.h>

#define MAX 1000
#define INFINITY 300000

int n;
int M[MAX][MAX], color[MAX], d[MAX], p[MAX];

enum Color {
    WHITE,
    GRAY,
    BLACK
};

void dijkstra() {
    for (int i = 0; i < n; ++i) {
        color[i] = WHITE;
        d[i] = INFINITY;
        p[i] = -1;
    }
    d[0] = 0;

    while (true) {
        int min = INFINITY;
        int target = -1;
        for (int i = 0; i < n; ++i) {
            if (d[i] < min && color[i] != BLACK) {
                min = d[i];
                target = i;
            }
        }
        if (target == -1) break;

        color[target] = BLACK;

        for (int v = 0; v < n; ++v) {
            if (color[v] != BLACK && M[target][v] != -1) {
                if(M[target][v] + d[target] < d[v]) {
                    d[v] = d[target] + M[target][v];
                    p[v] = target;
                    color[v] = GRAY;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d %d\n", i, d[i]);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j] = -1;
        }
    }
    for (int i = 0; i < n; ++i) {
        int id, k;
        scanf("%d %d", &id, &k);
        for (int j = 0; j < k; ++j) {
            int t;
            scanf("%d", &t);
            scanf("%d", &M[id][t]);
        }
    }
    dijkstra();
    return 0;
}