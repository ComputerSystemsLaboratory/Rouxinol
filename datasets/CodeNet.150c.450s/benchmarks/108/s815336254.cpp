/*
** BFS
*/

# include <cstdio>
# include <cstring>
# include <queue>
using namespace std;

const int MAX = 100 + 2;
int n, g[MAX][MAX], d[MAX], c[MAX];

void init() {
    scanf("%d", &n);
    memset(g, 0, sizeof(g));
    memset(c, 0, sizeof(c));

    int u, v, k;
    for (int i = 1; i <= n; i++) {
        d[i] = -1;
        scanf("%d%d", &u, &k);
        while (k--) {
            scanf("%d", &v);
            g[u][v] = 1;
        }
    }
}

void bfs() {
    queue<int> q;
    q.push(1);
    c[1] = 1;
    d[1] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (g[v][i] == 1 && c[i] == 0) {
                q.push(i);
                c[i] = 1;
                d[i] = d[v] + 1;
            }
        }
    }
}

void solve() {
    init();
    bfs();
    for (int i = 1; i <= n; i++) {
        printf("%d %d\n", i, d[i]);
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
