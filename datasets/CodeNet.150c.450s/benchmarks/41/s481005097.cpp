#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll inf = 0x3f3f3f3f3f3f3f3f;
ll d[105][105];

int main() {
    int v, e; cin >> v >> e;
    for (int i = 0; i < v; i++) for (int j = 0; j < v; j++) d[i][j] = inf;
    for (int i = 0; i < e; i++) {
        int a, b, w; cin >> a >> b >> w;
        d[a][b] = w;
    }
    for (int k = 0; k < v; k++) for (int i = 0; i < v; i++) for (int j = 0; j < v; j++)
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    for (int i = 0; i < v; i++) if (d[i][i] < 0) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < v; i++) d[i][i] = 0;
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            cout << (d[i][j] >= inf / 2 ? string("INF") : to_string(d[i][j])) << " \n"[j + 1 == v];
}

