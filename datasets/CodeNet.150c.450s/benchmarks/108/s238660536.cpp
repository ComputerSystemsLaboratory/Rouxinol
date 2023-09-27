#include<iostream>
#include<queue>
#include<vector>
#define INF (int)1e9 + 7
using namespace std;
int n;
vector<pair<int, int> > adj[10000];
void dijkstra();
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v; //vertex cost
            cin >> v;
            adj[u].push_back(make_pair(1, v));
        }
    }
    dijkstra();
    return 0;
}
void dijkstra() {
    int dist[n + 1];
    dist[1] = 0;
    for (int i = 2; i <= n; i++) {
        dist[i] = INF;
    }
    priority_queue<pair<int, int> > q;
    q.push(make_pair(0, 1));
    while (!q.empty()) {
        int u = q.top().second;
        //int co = -q.top().first;
        q.pop();
        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].second; //adj[u]のi番目の番号
            int co2 = adj[u][i].first;
            if (dist[u] + co2 < dist[v]) {
                dist[v] = co2 + dist[u];
                q.push(make_pair(-dist[v] ,v));
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        if (dist[i] == (int)1e9 + 7) {
            cout << -1 << endl;
        } else {
            cout << dist[i] << endl;
        }
    }
}

