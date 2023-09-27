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
    int N, M;
    cin >> N >> M;
    Graph G(N, vector<int>());
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(N, -1);
    vector<int> prev(N, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while(!que.empty()) {
        int v = que.front();
        que.pop();
        for (auto nv : G[v]) {
            if (dist[nv] == -1) {
                dist[nv] = dist[v];
                prev[nv] = v;
                que.push(nv);
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < N; ++i) cout << prev[i] + 1 << endl;
    return 0;
}