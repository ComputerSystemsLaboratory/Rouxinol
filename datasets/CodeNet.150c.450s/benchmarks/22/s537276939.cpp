#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#define FORR(i,b,e) for(int i=(b);i<(int)(e);++i)
#define FOR(i,e) FORR(i,0,e)
#define dump(var) cerr << #var ": " << var << "\n"
#define dumpc(con) for(auto& e: con) cerr << e << " "; cerr<<"\n"

typedef long long ll;
typedef unsigned long long ull;

const double EPS = 1e-6;
const int d4[] = {0, -1, 0, 1, 0};

using namespace std;


const int INF = 1e9;

struct Edge {
    int s, t, d;
};


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;
    vector<Edge> edge(E);
    FOR(i, E) {
        auto &e = edge[i];
        cin >> e.s >> e.t >> e.d;
    }

    vector<int> dist(V, INF);
    dist[r] = 0;

    int i = 0;
    for (; i < V; ++i) {
        bool updated = false;
        for (auto &e: edge) {
            if (dist[e.s] != INF &&
                dist[e.s] + e.d < dist[e.t]) {
                dist[e.t] = dist[e.s] + e.d;
                updated = true;
            }
        }
        if (!updated) break;
    }
    if (i == V) {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else {
        for (auto &d: dist) {
            if (d == INF) cout << "INF";
            else cout << d;
            cout << '\n';
        }
    }
    return 0;
}