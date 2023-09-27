#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Union-Find Tree
class DisjointSet {
private:
    struct Node {
        int parent;
        int rank;
    };

public:
    DisjointSet(size_t n) : _nodes(n) {
        int i = 0;
        for (auto& node : _nodes) {
            node.parent = i++;
            node.rank = 0;
        }
    }

    bool same(int a, int b) {
        return find(a) == find(b);
    }

    void unite(int a, int b) {
        link(find(a), find(b));
    }

    int find(int x) {
        if (x != _nodes[x].parent) {
            // path compression
            _nodes[x].parent = find(_nodes[x].parent);
        }
        return _nodes[x].parent;
    }

    void link(int a, int b) {
        if (_nodes[a].rank > _nodes[b].rank) {
            _nodes[b].parent = a;
        } else {
            _nodes[a].parent = b;
            if (_nodes[a].rank == _nodes[b].rank) {
                _nodes[b].rank += 1;
            }
        }
    }

private:
    std::vector<Node> _nodes;
};


struct edge {
    int src, dst;
    int weight;

    edge(int src, int dst, int w) : src(src), dst(dst), weight(w) {}
};

int main() {
    int V, E;
    cin >> V >> E;

    vector<edge> edges;
    for (int i = 0; i < E; ++i) {
        int s, t, w;
        cin >> s >> t >> w;
        edges.emplace_back(s, t, w);
    }

    // Kruskal's algorithm
    int total = 0;
    sort(edges.begin(), edges.end(), [](const edge& a, const edge& b) { return a.weight < b.weight; });
    auto S = DisjointSet(V+1);
    for (auto& e : edges) {
        if (!S.same(e.src, e.dst)) {
            total += e.weight;
            S.unite(e.src, e.dst);
        }
    }
    cout << total << endl;

    return 0;
}