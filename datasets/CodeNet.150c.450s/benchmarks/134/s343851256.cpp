#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
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

size_t get_root(const Graph &g) {
    // stores the node type
    size_t V=g.size();
    vector<Weight> indeg(V);
    for (size_t i=0; i<V; ++i)
        for (const Edge &e: g[i])
            indeg[e.dst] += e.weight;

    for (size_t i=0; i<V; ++i)
        if (!indeg[i])
            return i;

    return 0;
}

template <class Functor>
void walk_preorder(const Graph &g, size_t root, Functor F) {
    if (root >= g.size()-1) return;

    F(root);
    for (const Edge &e: g[root])
        walk_preorder(g, e.dst, F);
}

template <class Functor>
void walk_inorder(const Graph &g, size_t root, Functor F) {
    if (root >= g.size()-1) return;

    walk_inorder(g, g[root][0].dst, F);
    F(root);
    walk_inorder(g, g[root][1].dst, F);
}

template <class Functor>
void walk_postorder(const Graph &g, size_t root, Functor F) {
    if (root >= g.size()-1) return;

    for (const Edge &e: g[root])
        walk_postorder(g, e.dst, F);

    F(root);
}

int main() {
    size_t n;
    scanf("%zu", &n);

    Graph g(n+1);
    for (size_t i=0; i<n; ++i) {
        size_t p, lch, rch;
        scanf("%zu %zu %zu", &p, &lch, &rch);

        connect(g, p, ~lch? lch:n);
        connect(g, p, ~rch? rch:n);
    }

    size_t r=get_root(g);

    auto output=[=](size_t v)->void {
        if (v < n)
            printf(" %zu", v);
    };

    printf("Preorder\n");
    walk_preorder(g, r, output);
    printf("\n");

    printf("Inorder\n");
    walk_inorder(g, r, output);
    printf("\n");

    printf("Postorder\n");
    walk_postorder(g, r, output);
    printf("\n");

    return 0;
}