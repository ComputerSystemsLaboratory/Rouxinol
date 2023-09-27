#include <bits/stdc++.h>
using namespace std;
long long INF = 1000000000000000;
bool detect_negative_cycles_2(vector<vector<pair<int, int>>> &E){
	int V = E.size();
	vector<long long> d(V, 0);
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
						return true;
					}
				}
			}
		}
		if (!update){
			break;
		}
	}
	return false;
}
vector<vector<long long>> warshall_floyd(vector<vector<pair<int, int>>> &E){
  int V = E.size();
  vector<vector<long long>> d(V, vector<long long>(V, INF));
  for (int i = 0; i < V; i++){
    d[i][i] = 0;
  }
  for (int i = 0; i < V; i++){
    for (int j = 0; j < E[i].size(); j++){
      d[i][E[i][j].second] = E[i][j].first;
    }
  }
  for (int k = 0; k < V; k++){
    for (int i = 0; i < V; i++){
      for (int j = 0; j < V; j++){
        if (d[i][k] != INF && d[k][j] != INF){
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
      }
    }
  }
  return d;
}
int main(){
  int V, E;
  cin >> V >> E;
  vector<vector<pair<int, int>>> e(V);
  for (int i = 0; i < E; i++){
    int s, t, d;
    cin >> s >> t >> d;
    e[s].push_back(make_pair(d, t));
  }
  if (detect_negative_cycles_2(e)){
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    vector<vector<long long>> d = warshall_floyd(e);
    for (int i = 0; i < V; i++){
      for (int j = 0; j < V; j++){
        if (d[i][j] == INF){
          cout << "INF";
        } else {
          cout << d[i][j];
        }
        if (j < V - 1){
          cout << ' ';
        }
      }
      cout << endl;
    }
  }
}
