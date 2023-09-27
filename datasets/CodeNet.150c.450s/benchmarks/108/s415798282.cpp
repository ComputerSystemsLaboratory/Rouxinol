#include <iostream>
#include <cstring>

using namespace std;

int adja[101][101], dist[101];

void bfs() {
    int que[100], l = 0, d = 1;
    que[0] = 1;l++;
    while (l > 0) {
        int temp[100], m = 0;
        for (int i = 0; i < l; ++i) {
            int u = que[i];
            if (0 < dist[u] && dist[u] <= d)
                continue;
            dist[u] = d;
            for (int j = 0, v; (v = adja[u][j]) > 0; j++) {
                temp[m++] = v;
            }
        }
        memcpy(que, temp, sizeof(int) * m);
        l = m;
        d++;
    }
}

int main() {
    int n, k, u;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            cin >> adja[u][j];
        }
    }
    bfs();
    for (int i = 1; i <= n; ++i) {
        cout << i << " " << dist[i] - 1 << endl;
    }

    return 0;
}
