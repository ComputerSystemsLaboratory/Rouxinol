#include <stdio.h>
#include <limits.h>
#include <queue>

#define N 100

int n;
int M[N][N];
int d[N];

static void bfs(int s)
{
    std::queue<int> q;
    q.push(s);

    d[s] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < n; v++) {
            if (M[u][v] == 0)
                continue;
            if (d[v] != INT_MAX)
                continue;
            d[v] = d[u] + 1;
            q.push(v);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i + 1, (d[i] == INT_MAX) ? -1 : d[i]);
    }
}

int main()
{
    int u, k;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
        d[i] = INT_MAX;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (int j = 0; j < k; j++) {
            int v;
            scanf("%d", &v);
            M[u - 1][v - 1] = 1;
        }
    }
    
    bfs(0);
    return 0;
}
