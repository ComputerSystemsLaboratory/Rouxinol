#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1<<27;
int G[10][10];

int main() {
  int n;
  while(cin >> n && n) {
    fill(G[0],G[10],INF);
    for(int i = 0; i < 10; ++i) G[i][i] = 0;

    for(int i = 0; i < n; ++i) {
      int a, b;
      cin >> a >> b;
      cin >> G[a][b];
      G[b][a] = G[a][b];
    }
    for(int k = 0; k < 10; ++k) {
      for(int i = 0; i < 10; ++i) {
	for(int j = 0; j < 10; ++j) {
	  if(G[i][k] == INF || G[k][j] == INF) continue;
	  G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
	}
      }
    }

    int mini, minCost;
    minCost = INF;
    for(int i = 0; i < 10; ++i) {
      int sum = 0;
      for(int j = 0; j < 10; ++j) {
	if(G[i][j] == INF) continue;
	sum += G[i][j];
      }
      if(sum == 0) continue;
      if(sum < minCost) {
	mini = i;
	minCost = sum;
      }
    }
    cout << mini << " " << minCost << endl;
  }
  return 0;
}