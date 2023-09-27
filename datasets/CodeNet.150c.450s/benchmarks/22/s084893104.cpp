#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (int i = a; i < (int)b; i++)
#define all(v) v.begin(), v.end()
const int MOD = 1e9 + 7;
const int INF = 1e9;
//'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122

struct edge {
    int from, to, cost;
};

int main() {
    vector<edge> edges;
    int n, m, r;
    cin >> n >> m >> r;
    rep(i, 0, m) {
        int s, t, d;
        cin >> s >> t >> d;
        edge tmp = {s, t, d};
        edges.push_back(tmp);
    }
    vector<int> dist(n, INF);
    dist[r] = 0;
    rep(v, 0, n) {
        for (auto e : edges) {
            if (dist[e.from] == INF) continue;
            if (dist[e.to] > dist[e.from] + e.cost) {
                if (v == n - 1) {
                    cout << "NEGATIVE CYCLE" << endl;
                    return 0;
                }
                dist[e.to] = dist[e.from] + e.cost;
            }
        }
    }
    rep(i, 0, n) {
        if (dist[i] == INF) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}

