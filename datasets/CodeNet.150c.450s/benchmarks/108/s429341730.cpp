#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= n; i++)

int n;
queue<int> q;
vector<int> depth;

void dfs(int start, vector<vector<int>> a) {
    depth[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        rep(adj, n) {
            if (a[current][adj] == 1 && depth[adj] == -1) {
                depth[adj] = depth[current] + 1;
                q.push(adj);
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    depth.resize(n+1, -1);
    vector<vector<int>> a(n+1, vector<int>(n+1, 0));
    rep(i, n) {
        int u;
        scanf("%d", &u);
        int k;
        scanf("%d", &k);
        rep(j, k) {
            int adj;
            scanf("%d", &adj);
            a[u][adj] = 1;
        }
    }
    dfs(1, a);
    rep(i, n) {
        printf("%d %d\n", i, depth[i]);
    }
}
