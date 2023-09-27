#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

template <class T>
using gp_queue=priority_queue<T, deque<T>, less<T>>;

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

vector<vector<Weight>> shortest_distance(Graph &g) {
    /* Johnson */
    size_t V=g.size();
    vector<Weight> h(V);
    for (size_t k=0; k<V; ++k)
        for (size_t i=0; i<V; ++i)
            for (const Edge &e: g[i])
                if (h[e.dst] > h[e.src] + e.weight) {
                    h[e.dst] = h[e.src] + e.weight;
                    if (k == V-1)
                        return vector<vector<Weight>>();
                }

    for (size_t i=0; i<V; ++i)
        for (Edge &e: g[i])
            e.weight += h[e.src] - h[e.dst];

    vector<vector<Weight>> d(V, vector<Weight>(V, INF));
    vector<vector<size_t>> prev(V, vector<size_t>(V, -1));
    for (size_t s=0; s<V; ++s) {
        gp_queue<Edge> q; q.push(Edge(s, s, 0));
        d[s][s] = 0;
        while (!q.empty()) {
            Edge e=q.top(); q.pop();
            if (~prev[s][e.dst]) continue;

            prev[s][e.dst] = e.src;
            for (const Edge &f: g[e.dst]) {
                if (d[s][f.dst] > e.weight + f.weight) {
                    d[s][f.dst] = e.weight + f.weight;
                    q.push(Edge(f.src, f.dst, e.weight+f.weight));
                }
            }
        }
        for (size_t u=0; u<V; ++u)
            if (d[s][u] < INF)
                d[s][u] += h[u] - h[s];
    }

    for (size_t v=0; v<V; ++v)
        for (Edge &e: g[v])
            e.weight += h[e.dst] - h[e.src];

    return d;
}

int main() {
    size_t V, E;
    scanf("%zu %zu", &V, &E);

    Graph g(V);
    for (size_t i=0; i<E; ++i) {
        size_t s, t;
        Weight d;
        scanf("%zu %zu %lld", &s, &t, &d);

        connect(g, s, t, d);
    }

    vector<vector<Weight>> d=shortest_distance(g);
    if (d.empty())
        return !printf("NEGATIVE CYCLE\n");

    for (vector<Weight> w: d)
        for (size_t i=0; i<V; ++i)
            if (w[i] < INF) {
                printf("%lld%c", w[i], i<V-1? ' ':'\n');
            } else {
                printf("INF%c", i<V-1? ' ':'\n');
            }

    return 0;
}