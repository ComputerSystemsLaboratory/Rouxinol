#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 100;

int main() {
    vector<int> G[MAX_N];
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int u, k; cin >> u >> k; u--;
        while(k--) {
            int v; cin >> v; v--;
            G[u].push_back(v);
        }
    }

    vector<int> dist(N, -1);
    queue<int> Q;
    Q.push(0);
    dist[0] = 0;

    while(!Q.empty()) {
        int u = Q.front(); Q.pop();
        for(int i = 0; i < (int)G[u].size(); i++) {
            int v = G[u][i];
            if(dist[v] != -1) continue;
            dist[v] = dist[u] + 1;
            Q.push(v);
        }
    }
    for(int i = 0; i < N; i++) cout << i + 1 << ' ' << dist[i] << endl;
}