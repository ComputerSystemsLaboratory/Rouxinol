// Program Name: Minimum Spanning Tree
// Written by: by_sknight
// Date: 2019/4/27
#include <bits/stdc++.h>
using namespace std;
#define MAX 105
#define INFTY INT_MAX
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, G[MAX][MAX];

int prim() {
    int d[MAX], p[MAX], color[MAX];
    int u, minv;
    for (int i = 0; i < n; i++) {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }

    d[0] = 0;

    while (1) {
        u = -1;
        minv = INFTY;
        for (int i = 0; i < n; i++) {
            if (color[i] != BLACK && d[i] < minv) {
                minv = d[i];
                u = i;
            }
        }
        if (u == -1) 
            break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && G[u][v] < d[v]) {
                d[v] = G[u][v];
                p[v] = u;
                color[v] = GRAY;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != -1) {
            sum += d[i];
        }
    }
    return sum;
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            G[i][j] = (k == -1 ? INFTY : k);
        }
    }

    int sum = prim();

    cout << sum << endl;
}
