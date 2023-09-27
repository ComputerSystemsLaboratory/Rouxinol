#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
#define N 101

using namespace std;

int visited[N], nt[N], discovery[N], finish[N], tt, n;
vector<int> G[N];

int next(int u) {
    for (int v = nt[u]; v < G[u].size(); v++) {
        nt[u] = v + 1;
        return G[u][v];
    }
    return -1;
}

void dfs(int r) {
    memset(nt, 0, sizeof(nt));

    stack<int> S;
    S.push(r);

    visited[r] = 1;
    discovery[r] = ++tt;

    while (!S.empty()) {
        int u = S.top();
        int v = next(u);

        if (v != -1) {
            if (visited[v] == 0) {
                visited[v] = 1;
                discovery[v] = ++tt;
                S.push(v);
            }
        }
        else {
            S.pop();
            visited[u] = 1;
            finish[u] = ++tt;
        }
    }
}

int main() {
    int u, k, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; j++) {
            cin >> v;
            v--;
            G[u].push_back(v);
        }
    }

    memset(visited, 0, sizeof(visited));
    tt = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << discovery[i] << " " << finish[i] << endl;
    }

    return 0;
}