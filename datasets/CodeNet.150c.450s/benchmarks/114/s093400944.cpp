#include<stdio.h>

#define MAX 1000
#define INFINITY 10000

int n;
int M[MAX][MAX], color[MAX], d[MAX], p[MAX];

enum {
    WHITE,
    GRAY,
    BLACK
};

int prim() {
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
                if(M[target][v] < d[v]) {
                    d[v] = M[target][v];
                    p[v] = target;
                    color[v] = GRAY;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i] != -1) sum += M[i][p[i]];
    }
    return sum;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &M[i][j]);
        }
    }
    printf("%d\n", prim());
    return 0;
}