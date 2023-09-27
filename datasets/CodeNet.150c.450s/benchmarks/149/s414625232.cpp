#include <iostream>
#include <vector>


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
            node.parent = i;
            node.rank = i;
            ++i;
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
                ++(_nodes[b].rank);
            }
        }
    }

private:
    std::vector<Node> _nodes;
};


int main()
{
    using namespace std;

    int n, q;
    cin >> n >> q;

    DisjointSet ds(n);


    for (int j = 0; j < q; j++) {
        int c, x, y;
        cin >> c >> x >> y;

        if (c) {
            if (ds.same(x, y))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        } else {
            ds.unite(x, y);
        }
    }
}