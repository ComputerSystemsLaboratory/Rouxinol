#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int INF = 10000000;
const int MAX_V = 1000;
int graph[MAX_V][MAX_V];
int n;

bool visited[MAX_V];
int cost[MAX_V];

void init_graph() {
    REP(i, MAX_V) {
        REP(j, MAX_V) {
            if (i == j) graph[i][j] = 0;
            else        graph[i][j] = INF;
        }
    }
}

void make() {
    REP(i, n) {
        int u, v, c;
        scanf("%d %d %d", &u, &v, &c);
        graph[u][v] = c; graph[v][u] = c;
    }
}

void init_dijkstra() {
    REP(i, MAX_V) visited[i] = false;
    REP(i, MAX_V) cost[i] = INF;
}

void dijkstra(int start) {
    init_dijkstra();

    cost[start] = 0;

    while (true) {
        int mi = INF;
        int nxt = -1;
        visited[start] = true;
        REP(i, MAX_V) {
            if (visited[i]) continue;
            if (i != start) {
                int d = cost[start] + graph[start][i];
                if (d < cost[i]) {
                    cost[i] = d;
                }
            }
            if (mi > cost[i]) {
                mi = cost[i];
                nxt = i;
            }
        }
        start = nxt;
        if (nxt == -1) break;
    }
}

void solve() {
    while (true) {
        scanf("%d", &n);

        if (n == 0) break;

        init_graph();

        make();

        int mi = INF;
        int town = 0;
        REP(i, MAX_V) {
            dijkstra(i);
            int sm = 0;
            REP(j, MAX_V) {
                if (cost[j] < INF)
                    sm += cost[j];
            }
            if (sm > 0 && sm < mi) {
                mi = sm;
                town = i;
            }
        }

        printf("%d %d\n", town, mi);
    }
}

int main() {
    solve();
    return 0;
}