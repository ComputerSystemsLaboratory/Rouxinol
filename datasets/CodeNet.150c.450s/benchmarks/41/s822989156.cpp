#include <limits>
#include <vector>
#include <functional>

template<typename T, typename F, typename G>
std::vector<std::vector<T>> warshall_floyd(const std::vector<std::vector<T>> &graph, F f, G g) {
    int n = graph.size();
    std::vector<std::vector<T>> ret(graph);
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                T dist = f(ret[i][k], ret[k][j]);
                if (g(ret[i][j], dist)) { ret[i][j] = dist; }
            }
        }
    }
    return ret;
}

template<typename T, typename AB>
std::vector<std::vector<T>> basic_warshall_floyd(const std::vector<std::vector<T>> &graph, AB ab) {
    auto f = [&](const T &a, const T &b) { return a == ab() || b == ab() ? ab() : a + b; };
    return warshall_floyd(graph, f, std::greater<T>());
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;
    auto ab = []() { return INT_MAX; };
    vector<vector<int>> graph(V, vector<int>(V, ab()));
    for (int i = 0; i < V; i++) { graph[i][i] = 0; }
    for (int i = 0; i < E; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        graph[s][t] = d;
    }
    vector<vector<int>> dist = basic_warshall_floyd(graph, ab);
    for (int i = 0; i < V; i++) {
        if (dist[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << (dist[i][j] == ab() ? "INF" : to_string(dist[i][j])) << (j < V - 1 ? " " : "");
        }
        cout << endl;
    }
}
