#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
#define INF 1 << 30
typedef pair<int, int> P;

int n, M[100][100], d[100];

void dijkstra(void) {
    int i, u, v;
    P t;
    priority_queue<P, vector<P>, greater<P> > pq;

    pq.push(make_pair(0, 0));
    while (!pq.empty()) {
        t = pq.top(); pq.pop();
        v = t.first;
        u = t.second;

        if (d[u] != INF) continue;
        d[u] = v;

        for (i = 0; i < n; i++) {
            if (d[i] != INF || M[u][i] == INF) continue;
            pq.push(make_pair(v + M[u][i], i));
        }
    }
}

int main(void) {
    int i, j, u, k, v, c;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        d[i] = INF;
        for (j = 0; j < n; j++) M[i][j] = INF;
    }

    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; j++) {
            scanf("%d %d", &v, &c);
            M[u][v] = c;
        }
    }

    dijkstra();

    for (i = 0; i < n; i++) printf("%d %d\n", i, d[i]);

    return 0;
}