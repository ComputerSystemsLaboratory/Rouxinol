#include <bits/stdc++.h>
using namespace std;

void BFS(vector<vector<int> > G, int N, int start) {
    queue<int> que;
    vector<int> dist(N, -1);
    vector<int> prev(N, -1);
    dist[0] = 0;
    que.push(start);
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (auto e : G[v]) {
            if (dist[e] != -1) continue;
            dist[e] = dist[v] + 1;
            prev[e] = v + 1;
            que.push(e);
        }
    }

    cout << "Yes" << endl;
    for (size_t i = 1; i < N; i++) cout << prev[i] << endl;
    return;
}

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > G(n, vector<int>());
    for (size_t i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    BFS(G, n, 0);
    return 0;
}
