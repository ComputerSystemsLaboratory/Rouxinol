#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

using Weight=int;
using DArray=vector<Weight>;
using DMatrix=vector<DArray>;

static const Weight INF=1<<29;

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

template <class T>
using lp_queue=priority_queue<T, deque<T>, greater<T>>;

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
    size_t n;
    scanf("%zu", &n);

    Graph g(n);
    for (size_t i=0; i<n; ++i) {
        size_t u, k;
        scanf("%zu %zu", &u, &k);

        for (size_t j=0; j<k; ++j) {
            size_t c;
            Weight v;
            scanf("%zu %d", &c, &v);

            connect(g, u, c, v);
        }
    }

    vector<Weight> d=shortest_distance(g, 0);
    for (size_t i=0; i<n; ++i)
        printf("%zu %d\n", i, d[i]);

    return 0;
}