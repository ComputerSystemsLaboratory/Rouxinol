#include <iostream>
using namespace std;

const int MAX_N = 100;
const int WHITE = -1;
const int GRAY = -2;
const int BLACK = -3;

int n;
int color[MAX_N];
bool adj[MAX_N][MAX_N];
int d[MAX_N], f[MAX_N];

int t;

void dfs(int u) {
    color[u] = GRAY;
    d[u] = ++t;
    for (int v = 0; v < n; v++) {
        if (adj[u][v] && color[v] == WHITE) {
            dfs(v);
        }
    }
    color[u] = BLACK;
    f[u] = ++t;
}

void dfs_init(void) {
    t = 0;
    for (int i = 0; i < n; i++) {
        color[i] = WHITE;
    }
    for (int i = 0; i < n; i++) {
        if (color[i] == WHITE) {
            dfs(i);
        }
    }
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v; cin >> v;
            adj[u-1][v-1] = true;
        }
    }

    dfs_init();

    for (int i = 0; i < n; i++) {
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}