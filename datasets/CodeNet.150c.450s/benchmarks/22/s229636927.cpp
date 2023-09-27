#include <bits/stdc++.h>
using namespace std;
#define dump(x) cout << (x) << '\n';
typedef int64_t Int;
Int mod = 1e9+7;
Int INF = 1e9+7;

#define MAX_V 1005
#define MAX_E 2005

struct edge { int from, to, cost; };

edge es[MAX_E];
vector<Int> d(MAX_V);
vector<Int> d2(MAX_V);

vector<bool> used(MAX_V, false);
vector<pair<Int, Int>> G[MAX_V];

Int V, E, r;

bool find_negative_loop() {
    fill(d2.begin(), d2.end(), 0);
    for (Int i = 0; i < V; i++) {
        for (Int j = 0; j < E; j++) {
            edge e = es[j];
            if (!used[e.from] || !used[e.to]) continue;
            if (d2[e.to] > d2[e.from] + e.cost) {
                d2[e.to] = d2[e.from] + e.cost;
                if (i == V - 1) return true;
            }
        }
    }
    return false;
}

void bellman_ford(Int s) {
    fill(d.begin(), d.end(), INF);
    d[s] = 0;
    bool update = true;
    while (update) {
        update = false;
        for (Int i = 0; i < E; i++) {
            edge e = es[i];
            // if (!used[e.from] || !used[e.to]) continue;
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
    }
}

void dfs(Int v) {
    if (used[v]) return;
    used[v] = true;
    for (Int i = 0; i < (Int)G[v].size(); i++) {
        Int next = G[v][i].first;
        if (used[next]) continue;
        dfs(next);
    }
}

int main() {
    cin >> V >> E >> r;
    for (Int i = 0; i < E; i++) {
        cin >> es[i].from >> es[i].to >> es[i].cost;
        G[es[i].from].emplace_back(es[i].to, es[i].cost);
    }
    dfs(r);
    if (find_negative_loop()) {
        dump("NEGATIVE CYCLE");
        return 0;
    }
    bellman_ford(r);
    for (Int i = 0; i < V; i++) {
        if (d[i] != INF) {
            dump(d[i]);
        }
        else {
            dump("INF");
        }
    }
    return 0;
}
