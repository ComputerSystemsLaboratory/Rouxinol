#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;
constexpr ll LINF = 1LL << 60;

int V, E, r;
vector<vector<pair<int, int>>> graph;
vector<ll> dist;

bool spfa(int s) {
    dist.assign(V, LINF);
    dist[s] = 0;
    queue<int> que;
    que.push(s);
    vector<bool> in_queue(V);
    vector<int> cnt_update(V, 0);
    cnt_update[s]++;

    while (!que.empty()) {
        int v = que.front(); que.pop();
        in_queue[v] = false;

        for (auto& e : graph[v]) {
            if (dist[v] + e.first < dist[e.second]) {
                dist[e.second] = dist[v] + e.first;

                if (!in_queue[e.second]) {
                    que.push(e.second);
                    in_queue[e.second] = true;

                    cnt_update[e.second]++;
                    if (cnt_update[e.second] == V) return true;
                }
            }
        }
    }

    return false;
}

int main() {
    cin >> V >> E >> r;
    graph.resize(V);
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].emplace_back(d, t);
    }

    bool nc = spfa(r);

    if (nc) {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else {
        for (ll d : dist) {
            if (d == LINF) {
                cout << "INF" << endl;
            }
            else {
                cout << d << endl;
            }
        }
    }
}
