#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 100;
vector<int> G[MAX_N];
int d[MAX_N], f[MAX_N];
bool used[MAX_N];

int stamp;

void dfs(const int v) {
    d[v] = stamp++;
    used[v] = true;
    for(int i = 0; i < (int)G[v].size(); i++) {
        int u = G[v][i];
        if(used[u] == false) dfs(u);
    }
    f[v] = stamp++;
}

int main() {
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int u, k; cin >> u >> k; u--;
        while(k--) {
            int v; cin >> v; v--;
            G[u].push_back(v);
        }
        sort(G[u].begin(), G[u].end());
    }

    fill(used, used + N, false);
    stamp = 1;
    for(int i = 0; i < N; i++) {
        if(used[i] == false) dfs(i);
    }

    for(int i = 0; i < N; i++) {
        cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
    }
}