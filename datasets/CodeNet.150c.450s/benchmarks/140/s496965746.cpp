#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

// namespace
using namespace std;

// using P = pair<int, int>;
typedef pair<int, int> P;
struct edge { int from, to, cost; };
int prim(int num_vertex, map<int, vector<edge> > &edges) {
    vector<bool> included(num_vertex, false);
    priority_queue<P, vector<P>, greater<P> > q;
    q.push(P{0, 0});
    int total_cost = 0;
    while(!q.empty()) {
        P p = q.top(); q.pop();
        int cost = p.first; int v = p.second;
        if (included[v]) continue;
        included[v] = true;
        total_cost += cost;
        // for (const auto &e: edges[v]) q.push(P{e.cost, e.to});
        for (int i = 0; i < edges[v].size(); ++i) {
            edge e = edges[v][i];
            q.push(P{e.cost, e.to});
        }
    }
    return total_cost;
}

int main() {
    int v, e, from, to, cost;
    map<int, vector<edge> > edges;
    cin >> v >> e;
    for (int i = 0; i < e; ++i) {
        cin >> from >> to >> cost;
        edges[from].push_back(edge{from, to, cost});
        edges[to].push_back(edge{to, from, cost});
    }
    int total_cost = prim(v, edges);
    cout << total_cost << endl;
    return 0;
}

