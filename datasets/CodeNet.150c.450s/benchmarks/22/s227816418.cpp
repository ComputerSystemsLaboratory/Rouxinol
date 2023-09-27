#include <iostream>
#include <vector>
#include <limits>

// -------------8<------- start of library -------8<------------------------
template<class T>
struct Graph {
    const int n, s;
    const T INF;
    bool is_neg_cycle;
    std::vector<std::vector<std::pair<int, T>>> adj;
    std::vector<T> d;

    Graph(int _n, int _s)
        : n(_n), s(_s), INF(std::numeric_limits<T>::max()),
          is_neg_cycle(false), adj(n), d(n, INF) { }

    void add_edge(int u, int v, T w) { adj[u].emplace_back(std::make_pair(v, w)); }
    T ShortestDistance(const int t) const { return d[t]; }
    bool IsNegativeCycleFromS() const { return is_neg_cycle; }

    bool CheckNegativeCycle() {
        std::fill(d.begin(), d.end(), 0);
        BellmanFord();
        return is_neg_cycle;
    }

    void BellmanFord() {
        d[s] = 0;
        for (int i = 0; ; ++i) {
            bool update = false;
            for (int v = 0; v < n; ++v)
                for (const auto &e : adj[v])
                    if (d[v] < INF && d[v] + e.second < d[e.first]) {
                        d[e.first] = d[v] + e.second;
                        update = true;
                    }
            if (!update) break;
            if (i == n - 1) { is_neg_cycle = true; break; }
        }
    }
};
// -------------8<------- end of library ---------8-------------------------

int main() {
    std::cin.tie(0); std::ios::sync_with_stdio(false);

    // AOJ GPL_1_B: Shortest Path - Single Shortest Path (Negative Edges)
    int n, m, r, s, t, d;
    std::cin >> n >> m >> r;

    Graph<int> g(n, r);
    for (int i = 0; i < m; ++i) {
        std::cin >> s >> t >> d;
        g.add_edge(s, t, d);
    }

    g.BellmanFord();
    if (g.IsNegativeCycleFromS())
        std::cout << "NEGATIVE CYCLE\n";
    else {
        for (int v = 0; v < n; ++v) {
            int dist = g.ShortestDistance(v);
            if (dist == g.INF) std::cout << "INF\n";
            else std::cout << dist << '\n';
        }
    }

    return 0;
}

