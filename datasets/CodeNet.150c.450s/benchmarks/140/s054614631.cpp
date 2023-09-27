#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
enum COLOR {BLACK, WHITE};
int main(){
    int V, E;
    cin >> V >> E;
    vector<vector<pair<int, int> > > G(V);
    for (int i = 0; i < E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        G[s].push_back(make_pair(t, w));
        G[t].push_back(make_pair(s, w));
    }
    vector<COLOR> color(V, WHITE);
    priority_queue<pair<int, int> > Q;
    color[0] = BLACK;
    int u = 0;
    int sum = 0;
    while(1) {
        for (int i = 0; i < G[u].size(); i++) {
            int v = G[u][i].first;
            if (color[v] == BLACK) continue;
            int w = G[u][i].second;
            Q.push(make_pair(w * (-1), v));
        }
        while (!Q.empty() && color[Q.top().second] == BLACK) Q.pop();
        if (Q.empty()) break;
        u = Q.top().second;
        color[u] = BLACK;
        sum += Q.top().first * (-1);
        Q.pop();
    }
    cout << sum << endl;
    return 0;
}

