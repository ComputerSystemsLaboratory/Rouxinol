#include <iostream>
#include <vector>
#include <queue>

static constexpr long long int  INF = 10000000000;

int main() {
    int V, E;
    std::cin >> V >> E;

    // std::vector<std::vector<Line>> link_list(V);
    std::vector<std::vector<long long int>> costs(V, std::vector<long long int>(V, INF));
    for (int i = 0; i < V; i++) {
        costs[i][i] = 0;
    }

    for (int i = 0; i < E; i++) {
        int s, t, d;
        std::cin >> s >> t >> d;
        // link_list[s].push_back(Line(t, d));
        costs[s][t] = d;
    }

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            if (costs[i][k] == INF) {
                continue;
            }
            for (int j = 0; j < V; j++) {
                if (costs[k][j] == INF) {
                    continue;
                }
                costs[i][j] = std::min(costs[i][j], costs[i][k] + costs[k][j]);
            }
        }
    }

    for (int i = 0; i < V; i++) {
        if (costs[i][i] < 0) {
            std::cout << "NEGATIVE CYCLE" << std::endl;
            return 0;
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (j) {
                std::cout << " ";
            }
            if (costs[i][j] == INF) {
                std::cout << "INF";
            } else {
                std::cout << costs[i][j];
            }
        }
        std::cout << std::endl;
    }
}

