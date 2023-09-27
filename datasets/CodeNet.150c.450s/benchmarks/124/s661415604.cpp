#include <cstdio>

const int N = 100;
const int INF = 10000001;
int cost[N][N];
int minCost[N] = {0};
bool isDecide[N] = {false};

int getMinIndex(int n) {
        int minIndex = -1;
        int cost = INF;
        for (int i = 0; i < n; i++) {
                if (minCost[i] < cost && !isDecide[i]) {
                        cost = minCost[i];
                        minIndex = i;
                }
        }

        return minIndex;
}

int main() {
        for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                        cost[i][j] = -1;
                }
        }
        for (int i = 1; i < N; i++) {
                minCost[i] = INF;
        }
        int n, u, k, v, c;

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                scanf("%d %d", &u, &k);
                for (int j = 0; j < k; j++) {
                        scanf("%d %d", &v, &c);
                        cost[u][v] = c;
                }
        }
        while (true) {
                int from = getMinIndex(n);
                if (from < 0) {
                        break;
                }
                isDecide[from] = true;
                for (int to = 0; to < n; to++) {
                        if (cost[from][to] < 0 || isDecide[to]) {
                                continue;
                        }
                        int newCost = minCost[from] + cost[from][to];
                        if (newCost < minCost[to]) {
                                minCost[to] = newCost;
                        }
                }
        }
        for (int i = 0; i < n; i++) {
                printf("%d %d\n", i, minCost[i]);
        }

        return 0;
}