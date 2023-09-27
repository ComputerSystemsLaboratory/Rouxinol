#include <iostream>
#include <queue>
const int MAX_N = 100;
const int INF = 999999999;
using namespace std;

int n;
int color[MAX_N];
bool adj[MAX_N][MAX_N];
int d[MAX_N];

void bfs(int s) {
    queue<int> que; que.push(s);
    for (int i = 0; i < n; i++) d[i] = INF;
    d[s] = 0;

    int u;
    while (!que.empty()) {
        u = que.front(); que.pop();
        for (int v = 0; v < n; v++) {
            if (adj[u][v] && d[v] == INF) {
                d[v] = d[u] + 1;
                que.push(v);
            }
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

    bfs(0);

    for (int i = 0; i < n; i++) {
        if (d[i] != INF) {
            cout << i+1 << " " << d[i] << endl;
        } else {
            cout << i+1 << " " << -1 << endl;
        }
    }

    return 0;
}