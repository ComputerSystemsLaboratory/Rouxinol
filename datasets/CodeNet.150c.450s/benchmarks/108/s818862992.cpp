/* ALDS1_11_C: Breadth First Search */

#include <iostream>
#include <vector>
#include <queue>
using std::vector;
using std::queue;

// 頂点0から各頂点への最短距離を paths に格納する。
void minimum_paths(int n_v, vector<int> graph[], int paths[]) {
    queue<int> visits;
    int found[n_v];
    std::fill_n(found, n_v, 0);
    found[0] = 1;

    visits.push(0);
    while(! visits.empty()) {
        int id = visits.front();
        visits.pop();
        vector<int> adjs = graph[id];
        for (int i = 0; i < adjs.size(); i++) {
            int adj = adjs[i];
            if (! found[adj]) {
                found[adj] = 1;
                paths[adj] = paths[id] + 1;
                visits.push(adj);
            }
        }
    }

    // 辿りつけなかった頂点までの距離は -1 とする。
    for (int i = 1; i < n_v; i++) {
        if (paths[i] == 0) {
            paths[i] = -1;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);

    int n_v;
    std::cin >> n_v;

    int id, adj, n_adjs;
    vector<int> *graph = new vector<int>[n_v];
    for (int i = 0; i < n_v; i++) {
        std::cin >> id >> n_adjs;
        for (int j = 0; j < n_adjs; j++) {
            std::cin >> adj;
            graph[id - 1].push_back(adj - 1);
        }
    }

    int paths[n_v];
    std::fill_n(paths, n_v, 0);
    minimum_paths(n_v, graph, paths);

    for (int i = 0; i < n_v; i++) {
        std::cout << i + 1 << " " << paths[i] << "\n";
    }
    return 0;
}