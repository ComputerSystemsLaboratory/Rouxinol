#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

struct edge {
    int t, w;

    bool operator<(const edge &other) const { return w < other.w; }

    bool operator>(const edge &other) const { return w > other.w; }
};

int main() {
    int V, E;
    cin >> V >> E;

    unordered_set<int> visited;
    unordered_map<int, vector<edge>> G;

    for (int i = 0; i < E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        G[s].push_back({t, w});
        G[t].push_back({s, w});
    }

    int ans = 0;
    priority_queue<
            edge,
            vector<edge>,
            greater<>> pq;

    pq.push(edge{0, 0});

    while (!pq.empty()) {

        edge s = pq.top();
        pq.pop();

        if (visited.find(s.t) != visited.end())
            continue;

        ans += s.w;
        visited.insert(s.t);

        for (edge e : G[s.t]) {
            if (visited.find(e.t) == visited.end()) {
                pq.push(e);
            }
        }
    }

    cout << ans << endl;
}
