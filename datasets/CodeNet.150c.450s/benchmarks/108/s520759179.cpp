#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int M[100][100];
int d[100];
int n;
static const int INFTY = (1 << 21);

void bfs(int x) {
    queue<int> q;
    q.push(x);
    REP (i, n) d[i] = INFTY;

    d[x] = 0;
    while (!q.empty()) {
        int u;
        u = q.front();
        q.pop();
        REP(i, n) {
            if (M[u][i] == 0) continue;
            if (d[i] != INFTY) continue;
            d[i] = d[u] + 1;
            q.push(i);
        }
    }

    REP(i, n) {
        cout << i + 1 << " ";
        if (d[i] == INFTY) {
            cout << -1 << endl;
        } else {
            cout << d[i] << endl;
        }
    }
}

int main() {
    cin >> n;
    int v, m, k;
    REP(i, n) {
        cin >> v >> m;
        v--;
        REP(j, m) {
            cin >> k;
            k--;
            M[v][k] = 1;
        }
    }

    bfs(0);
    return 0;
}
