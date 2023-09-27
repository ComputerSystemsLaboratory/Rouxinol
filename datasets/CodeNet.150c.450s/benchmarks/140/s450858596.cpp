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

struct UnionFindTree {
    size_t n;
    vector<int> tree;
    UnionFindTree(size_t n): n(n) {
        tree = vector<int>(n, -1);
    }
    int find_root(size_t v) {
        if (tree[v] < 0) return v;
        return tree[v] = find_root(tree[v]);
    }
    bool unite(size_t x, size_t y) {
        x = find_root(x);
        y = find_root(y);
        if (x == y) return false;
        if (rank(x) < rank(y)) swap(x, y);
        tree[x] += tree[y];
        tree[y] = x;
        return true;
    }
    bool has_same_root(size_t x, size_t y) {
        return find_root(x) == find_root(y);
    }
    size_t rank(size_t v) {
        return -tree[find_root(v)];
    }
};

pair<Weight, Edges> minimum_spanning_forest(const Graph &g) {
    /* Kruskal */
    size_t V=g.size();
    UnionFindTree tree(V);
    gp_queue<Edge> q;
    for (size_t u=0; u<V; ++u)
        for (const Edge &e: g[u])
            q.push(e);

    Weight total=0;
    Edges F;
    while ((F.size() < V-1) && (!q.empty())) {
        Edge e=q.top(); q.pop();
        if (tree.unite(e.src, e.dst)) {
            F.push_back(e);
            total += e.weight;
        }
    }

    return make_pair(total, F);
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

    printf("%lld\n", minimum_spanning_forest(g).first);
    return 0;
}