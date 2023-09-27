#include <cstdio>
#define INF 1<<30

int n, M[100][100];

int prim() {
    int e, minv, minx, s;
    int p[n], d[n], v[n];

    for (e = 0; e < n; e++) {
        p[e] = -1;
        d[e] = INF;
        v[e] = 0;
    }

    d[0] = 0;

    while (1) {
        minv = INF;
        minx = -1;
        for (e = 0; e < n; e++) {
            if (minv > d[e] && v[e] != 1) {
                minx = e;
                minv = d[e];
            }
        }

        if (minx == -1) break;
        v[minx] = 1;
        
        for (e = 0; e < n; e++) {
            if (v[e] != 1 && M[minx][e] != INF) {
                if (d[e] > M[minx][e]) {
                    d[e] = M[minx][e];
                    p[e] = minx;
                }
            }
        }
    }

    s = 0;
    for (e = 0; e < n; e++) {
        if (p[e] != -1) s += M[e][p[e]];
    }

    return s;
}

int main(void) {
    int i, j, v;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &v);
            M[i][j] = (v == -1) ? INF : v;
        }
    }

    printf("%d\n", prim());

    return 0;
}