/*
AizuOJ ALDS1_11_B

???;DFS;????´¢;?¨????
*/
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN=110;
int n;
vector<int> adj[MAXN];
int visited[MAXN], d[MAXN], f[MAXN], t=0;

void dfs(int s) {
    visited[s]=true;
    d[s]=++t;
    for (vector<int>::iterator iter=adj[s].begin(); iter!=adj[s].end(); iter++) {
        if (!visited[*iter]) dfs(*iter);
    }
    f[s]=++t; // ????????¶????????????
}

void add_edge(int u, int v) {
    adj[u].push_back(v);
}

int k, tmp, v;
int main() {
    scanf("%d", &n);
    for (int u=1; u<=n; u++) {
        scanf("%d%d", &tmp, &k); // k ?????????
        while (k--) {
            scanf("%d", &v);
            add_edge(u, v);
        }
        sort(adj[u].begin(), adj[u].end());
    }
    for (int u=1; u<=n; u++) {
        if (!visited[u]) dfs(u);
    }
    for (int u=1; u<=n; u++) {
        printf("%d %d %d\n", u, d[u], f[u]);
    }
    return 0;
}