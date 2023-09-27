#include<bits/stdc++.h>
using namespace std;

#define M 1000000007
vector<int> dist;
vector<vector<int>> edge;

int main() {
    int n;
    cin >> n;
    dist.resize(n, M);
    edge.resize(n);
    for (int i = 0; i < n; ++i) {
        int id, k;
        cin >> id >> k;
        if (id != i + 1) exit(1);
        if (!k) continue;

        edge[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> edge[i][j];
            --edge[i][j];
        }
    }
    queue<int> q;
    q.push(0);
    dist[0] = 0;
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int t : edge[p]) {
            if (dist[t] > dist[p] + 1) {
                dist[t] = dist[p] + 1;
                q.push(t);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << (i + 1) << " " << (dist[i] < M ? dist[i] : -1) << "\n";
    }
    return 0;
}