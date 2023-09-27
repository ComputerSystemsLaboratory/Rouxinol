#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
const int M = 1000000007;

vector<int> dijkstra(int s, vector<vector<P>> edge) {
    int n = edge.size();
    vector<int> dist(n, M);
    priority_queue<P, vector<P>, greater<P>> q;
    dist[s] = 0;
    q.push(P(0, s));
    while (!q.empty()) {
        P p = q.top();
        q.pop();
        int d = p.first;
        for (auto& e : edge[p.second]) {
            if (dist[e.second] > p.first + e.first) {
                dist[e.second] = p.first + e.first;
                q.push(P(p.first + e.first, e.second));
            }
        }
    }
    return dist;
}


int main() {
    int n;
    cin >> n;
    vector<vector<P>> edge(n);
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;
        if (i != u) exit(1);
        for (int j = 0; j < k; ++j) {
            int v, c;
            cin >> v >> c;
            edge[i].push_back(P(c, v));
        }
    }
    vector<int> d = dijkstra(0, edge);
    for (int i = 0; i < n; ++i) {
        cout << i << " " << d[i] << "\n";
    }
    return 0;
}