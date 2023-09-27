/*
** dfs 遍历图
*/

# include <cstdio>
# include <cstring>
# include <stack>
using namespace std;

const int MAX = 100 + 2;

int g[MAX][MAX], d[MAX], f[MAX], c[MAX], n, t;

void init() {
    memset(g, 0, sizeof(g));
    memset(d, 0, sizeof(d));
    // memset(f, 0, sizeof(f));
    memset(c, 0, sizeof(c));
    scanf("%d", &n);
    int u, v, k;
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &u, &k);
        while (k--) {
            scanf("%d", &v);
            g[u][v] = 1;
        }
    }

    t = 0;
}

void dfs(int u) {
    t++;
    stack<int> s;
    s.push(u);
    int node;
    d[u] = t;
    c[u] = 1;

    while(!s.empty()) {
        t++;
        node = s.top();
        int p = 1;
        for (; p <= n; p++) {
            if (g[node][p] != 0 && c[p] == 0) {
                s.push(p);
                d[p] = t;
                c[p] = 1;
                break;
            }
        }
        if (p > n) {
            f[node] = t;
            s.pop();
        }
    }
}

void solve() {
    init();
    for (int i = 1; i <= n; i++) {
        if (c[i] == 0) {
            dfs(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, d[i], f[i]);
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}

