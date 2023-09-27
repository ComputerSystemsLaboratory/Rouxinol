#include <iostream>
#include <ios>
#include <vector>
#include <utility>

using namespace std;

void read_data(int n, vector<vector<int>> & Es){
    int u = 0, k = 0, v = 0;
    while (n--){
        cin >> u;
        cin >> k;
        while (k--){
            cin >> v;
            Es[u - 1].push_back(v - 1);
        }
    }
}

void wfs(int node, vector<int> & dist, vector<vector<int>> & Es){
    int d = 0;
    vector<int> frontiers;
    frontiers.push_back(node);
    while (!frontiers.empty()){
        vector<int> new_frontiers;
        for (auto u : frontiers){
            if (dist[u] == -1){
                dist[u] = d;
                for (auto v : Es[u]){
                    new_frontiers.push_back(v);
                }
            }
        }
        frontiers = move(new_frontiers);
        ++d;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    vector< vector<int> > Es(n);
    vector<int> dist(n, -1);
    read_data(n, Es);
    wfs(0, dist, Es);
    for (int i = 0; i != n; ++i) cout << i + 1 << ' ' << dist[i] << endl;
    
    return 0;
}