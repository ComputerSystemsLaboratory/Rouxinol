#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

vector<vector<int>> g(100, vector<int>(0));
vector<int> color(100, -1);
int t = 0;
vector<int> d(100), f(100);

void dfs(int start, int n) {
    color[start] = 1;
    d[start] = ++t;
    rep(i, g[start].size()) {
        if (color[g[start][i]] == -1) {
            dfs(g[start][i], n);
        }
    }
    color[start] = 2;
    f[start] = ++t;
}

int main() {
    int n;
    scanf("%d", &n);
    rep(i, n) {
        int u, k;
        scanf("%d %d", &u, &k); u--; k;
        rep(j, k) {
            int v;
            scanf("%d", &v); v--;
            g[u].push_back(v);
        }
    }
    rep(i, n) {
        if (color[i] == -1) {
            dfs(i, n);
        }
    }
    
    rep(i, n) {
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
}
