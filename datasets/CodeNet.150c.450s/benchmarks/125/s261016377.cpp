#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int MOD = 1000000009;
const long long INF = 1LL << 60;

vector<bool> seen;
vector<int> first_order;
vector<int> last_order;

void dfs(Graph &G, int v, int& ptr) {
    first_order[v] = ptr++;
    seen[v] = true;
    for (auto nv : G[v]) {
        if (seen[nv]) continue;
        dfs(G, nv, ptr);
    }
    last_order[v] = ptr++;
}

int main() {
    int N;
    cin >> N;
    Graph G(N);
    for (int i = 0; i < N; ++i) {
        int u, k;
        cin >> u >> k;
        --u;
        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            --v;
            G[u].push_back(v);
        }
        sort(G[u].begin(), G[u].end());
    }
    seen.assign(N, false);
    first_order.assign(N, 0);
    last_order.assign(N, 0);
    int ptr = 0;
    for (int i = 0; i < N; ++i) {
        if (seen[i] == false) dfs(G, i, ptr);
    }

    for (int i = 0; i < N; ++i) {
        cout << i+1 << " " << first_order[i]+1 << " " << last_order[i]+1 << endl;
    }
    return 0;
}
