#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 2 * 1e9

typedef long long ll;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int V, E;
  cin >> V >> E;
  vector<vector<int>> d(V, vector<int>(V, INF));
  for(int i = 0; i < V; i++)d[i][i] = 0;
  for(int i = 0; i < E; i++){
    int s, t, _d;
    cin >> s >> t >> _d;
    d[s][t] = _d;
  }
  for(int k = 0; k < V; k++){
    for(int i = 0; i < V; i++){
      for(int j = 0; j < V; j++)if(d[i][k] != INF && d[k][j] != INF)d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }
  }
  for(int i = 0; i < V; i++)if(d[i][i] < 0){
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for(int i = 0; i < V; i++){
    for(int j = 0; j < V; j++){
      if(d[i][j] == INF)cout << "INF";
      else cout << d[i][j];
      if(j != V - 1)cout << " ";
    }
    cout << endl;
  }
}