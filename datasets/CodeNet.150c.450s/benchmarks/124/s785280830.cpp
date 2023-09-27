#include <iostream>
const int MAX_N = 100;
const int INF = 999999999;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
using namespace std;

int n;
int adj[MAX_N][MAX_N];
int color[MAX_N];
int d[MAX_N];

void dijkstra(int s) {
    for (int i = 0; i < n; i++) {
        color[i] = WHITE;
        d[i] = INF;
    }
    d[s] = 0;
    color[s] = GRAY;

    while (1) {
        int minv = INF;
        int u = -1;
        for (int i = 0; i < n; i++) {
            if (color[i] != BLACK && d[i] < minv) {
                minv = d[i];
                u = i;
            }
        }
        if (u == -1) break;

        color[u] = BLACK;
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && adj[u][v] != INF) {
                if (d[v] > d[u] + adj[u][v]) {
                    d[v] = d[u] + adj[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) adj[i][j] = INF;

    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c; cin >> v >> c;
            adj[u][v] = c;
        }
    }

    dijkstra(0);

    for (int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }
    return 0;
}