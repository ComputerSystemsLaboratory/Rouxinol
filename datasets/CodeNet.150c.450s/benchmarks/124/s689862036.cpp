// Problem name: Single Source Shortest Path I
// Written by: by_sknight
// Date: 2019/4/27
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define INFTY INT_MAX

int n, G[MAX][MAX];

int s3p(int x) {
    int color[MAX], d[MAX];
    for (int i = 0; i < n; i++) {
        color[i] = 0;
        d[i] = INFTY;
    }
    d[0] = 0;
    while (1) {
        int u = -1, minv = INFTY;
        for (int i = 0; i < n; i++) {
            if (color[i] != 1 && d[i] < minv) {
                minv = d[i];
                u = i;
            }
        }
        if (u == x)
            return minv;
        color[u] = 1;
        for (int v = 0; v < n; v++) {
            if (color[v] != 1 && G[u][v] != INFTY) {
                if (d[u] + G[u][v] < d[v])
                    d[v] = d[u] + G[u][v];
            }
        }
    }
}

int main(void) {
    int k, v, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            G[i][j] = INFTY;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> k >> k;
        while (k--) {
            cin >> v >> c;
            G[i][v] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << " " << s3p(i) << endl;
    }
}
