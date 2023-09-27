#include <iostream>
#include <cstdio>
using namespace std;

int n, t, G[101][101], S[101], T[101];

void dfs(int p) {
    if (S[p] != 0) return;
    S[p] = ++t;
    for (int i = 0; i < n; i++)
        if (G[p][i] == 1)
            dfs(i);

    T[p] = ++t;
}


int main(void) {
    int u, k, v, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v;
            G[u - 1][v - 1] = 1;
        }
    }

    t = 0;
    for (int i = 0; i < n; i++)
        dfs(i);

    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", i + 1, S[i], T[i]);

    return 0;
}