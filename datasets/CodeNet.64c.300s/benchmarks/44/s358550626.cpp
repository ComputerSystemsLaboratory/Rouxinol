#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  const int V = 10;
  const int INF = 1<<28;
  int n;
  while(cin >> n && n) {
    int v = 0;
    int g[V][V];
    for(int i = 0; i < V; ++i) {
      for(int j = 0; j < V; ++j) {
        g[i][j] = i == j ? 0 : INF;
      }
    }
    for(int i = 0; i < n; ++i) {
      int a, b, c;
      cin >> a >> b >> c;
      v = max(v,max(a,b)+1);
      g[a][b] = g[b][a] = min(g[b][a], c);
    }

    for(int k = 0; k < v; ++k) {
      for(int i = 0; i < v; ++i) {
        for(int j = 0; j < v; ++j) {
          g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
        }
      }
    }
    int minv = -1;
    int mini = INF;
    for(int i = 0; i < v; ++i) {
      int sum = 0;
      for(int j = 0; j < v; ++j) {
        sum += g[i][j];
      }
      if(mini > sum) {
        mini = sum;
        minv = i;
      }
    }
    cout << minv << " " << mini << endl;
  }
  return 0;
}