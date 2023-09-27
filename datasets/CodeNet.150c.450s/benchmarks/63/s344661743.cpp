#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

template <class T>
using lp_queue=priority_queue<T, deque<T>, greater<T>>;

using Weight=int;
using DArray=vector<Weight>;
using DMatrix=vector<DArray>;

static const Weight INF=1<<30;

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

vector<Weight> shortest_distance(const Graph &g, size_t s) {
    /* Dijkstra */
    size_t V=g.size();
    vector<Weight> d(V, INF); d[s]=0;

    lp_queue<pair<Weight, size_t>> q; q.push(make_pair(0, s));
    while (!q.empty()) {
        pair<Weight, size_t> p=q.top(); q.pop();
        size_t v=p.second;
        if (d[v] < p.first) continue;

        for (const Edge &e: g[v])
            if (d[e.dst] > d[v] + e.weight) {
                d[e.dst] = d[v] + e.weight;
                q.push(make_pair(d[e.dst], e.dst));
            }
    }
    return d;
}

int main() {
    size_t V, E, r;
    scanf("%zu %zu %zu", &V, &E, &r);

    Graph g(V);
    for (size_t i=0; i<E; ++i) {
        size_t s, t;
        Weight d;
        scanf("%zu %zu %d", &s, &t, &d);

        connect(g, s, t, d);
    }

    vector<Weight> d=shortest_distance(g, r);
    for (Weight w: d)
        if (w < INF) {
            printf("%d\n", w);
        } else {
            printf("INF\n");
        }

    return 0;
}