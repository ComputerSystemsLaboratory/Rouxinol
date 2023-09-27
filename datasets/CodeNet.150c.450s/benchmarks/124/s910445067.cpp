#include <iostream>
using namespace std;

#define MAX_SIZE 110
#define INF (1<<30)
#define NOT_VISITED 0
#define VISITED 1
#define COMPLETE 2

int n, G[MAX_SIZE][MAX_SIZE];
int d[MAX_SIZE], status[MAX_SIZE];

void dijkstra() {
    for (int i = 0; i < n; i++) {
        d[i] = INF;
        status[i] = NOT_VISITED;
    }
    d[0] = 0;

    int u, min_cost;
    while (1) {
        u = -1;
        min_cost = INF;
        for (int i = 0; i < n; i++) {
            if (min_cost > d[i] && status[i] != COMPLETE) {
                u = i;
                min_cost = d[i];
            }
        }
        if (u == -1) break;
        status[u] = COMPLETE;
        for (int i = 0; i < n; i++) {
            if (status[i] == COMPLETE || G[u][i] == INF) continue;
            if (d[i] > d[u] + G[u][i]) {
                d[i] = d[u] + G[u][i];
                status[i] = VISITED;
            }
        }
    }
    
    return;
}

void print() {
    for (int i = 0; i < n; i++) {
        cout << i << " ";
        if (d[i] == INF) cout << -1;
        else cout << d[i];
        cout << endl;
    }
    return;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            G[i][j] = INF;
        }
    }

    int u, k, v, c;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            G[u][v] = c;
        }
    }

    dijkstra();

    print();

    return 0;
}
