#include <iostream>
using namespace std;

#define MAX_SIZE 110
#define INF (1<<30)
#define NOT_VISITED 0
#define VISITED 1
#define COMPLETE 2

int n, G[MAX_SIZE][MAX_SIZE];

int prim() {
    int d[MAX_SIZE], parent[MAX_SIZE], status[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        d[i] = INF;
        parent[i] = -1;
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
            if (d[i] > G[u][i]) {
                d[i] = G[u][i];
                parent[i] = u;
                status[i] = VISITED;
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (parent[i] != -1) sum += G[i][parent[i]];
    }

    return sum;
}

int main() {
    cin >> n;

    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            if (a == -1) G[i][j] = INF;
            else G[i][j] = a;
        }
    }

    cout << prim() << endl;

    return 0;
}
