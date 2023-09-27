#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 100000000;
#define rep1(i, n) for (ll i=0; i<(n); i++) 
#define rep2(i, k, n) for (ll i=k; i<(n); i++)
using Graph = vector<vector<int> >;

int main() {
    int N, M;
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(N, -1);
    vector<int> prev(N, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    while (!que.empty()) {
        int v = que.front(); que.pop();
        for (int nv : G[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            prev[nv] = v;
            que.push(nv);
        }
    }
    cout << "Yes" << endl;
    for (int v = 1; v < N; ++v) cout << prev[v] + 1 << endl;
}