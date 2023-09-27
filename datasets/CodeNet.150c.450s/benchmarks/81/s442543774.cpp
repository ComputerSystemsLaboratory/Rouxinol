#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 10;
unsigned N, dist[MAXN][MAXN];
int mark[MAXN];

int main() {
    //freopen("0189.txt", "r", stdin);
    while (~scanf("%d", &N) && N) {
        memset(mark, 0, sizeof(mark));
        memset(dist, 0x7f, sizeof(dist));

        for (int i = 0; i < N; i++) {
            int u, v, d;
            scanf("%d%d%d", &u, &v, &d);
            dist[u][v] = dist[v][u] = d;
            dist[u][u] = dist[v][v] = 0;
            mark[u] = mark[v] = 1;
        }
        for (int k = 0; k < MAXN; k++) if (mark[k]) {
            for (int u = 0; u < MAXN; u++) if (mark[u]) {
                for (int v = 0; v < MAXN; v++) if (mark[v]) {
                    if (dist[u][v] > dist[u][k] + dist[k][v]) {
                        dist[u][v] = dist[u][k] + dist[k][v];
                    }
                }
            }
        }

        int start_pos = 0;
        int distance = 0x7f7f7f7f;
        for (int s = 0; s < MAXN; s++) if (mark[s]) {
            int tmp = 0;
            for (int e = 0; e < MAXN; e++) if (mark[e]) {
                tmp += dist[s][e];
            }
            if (tmp < distance) {
                start_pos = s;
                distance = tmp;
            }
        }
        printf("%d %d\n", start_pos, distance);
    }
}