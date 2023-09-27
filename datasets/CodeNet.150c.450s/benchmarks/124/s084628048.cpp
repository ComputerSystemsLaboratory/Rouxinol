#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
    int N; cin >> N;
    int u, k, v, c; 
    const int inf = 100000000;
    

    vector<pair<int, int> > G[N];
    for (int i = 0; i < N; ++i) {
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            cin >> v >> c;
            G[u].push_back(make_pair(c, v));
        }
    }

    int dist[N]; 
    priority_queue<pair<int, int> > que;

    for (int i = 0; i < N; ++i) {
        if (i) dist[i] = inf;
        else dist[i] = 0;
    }
    que.push(make_pair(0, 0));

    while (!que.empty()) {
        pair<int, int> f = que.top(); que.pop();
        int cur_cost = f.first*(-1);
        int cur_vtx = f.second;

        if (dist[cur_vtx] < cur_cost) continue;

        for (int i = 0; i < G[cur_vtx].size(); ++i) {
            int next_cost = G[cur_vtx][i].first;
            int next_vtx = G[cur_vtx][i].second;

            if (dist[next_vtx] > cur_cost + next_cost) {
                dist[next_vtx] = cur_cost + next_cost;
                que.push(make_pair(dist[next_vtx]*(-1), next_vtx));
            }
        }   
    }

    for (int v = 0; v < N; ++v) cout << v<< " " << dist[v] << endl;

    return 0;
}



