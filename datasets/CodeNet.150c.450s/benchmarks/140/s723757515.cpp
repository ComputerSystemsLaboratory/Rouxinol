#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

template <class T>
using lp_queue=priority_queue<T, deque<T>, greater<T>>;

using Weight=long long;
static const Weight INF=1LL<<57;

struct Edge {
    size_t src, dst;
    Weight weight;
    Edge() {}
    Edge(size_t src, size_t dst, Weight weight=1):
        src(src), dst(dst), weight(weight)
    {}
};

bool operator<(const Edge &e, const Edge &f) {
    if (e.weight != f.weight) {
        return e.weight > f.weight;
    } else {
        return e.src!=f.src? e.src<f.src : e.dst<f.dst;
    }
}

using Edges=vector<Edge>;
using Vertex=vector<Edge>;
using Graph=vector<Vertex>;

void join(Graph &g, size_t s, size_t d, Weight w=1) {
    // non-directed
    g[s].push_back(Edge(s, d, w));
    g[d].push_back(Edge(d, s, w));
}

void connect(Graph &g, size_t s, size_t d, Weight w=1) {
    // directed
    g[s].push_back(Edge(s, d, w));
}

Weight minimum_spanning_tree(const Graph &g, size_t s=0) {
    /* Prim */
    size_t V=g.size();
    Edges T;
    Weight total=0;
    vector<Weight> d(V, INF); d[s]=0;
    vector<bool> visited(V);

    lp_queue<pair<Weight, size_t>> q; q.push(make_pair(0, s));
    while (!q.empty()) {
        pair<Weight, size_t> p=q.top(); q.pop();
        size_t v=p.second;
        if (d[v] < p.first) continue;
        if (visited[v]) continue;

        visited[v] = true;
        total += d[v];
        for (const Edge &e: g[v])
            if (d[e.dst] > e.weight) {
                d[e.dst] = e.weight;
                q.push(make_pair(d[e.dst], e.dst));
            }
    }
    return total;
}

int main() {
    size_t V, E;
    scanf("%zu %zu", &V, &E);

    Graph g(V);
    for (size_t i=0; i<E; ++i) {
        size_t s, t;
        Weight w;
        scanf("%zu %zu %lld", &s, &t, &w);

        join(g, s, t, w);
    }

    printf("%lld\n", minimum_spanning_tree(g));
    return 0;
}