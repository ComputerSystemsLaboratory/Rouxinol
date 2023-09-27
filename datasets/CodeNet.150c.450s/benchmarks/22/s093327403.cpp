#include <iostream>
#include <utility>
using namespace std;
const int INF = 1 << 29;
struct edge {int from, to, cost;};

edge es[2010];
int d[1010];
int V, E, r;

bool bellman_ford(int s) {
    fill(d, d + V, INF);
    d[s] = 0;
    for (int cnt = 0;; cnt++) {
        bool update = false;
        for (int i = 0; i < E; i++) {
            edge e = es[i];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
                if (cnt == V - 1) return true;
            }
        }
        if (!update) break;
    }
    return false;
}


int main(void) {
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        es[i] = edge{s, t, d};
    }
    bool negative = bellman_ford(r);
    if (negative) cout << "NEGATIVE CYCLE" << endl;
    else {
        for (int i = 0; i < V; i++) {
            if (d[i] < INF) cout << d[i] << endl;
            else cout << "INF" << endl;
        }
    }

    return 0;
}