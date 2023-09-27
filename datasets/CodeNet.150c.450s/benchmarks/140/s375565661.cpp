#include <vector>
#include <tuple>
#include <algorithm>

template<class T>
struct minimum_spanning_tree {
    using value_type = T;
private :
    struct edge {
        int src, dst;
        value_type cst;
        edge (int src, int dst, value_type cst) :
            src(src), dst(dst), cst(cst) { }
        bool operator< (const edge &rhs) const {
            return (cst < rhs.cst);
        }
    };
    std::vector<edge> edges;
    std::vector<int> uf;

    bool unite (int x, int y) {
        if ((x = root(x)) == (y = root(y))) return false;
        if (uf[x] > uf[y]) std::swap(x, y);
        uf[x] += uf[y];uf[y] = x; return true;
    }

    int root (int x) {
        if (uf[x] < 0) return x;
        return (uf[x] = root(uf[x]));
    }

public : 
    minimum_spanning_tree (int n) : uf(n, -1) { }

    void add_edge (int src, int dst, value_type cst) {
        edges.emplace_back(src, dst, cst);
    }

    value_type solve () {
        value_type cost = 0;
        std::sort(edges.begin(), edges.end());
        for (const edge &e : edges) {
            if (unite(e.src, e.dst)) {
                cost += e.cst;
            }
        }
        return cost;
    }

};

#include <bits/stdc++.h>

int main() {
    int n, m;
    std::cin >> n >> m;
    minimum_spanning_tree<long long> mst(n);
    for (int i = 0; i < m; i++) {
        int s, t, c;
        std::cin >> s >> t >> c;
        mst.add_edge (s, t, c);
    }

    std::cout << mst.solve() << '\n';

    return 0;
}
