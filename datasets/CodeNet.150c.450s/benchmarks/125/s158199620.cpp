#include <iostream>
#include <vector>
using namespace std;
int t;
vector<int> G[110], d(110), f(110);

void dfs(int u) {
    d[u] = ++t;
    for (int v: G[u]) {
        if (d[v] == 0) dfs(v); 
    }
    f[u] = ++t; 
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v; cin >> v;
            G[u-1].push_back(v-1);
        }
    }
    for (int u = 0; u < n; u++) {
        if (d[u] == 0) dfs(u);
    }
    for (int u = 0; u < n; u++) {
        cout << u+1 << " " << d[u] << " " << f[u] << endl; 
    }
}
