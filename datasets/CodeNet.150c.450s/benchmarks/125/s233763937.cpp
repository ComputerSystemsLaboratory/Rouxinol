#include <iostream>
#include <vector>

using namespace std;

vector<int> adja[101];
int d[101], f[101], cnt;

void dfs(int u) {
    d[u] = ++cnt;
    for (auto v : adja[u]) {
        if (d[v] > 0)
            continue;
        dfs(v);
    }
    f[u] = ++cnt;
}

int main() {
    int n, k, u;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        adja[u].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> adja[u][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (d[i] == 0)
            dfs(i);
        cout << i << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}
