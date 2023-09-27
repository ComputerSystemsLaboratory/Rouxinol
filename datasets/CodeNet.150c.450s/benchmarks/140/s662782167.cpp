/*
Implementation of Kruscal's algorithm

Nodes of the graph are 0-indexed
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

////////// BEGIN //////////

struct Kruscal {

    struct UnionFind{
        vector<int> par;
        vector<int> rank;

        UnionFind(int size) {
            par = vector<int>(size);
            rank = vector<int>(size);

            for (int i = 0; i < size; ++i) {
                par[i] = i;
                rank[i] = 0;
            }
        }

        int find(int x) {
            if (par[x] == x) return x;
            return par[x] = find(par[x]);
        }

        void unite(int x, int y) {
            x = find(x);
            y = find(y);
            if (x == y) return;
            if (rank[x] > rank[y]) {
                par[y] = x;
            } else {
                par[x] = y;
                if (rank[x] == rank[y]) ++rank[x];
            }
        }

        bool same(int x, int y) {
            return find(x) == find(y);
        }
    };

    struct Edge {
        int from, to, cost;

        Edge(){}
        Edge(int from, int to, int cost):
        from(from), to(to), cost(cost) {}

        bool operator<(const Edge& e) const {
            return cost < e.cost;
        }
    };

    int n;
    vector<Edge> edges;

    Kruscal() {}
    Kruscal(int size):n(size) {}

    void add_edge(int from, int to, int cost) {
        edges.emplace_back(from, to, cost);
    }

    void input(int m) {
        for (int i = 0; i < m; ++i) {
            int from, to, cost;
            cin >> from >> to >> cost;
            add_edge(from, to, cost);
        }
    }

    long long mincost() {
        sort(edges.begin(), edges.end());
        UnionFind uf(n);
        long long cost = 0;
        for (auto& e : edges) {
            if (!uf.same(e.from, e.to)) {
                cost += e.cost;
                uf.unite(e.from, e.to);
            }
        }

        return cost;
    }
};

////////// END //////////

int main () {
    int n, m;
    cin >> n >> m;
    Kruscal kr(n);
    kr.input(m);
    cout << kr.mincost() << endl;
}
