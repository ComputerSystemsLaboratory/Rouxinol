#include <queue>
#include <cstdio>

using std::queue;

int main() {
        int n, u, k, v;
        const int N = 100;
        bool graph[N][N] = {{false}};
        int cost[N];
        queue<int> q;
        for (int i = 0; i < N; i++) {
                cost[i] = -1;
        }

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                scanf("%d %d", &u, &k);
                for (int j = 0; j < k; j++) {
                        scanf("%d", &v);
                        graph[u-1][v-1] = true;
                }
        }
        q.push(0);
        cost[0]++;
        while (!q.empty()) {
                int cur = q.front();
                q.pop();
                for (int to = 0; to < n; to++) {
                        if (!graph[cur][to] || cost[to] > -1) {
                                continue;
                        }
                        q.push(to);
                        cost[to] = cost[cur] + 1;
                }
        }
        for (int i = 0; i < n; i++) {
                printf("%d %d\n", i+1, cost[i]);
        }

        return 0;
}