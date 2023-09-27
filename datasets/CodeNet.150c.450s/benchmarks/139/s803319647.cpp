#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
Graph G;
vector<int> to_exit;

void bfs(int start) {
    queue<int> que;
    que.push(start);
    while (!que.empty())
    {
        int cur = que.front();
        que.pop();
        for (auto nex: G[cur]) {
            if (to_exit[nex] != -1) continue;
            to_exit[nex] = cur;
            que.push(nex);
        }
    }
    
}


int main() {
    int N, M;
    cin >> N >> M;
    G.assign(N, vector<int>());
    to_exit.assign(N, -1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    to_exit[0] = -2;
    bfs(0);
    cout << "Yes" << endl;
    for (auto i: to_exit) {
        if (i == -2) continue;
        cout << i + 1 << endl;
    }
    return 0;
}