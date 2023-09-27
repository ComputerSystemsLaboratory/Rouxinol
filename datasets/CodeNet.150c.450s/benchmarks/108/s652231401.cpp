#include<stdio.h>
#include<queue>
#include<algorithm>

#define MAX 100

int G[MAX+1][MAX+1], d[MAX+1];
int n;
std::queue<int> Q;

void bfs() {
    d[1] = 0;

    Q.push(1);
    while(!Q.empty()) {
        int cur = Q.front();Q.pop();
        for (int i = 1; i <= n; ++i) {
            if (G[cur][i] == 0) continue;
            if (d[i] != -1) continue;

            Q.push(i);
            d[i] = d[cur] + 1;
        }
    }

}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        d[i] = -1;
        for (int j = 1; j <= n; ++j) {
            G[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        int u,k;
        scanf("%d %d", &u, &k);
        for (int j = 0; j < k; ++j) {
            int t;
            scanf("%d", &t);
            G[u][t] = 1;
        }
    }

    bfs();
    for (int i = 1; i <= n; ++i) {
        printf("%d %d\n", i, d[i]);
    }

}