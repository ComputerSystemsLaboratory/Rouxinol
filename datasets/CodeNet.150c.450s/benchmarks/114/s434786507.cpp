#include <iostream>
const int MAX_N = 100;
const int INF = 999999999;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
using namespace std;

int n;
int color[MAX_N];
int adj[MAX_N][MAX_N];
int d[MAX_N], p[MAX_N];

int prim(void) {
    int u, minv;

    for (int i = 0; i < n; i++) {
        color[i] = WHITE;
        d[i] = INF;
        p[i] = -1;
    }

    d[0] = 0;
    while (1) {
        minv = INF;
        u = -1;
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if (minv == INF) break;

        color[u] = BLACK;
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && adj[u][v] != INF) {
                if (d[v] > adj[u][v]) {
                    d[v] = adj[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != -1) sum += adj[i][p[i]];
    }

    return sum;
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int v; cin >> v;
            if (v == -1) adj[i][j] = INF;
            else adj[i][j] = v;
        }
    }

    cout << prim() << endl;
    return 0;
}