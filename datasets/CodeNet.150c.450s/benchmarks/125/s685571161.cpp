#include <iostream>
#include <vector>

using namespace std;

const int MAX = 101;

vector<int> G[MAX];
int d[MAX], f[MAX];
int *T;

void dfs(int u) {

    if (!d[u]) d[u] = ++(*T);

    for (int v : G[u]) {
        if (!d[v]) {
            d[v] = ++(*T);
            dfs(v);
        }
    }

    if (!f[u]) f[u] = ++(*T);
}

int main() {

    int n;
    cin >> n;

    int t = 0;
    T = &t;
    fill(d, d + MAX, 0);
    fill(f, f + MAX, 0);

    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            G[u].push_back(v);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!d[i]) dfs(i);
    }


    for (int i = 1; i <= n; i++) {
        cout << i << " " << d[i] << " " << f[i] << endl;
    }
}
