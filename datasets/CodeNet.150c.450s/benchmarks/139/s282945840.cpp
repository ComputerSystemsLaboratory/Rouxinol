#include <bits/stdc++.h>
#include <iostream>
#include<math.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using Graph = vector<vector<int>>;
int N, M;
Graph G;

void solve() {
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
                dist[nv] = dist[v] + 1;
                prev[nv] = v;
                que.push(nv);
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < N; ++i) cout << prev[i] + 1 << endl;
}
int main()
{
    cin >> N >> M;
    G.assign(N, vector<int>());
    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    solve();
    return 0;
}