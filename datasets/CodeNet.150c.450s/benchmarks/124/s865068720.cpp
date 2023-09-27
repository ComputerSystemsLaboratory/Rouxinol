#include<iostream>
#include<unordered_set>
#define N 105
#define UNDEFINED -1
static const int INF = (1<<21);

int n;
int u, k, v, c;
int G[N][N];
int distance[N], hasVisited[N];


void dijkstra(int s) {
    int minv;
    distance[s] = 0;
    while(true) {
        minv = INF;
        int u = UNDEFINED;
        for (int i = 0; i < n; ++i) {
            if(minv > distance[i] && hasVisited[i] != 1) {
                u = i;
                minv = distance[i];
            }
        }
        if(u == UNDEFINED) break;
        hasVisited[u] = 1;
        for (int v = 0; v < n; ++v) {
            if(distance[v] > distance[u] + G[u][v]) {
                distance[v] = distance[u] + G[u][v];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%i %i\n", i, distance[i]);
    }
}

int main() {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            G[i][j] = INF;
        }
        distance[i] = INF;
        hasVisited[i] = 0;
    }

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> u >> k;
        for (int j = 0; j < k; ++j) {
                std::cin >> v >> c;
                G[u][v] = c;
            }
        }

    dijkstra(0);

    return 0;
}
