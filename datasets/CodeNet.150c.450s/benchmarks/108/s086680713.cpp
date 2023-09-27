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

    queue<size_t> q; q.push(0);
    vector<size_t> d(n, -1); d[0]=0;
    while (!q.empty()) {
        size_t v=q.front(); q.pop();
        for (Edge &e: g[v]) {
            if (d[e.dst] > d[v] + 1) {
                d[e.dst] = d[v] + 1;
                q.push(e.dst);
            }
        }
    }

    for (size_t i=0; i<n; ++i)
        printf("%zu %zd\n", i+1, d[i]);

    return 0;
}