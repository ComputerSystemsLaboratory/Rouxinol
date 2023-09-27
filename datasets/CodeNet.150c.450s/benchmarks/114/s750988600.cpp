#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

template <class T>
using gp_queue=priority_queue<T, vector<T>, less<T>>;

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

pair<Weight, Edges> minimum_spanning_tree(const Graph &g, size_t s=0) {
    /* Prim */
    size_t V=g.size();
    Edges T;
    Weight total=0;

    vector<bool> visited(V);
    gp_queue<Edge> q; q.push(Edge(-1, s, 0));
    while (!q.empty()) {
        Edge e=q.top(); q.pop();
        if (visited[e.dst]) continue;

        T.push_back(e);
        total += e.weight;
        visited[e.dst] = true;
        for (const Edge &f: g[e.dst])
            if (!visited[f.dst])
                q.push(f);
    }

    return make_pair(total, T);
}

int main() {
    size_t n;
    scanf("%zu", &n);

    Graph g(n);
    for (size_t i=0; i<n; ++i)
        for (size_t j=0; j<n; ++j) {
            Weight a;
            scanf("%d", &a);

            if (a > -1)
                connect(g, i, j, a);
        }

    printf("%d\n", minimum_spanning_tree(g).first);
    return 0;
}