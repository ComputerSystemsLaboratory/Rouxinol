#include <bits/stdc++.h>
using namespace std;
long long INF = 1000000000000000;
pair<bool, vector<long long>> bellman_ford_2(vector<vector<pair<int, int>>> &E, int s){
    int V = E.size();
    vector<long long> d(V, INF);
    d[s] = 0;
    for (int i = 0; i < V; i++){
        bool update = false;
        for (int j = 0; j < V; j++){
            for (int k = 0; k < E[j].size(); k++){
                int c = E[j][k].first;
                int v = E[j][k].second;
                if (d[v] > d[j] + c && d[j] != INF){
                    d[v] = d[j] + c;
                    update = true;
                    if (i == V - 1){
                        return make_pair(true, d);
                    }
                }
            }
        }
        if (!update){
            break;
        }
    }
    return make_pair(false, d);
}
int main(){
  int V, E, r;
  cin >> V >> E >> r;
  vector<vector<pair<int, int>>> e(V);
  for (int i = 0; i < E; i++){
    int s, t, d;
    cin >> s >> t >> d;
    e[s].push_back(make_pair(d, t));
  }
  pair<bool, vector<long long>> R = bellman_ford_2(e, r);
  if (R.first){
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < V; i++){
      if (R.second[i] == INF){
        cout << "INF" << endl;
      } else {
        cout << R.second[i] << endl;
      }
    }
  }
}
