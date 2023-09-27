#include <cstdio>
#include <vector>
#include <algorithm>
#include <stack>

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

void dfs(const Graph &g, size_t v, int &t, vector<int> &d, vector<int> &f) {
    d[v] = t;
    for (const Edge &e: g[v])
        if (!d[e.dst])
            dfs(g, e.dst, ++t, d, f);

    f[v] = ++t;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    Graph g(n);
    for (size_t i=0; i<n; ++i) {
        size_t k;
        scanf("%*d %zu", &k);
        for (size_t j=0; j<k; ++j) {
            size_t v;
            scanf("%zu", &v);
            --v;

            connect(g, i, v);
        }
    }

    vector<int> d(n), f(n);
    int t=0;
    for (size_t v=0; v<n; ++v)
        if (!d[v])
            dfs(g, v, ++t, d, f);

    for (size_t i=0; i<n; ++i)
        printf("%zu %d %d\n", i+1, d[i], f[i]);

    return 0;
}