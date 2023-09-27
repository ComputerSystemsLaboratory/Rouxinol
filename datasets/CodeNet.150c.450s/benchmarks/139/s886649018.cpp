#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1LL << 60;
ll MOD = 1e9 + 7;

int N, M;
vector<vector<int>> edge(0, vector<int>(0));
vector<bool> visited;
vector<int> sign;

queue<int> q;

void bfs() {
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        visited[now] = true;
        for (int i = 0; i < (int)edge[now].size(); i++) {
            int next = edge[now][i];
            if (visited[next]) continue;
            if (sign[next] != -1) continue;
            sign[next] = now;
            q.push(next);
        }
    }
}

int main() {
    cin >> N >> M;
    edge.resize(N);
    sign.assign(N, -1);
    visited.assign(N, false);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    q.push(0);
    bfs();
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) {
        cout << ++sign[i] << endl;
    }
    return 0;
}