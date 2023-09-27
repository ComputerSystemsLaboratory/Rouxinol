#include <bits/stdc++.h>
 
using namespace std;

using usize = ::std::size_t;
using u64 = ::std::int_least64_t;
static constexpr u64 Inf = ::std::numeric_limits<u64>::max() / 2;

u64 V, E, r;
struct edge {
    u64 v, weight;
    bool operator<(const edge &e) const { return weight > e.weight; }
};

vector<list<edge>> edges;


int main(int argc, char *argv[])
{
    // input from txt （提出時にこの箇所は削除すること）
    //ifstream in("in.txt");
    //cin.rdbuf(in.rdbuf());
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> V >> E >> r;
    edges.resize(E * 2);
    for (u64 i = 0; i < E; i++) {
        u64 from, to , weight;
        cin >> from >> to >> weight;
        edges[from].push_back(edge{to, weight});
        edges[to].push_back(edge{from, Inf});
    }
    vector<u64> dist(V, Inf);
    dist[r] = 0;
    priority_queue<edge> q;
    q.push(edge{r, dist[r]});
    
    while (!q.empty()) {
        edge e1 = q.top(); q.pop();
        if (E == 0) continue;
        if (dist[e1.v] < e1.weight) continue;
        for (auto e2 : edges[e1.v]) {
            if (dist[e2.v] > dist[e1.v] + e2.weight) {
                dist[e2.v] = dist[e1.v] + e2.weight;
                q.push(edge{e2.v, dist[e2.v]});
            }
        }
    }
    
    for (u64 i = 0; i < V; i++) {
        if (dist[i] == Inf) {
            cout << "INF" << endl;
        } else cout << dist[i] << endl;
    }
    
    return 0;
}

