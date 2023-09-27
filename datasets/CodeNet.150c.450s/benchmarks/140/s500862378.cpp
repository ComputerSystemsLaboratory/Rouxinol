#include <bits/stdc++.h>
 
using namespace std;

using usize = ::std::size_t;
//using u64 = ::std::int_least64_t;
using u64 = int;
static constexpr u64 Inf = ::std::numeric_limits<u64>::max() / 2;

struct edge
{
    int v, weight;
    edge (int v = 0, int weight = 0): v(v), weight(weight) {}
    bool operator<(const edge &e) const { return weight > e.weight; }
};
const int MAXV = 10010;
vector<vector<edge>> edges;
u64 distToTree[MAXV];
int n, E, parent[MAXV], intree[MAXV];

u64 prim(int u)
{
    u64 minSumOfWeight = 0;

    for (int i = 0; i < n; i++)
        parent[i] = -1, intree[i] = 0, distToTree[i] = Inf;

    priority_queue<edge> q;
    q.push(edge(u, 0));

    while (!q.empty()) {
        edge e1 = q.top();
        q.pop();
        if (intree[e1.v]) continue;
        intree[e1.v] = 1, minSumOfWeight += e1.weight;
        for (auto e2 : edges[e1.v])
            if (!intree[e2.v] && distToTree[e2.v] > e2.weight) {
                distToTree[e2.v] = e2.weight;
                parent[e2.v] = e1.v;
                q.push(edge(e2.v, e2.weight));
            }
    }

    return minSumOfWeight;
}
int main(int argc, char *argv[])
{
    
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> n >> E;
    edges.resize(n);
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[u].push_back(edge{v, w});
        edges[v].push_back(edge{u, w});
    }
    
    cout << prim(0) << endl;
    
    return 0;
}

