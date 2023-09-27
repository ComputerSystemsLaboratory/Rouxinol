#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = numeric_limits<int>::max();

struct edge {
    int from, to, cost;
};

struct Graph {
    vector<edge> es;
    vector<int> d;
    Graph(int n) {
        d.assign(n, INF);
    }
};

int main()
{
    int nv, ne, r;
    cin >> nv >> ne >> r;
    Graph g(nv);
    rep(i, ne) {
        int s, t, d;
        cin >> s >> t >> d;
        g.es.push_back({s, t, d});
    }
    g.d[r] = 0;
    rep(i, nv) {
        for (auto& e : g.es) {
            if (g.d[e.from] != INF && g.d[e.to] > g.d[e.from] + e.cost) {
                if (i == nv - 1) {
                    cout << "NEGATIVE CYCLE" << endl;
                    return 0;
                }
                g.d[e.to] = g.d[e.from] + e.cost;
            }
        }
    }
    for (auto d : g.d) {
        if (d == INF) {
            cout << "INF" << endl;
        } else {
            cout << d << endl;
        }
    }
}
