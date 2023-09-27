#include <cstdio>
#include <queue>
using namespace std;
#define INF (1<<21)

int n, G[100][100], dist[100], visited[100];


int main(void) {
    int u, k, v, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) G[i][j] = 0;

    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        u--;
        for (j = 0; j < k; j++) {
            scanf("%d", &v);
            v--;
            G[u][v] = 1;
        }
    }
    
    for (i = 1; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[0] = 0;
    visited[0] = 1;

    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (i = 0; i < n; i++) {
            if (G[u][i] == 0 || visited[i] == 1) continue;
            q.push(i);
            visited[i] = 1;
            dist[i] = dist[u] + 1;
        }
    }

    for (i = 0; i < n; i++) {
        if (dist[i] == INF) dist[i] = -1;
        printf("%d %d\n", i + 1, dist[i]);
    }

    return 0;
}