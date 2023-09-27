#include <cstdio>

typedef struct timestamp {
        int d, f;
} timestamp;

const int N = 100;
bool graph[N][N] {{false}};
timestamp ts[N];
int time = 0;

void search(int n, int cur) {
        if (ts[cur].d) {
                return;
        }
        ts[cur].d = ++time;
        for (int i = 0; i < n; i++) {
                if (graph[cur][i]) {
                        search(n, i);
                }
        }
        ts[cur].f = ++time;
}

int main() {
        int n, u, k, v;
        for (int i = 0; i < N; i++) {
                ts[i].d = ts[i].f = 0;
        }

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                scanf("%d %d", &u, &k);
                for (int j = 0; j < k; j++) {
                        scanf("%d", &v);
                        graph[u-1][v-1] = true;
                }
        }
        for (int cur = 0; cur < n; cur++) {
                search(n, cur);
        }
        for (int i = 0; i < n; i++) {
                printf("%d %d %d\n", i+1, ts[i].d, ts[i].f);
        }

        return 0;
}