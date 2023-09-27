#include <bits/stdc++.h>
using namespace std;

int n, u, k, v;
int g[101][101];

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; ++j) {
            cin >> v;
            v--;
            g[u][v] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << g[i][j] << (j == n - 1 ? "\n" : " ");
        }
    }

    return 0;
}