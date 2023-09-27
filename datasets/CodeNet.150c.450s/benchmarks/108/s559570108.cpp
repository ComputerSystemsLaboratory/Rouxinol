#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int MOD = 1000000009;
const long long INF = 1LL << 60;

int main() {
    int N;
    cin >> N;
    Graph G(N);
    for (int i = 0; i < N; ++i) {
        int u, k;
        cin >> u >> k;
        --u;
        for (int i = 0; i < k; ++i) {
            int v;
            cin >> v;
            --v;
            G[u].push_back(v);
        }
    }
    vector<int> dist(N, -1);
    dist[0] = 0;
    queue<int> que;
    que.push(0);
    while(!que.empty()) {
        auto q = que.front(); que.pop();
        for (auto&& nq : G[q]) {
            if (dist[nq] != -1) continue;
            dist[nq] = dist[q] + 1;
            que.push(nq);
        }
    }
    for (int i = 0; i < N; ++i)  cout << i+1 << " " << dist[i] << endl;
    return 0;
}
