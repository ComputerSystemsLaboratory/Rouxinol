#include <bits/stdc++.h>
using namespace std;
long long INF = 1000000000000000;
vector<long long> bellman_ford(vector<vector<pair<int, int>>> &E, int s){
    int V = E.size();
    vector<long long> d(V, INF);
    d[s] = 0;
    while (1){
        bool update = false;
        for (int i = 0; i < V; i++){
            for (int j = 0; j < E[i].size(); j++){
                int c = E[i][j].first;
                int v = E[i][j].second;
                if (d[v] > d[i] + c && d[i] != INF){
                    d[v] = d[i] + c;
                    update = true;
                }
            }
        }
        if (!update){
            break;
        }
    }
    return d;
}
int main(){
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> E(n);
    for (int i = 0; i < n; i++){
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++){
            int v, c;
            cin >> v >> c;
            E[i].push_back(make_pair(c, v));
        }
    }
    vector<long long> d = bellman_ford(E, 0);
    for (int i = 0; i < n; i++){
        cout << i << ' ' << d[i] << endl;
    }
}
