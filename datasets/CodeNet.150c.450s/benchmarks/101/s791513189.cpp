/*
** Connected Components
*/

# include <cstdio>
# include <vector>
# include <queue>
using namespace std;

const int MAX = 100000;

int n, m, q, c[MAX];
vector<int> g[MAX];

void init() {
    scanf("%d%d", &n, &m);
    int u, v;
    while (m--) {
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
}

void bfs(int u, int mark) {
    queue<int> que;
    que.push(u);
    c[u] = mark;

    while (!que.empty()) {
        int t = que.front();
        que.pop();
        for (int i = 0; i < g[t].size(); i++) {
            if (c[g[t][i]] == 0) {
                c[g[t][i]] = mark;
                que.push(g[t][i]);
            }
        }
    }
}

void set_c() {
    int mark = 1;
    for (int i = 0; i < n; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            bfs(i, mark++);
        }
    }
}

void solve() {
    init();
    scanf("%d", &q);
    set_c();
    int u, v;
    while (q--) {
        scanf("%d%d", &u, &v);
        if (c[u] == c[v]) {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
