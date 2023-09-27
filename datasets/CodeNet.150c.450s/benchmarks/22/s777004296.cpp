#include <bits/stdc++.h>

struct Edge {
    int from;
    int to;
    int cost;
};

class BellmanFord {
public:
    BellmanFord(int v, int e) : vnum(v) {
        this->edges.reserve(e);       
    }
    
    ~BellmanFord() = default;

    void addEdge(int f, int t, int c) noexcept {
        this->edges.push_back({f, t, c});
    }

    // - return the shortest path lengths from s to each vertex
    // - if a vertex is unreachable from s, the value is INT32_MAX  
    // - return empty vector if this graph contains negative loop
    std::vector<int> shortestPath(int s) const noexcept {
        std::vector<int> d(vnum, INT32_MAX);

        d[s] = 0;
        for (int i = 0; i < this->vnum - 1; ++i) {
            bool update = false;
            for (const Edge& e : this->edges) {
                if (d[e.from] == INT32_MAX) {
                    continue;
                }

                if (d[e.from] + e.cost < d[e.to]) {
                    d[e.to] = d[e.from] + e.cost;
                    update = true;
                }
            }

            if (update == false) {
                break;
            }
        }

        for (const Edge& e : this->edges) {
            if (d[e.from] == INT32_MAX) {
                continue;
            }
       
            if ((d[e.from] + e.cost) < d[e.to]) {
                return std::vector<int>();
            }
        }

        return d;
    }

private:
    std::vector<Edge> edges;
    int vnum;
};


int main() {
    int V, E, r;
    std::cin >> V >> E >> r;

    int s, t, d;
    BellmanFord bf(V, E);
    for (int i = 0; i < E; ++i) {
        std::cin >> s >> t >> d;
        bf.addEdge(s, t, d);
    }


    const std::vector<int> paths = bf.shortestPath(r);
    if (paths.size() == 0) {
        std::cout << "NEGATIVE CYCLE" << std::endl;
        return 0;
    }

    for (int p : paths) {
        if (p == INT32_MAX) {
            std::cout << "INF" << std::endl;
        } else {
            std::cout << p << std::endl;
        }
    }

    return 0;
}

