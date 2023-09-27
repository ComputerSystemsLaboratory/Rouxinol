#include <bits/stdc++.h>

class WarshallFloyd {
public:
    using Matrix = std::vector<std::vector<int>>;

    WarshallFloyd(int V) {
        mat.resize(V);
        for (int i = 0; i < V; ++i) {
            mat[i].resize(V, INT32_MAX);
            mat[i][i] = 0;
        }
    }
    ~WarshallFloyd() = default;

    void add(int s, int t, int d) noexcept {
        this->mat[s][t] = d;
    }

    // return all pairs of shortest path from vertex to vertex  
    // if unreachble from vertex i to j, shortest_path[i][j] is INT32_MAX
    Matrix allPairs() const noexcept {
        Matrix sp = this->mat; // shortest path
        for (size_t k = 0; k < this->mat.size(); ++k) {
            for (size_t i = 0; i < this->mat.size(); ++i) {
                for (size_t j = 0; j < this->mat.size(); ++j) {
                    if (sp[i][k] == INT32_MAX || sp[k][j] == INT32_MAX) {
                        continue;
                    }

                    sp[i][j] = std::min(sp[i][j], sp[i][k] + sp[k][j]);
                }
            }
        }

        return sp;
    }

private:
    Matrix mat; // adjacency matrix  
};

int main() {
    int V, E;
    std::cin >> V >> E;

    WarshallFloyd wf(V);
    int s, t, c;
    for (int i = 0; i < E; ++i) {
        std::cin >> s >> t >> c;
        wf.add(s, t, c);
    }

    std::vector<std::vector<int>> d = wf.allPairs();

    for (int i = 0; i < V; ++i) {
        if (d[i][i] < 0) {
            std::cout << "NEGATIVE CYCLE" << std::endl;
            return 0;
        }
    }

    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (d[i][j] == INT32_MAX) {
                std::cout << "INF";
            } else {
                std::cout << d[i][j];
            }

            if (j == (V - 1)) {
                std::cout << std::endl;
            } else {
                std::cout << " ";
            }
        }
    }

    return 0;
}

