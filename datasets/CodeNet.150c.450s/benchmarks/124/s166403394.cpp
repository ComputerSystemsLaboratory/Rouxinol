#include <bits/stdc++.h>
using namespace std;

static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int BLACK = 1;

int n, M[MAX][MAX];

void dijkstra() {
    int u, minv;
    int color[MAX], d[MAX];
    for (int i = 0; i < n; i++) {
        color[i] = WHITE;
        d[i] = INFTY;
    }

    // 0 start
    d[0] = 0;
    while (true) {
        // choose u
        minv = INFTY;
        u = -1;
        for (int i = 0; i < n; i++)
        {
            if (color[i] != BLACK && d[i] < minv) {
                u = i;
                minv = d[i];
            }
        }

        if (u == -1) {
            break;
        }

        // move u
        color[u] = BLACK;

        // update distance
        for (int v = 0; v < n; v++){
            if (color[v] != BLACK && M[u][v] != INFTY) {
                if (d[v] > d[u] + M[u][v])
                    d[v] = d[u] + M[u][v];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = INFTY;
        }
    }

    int u, k, c, v;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    dijkstra();
}
