#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <utility>
#include <functional>
using namespace std;

constexpr int INF = 1 << 30;

void read_graph(int n, vector<vector<pair<int, int>>> & Es){
    int u, k, v, c;
    while (n--){
        cin >> u >> k;
        while(k--){
            cin >> v >> c;
            Es[u].push_back(pair<int, int>(v, c));
        }
    }
}

void dijkstra(int start, const vector<vector<pair<int, int>>> & Es, vector<int> & dist){
    priority_queue<pair<int, int>, vector< pair<int, int> >, greater<pair<int, int> > > pq;
    pq.emplace(0, start);
    int d, u, v, c;
    while(!pq.empty()){
        tie(d, u) = pq.top();
        pq.pop();
        if (dist[u] < d) continue;
        dist[u] = d;
        for (auto p : Es[u]){
            tie(v, c) = p;
            if (d + c < dist[v]){
                dist[v] = d + c;
                pq.emplace(d + c, v);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    vector< vector< pair<int, int> > > Es(n);
    vector<int> dist(n, INF);
    
    read_graph(n, Es);
    dijkstra(0, Es, dist);
    
    for (int i = 0; i != n; ++i){
        cout << i << ' ' << dist[i] << endl;
    }
    return 0;
}