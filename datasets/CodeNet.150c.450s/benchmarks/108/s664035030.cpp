#include "bits/stdc++.h"

using namespace std;

void Main() {
    int n;
    cin >> n;
    vector<set<int>> graph(n, set<int>());
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;
        --u;
        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            --v;
            graph[u].insert(v);
        }
    }

    queue<pair<int, int>> q;
    vector<int> distances(n, -1);
    q.push(make_pair(0, 0));
    distances[0] = 0;
    while (!q.empty()) {
        pair<int, int> curr_dist = q.front();
        q.pop();
        int curr = curr_dist.first;
        int dist = curr_dist.second;
        const set<int>& nexts = graph.at(curr);
        for (int e : nexts) {
            if (distances[e] < 0) {
                q.push(make_pair(e, dist + 1));
                distances[e] = dist + 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " " << distances[i] << endl;
    }
}

int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}

