#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair <int, ll> P;
const ll INF = 1ll << 60;

void bellman_ford(
        vector<vector<P>> &edge,
        vector<ll> &dist,
        vector<bool> &loop,
        int s) {
    int n = edge.size();
    dist.resize(n, INF);
    dist[s] = 0;
    for (int i = 1; i < n; i++) {
        for (int from = 0; from < n; from++) {
            if (dist[from] == INF) continue;
            for (P e : edge[from]) {
                int to = e.first;
                dist[to] = min(dist[to], dist[from] + e.second);
            }
        }
    }

    loop.resize(n, false);
    for (int i = 0; i < n; i++) {
        for (int from = 0; from < n; from++) {
            if (dist[from] == INF) continue;
            for (P &e : edge[from]) {
                int to = e.first;
                if (dist[to] > dist[from] + e.second) {
                    dist[to] = dist[from] + e.second;
                    loop[from] = true;
                    loop[to] = true;
                }
            }
        }
    }
}


// verified
//   http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B&lang=jp
void AOJ_GRL_1_B() {
    int V, E, r;
    cin >> V >> E >> r;
    vector<vector<P>> edge(V);
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        edge[s].push_back({t, d});
    }
    vector<ll> dist;
    vector<bool> loop;
    bellman_ford(edge, dist, loop, r);
    for (int i = 0; i < V; i++) {
        if (loop[i]) {
            cout << "NEGATIVE CYCLE" << "\n";
            return;
        }
    }
    for (ll d : dist) {
        if (d == INF) cout << "INF\n";
        else cout << d << "\n";
    }
}


// verified
//  https://atcoder.jp/contests/abc061/tasks/abc061_d
void AtCoder_2017_05_13_D() {
    int n, m;
    cin >> n >> m;
    vector<vector<P>> edge(n);
    for (int i = 0; i < m; i++) {
        int a, b; ll c;
        cin >> a >> b >> c;
        edge[--a].push_back({--b, -c});
    }
    vector<ll> dist;
    vector<bool> loop;
    bellman_ford(edge, dist, loop, 0);
    if (loop[n - 1]) cout << "inf" << endl;
    else cout << -dist[n - 1] << endl;
}

int main() {
    AOJ_GRL_1_B();
    // AtCoder_2017_05_13_D();
    return 0;
}
