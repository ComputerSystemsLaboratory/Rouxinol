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

static const Weight INF=(1<<30)-1;

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

bool shortest_distance(const Graph &g, size_t s, vector<Weight> &d) {
    /* Bellman-Ford */
    // returns true iff g has no negative cycles
    size_t V=g.size();
    d.assign(V, INF); d[s]=0;
    bool negative_cycle=false;
    for (size_t k=0; k<V; ++k)
        for (size_t i=0; i<V; ++i)
            for (const Edge &e: g[i])
                if (d[e.dst] > d[e.src] + e.weight && d[e.src] < INF) {
                    d[e.dst] = d[e.src] + e.weight;
                    if (k == V-1) {
                        d[e.dst] = -INF;
                        negative_cycle = true;
                    }
                }

    return !negative_cycle;
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

    vector<Weight> d;
    bool has_ncycle=!shortest_distance(g, r, d);

    if (has_ncycle)
        return !printf("NEGATIVE CYCLE\n");

    for (Weight w: d)
        if (w < INF) {
            printf("%d\n", w);
        } else {
            printf("INF\n");
        }

    return 0;
}