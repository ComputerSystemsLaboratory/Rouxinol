#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 11
#define INF (1<<23)

int G[MAX][MAX];

int main() {
  int n, x, y, c;
  int V;
  
  while(cin >> n, n) {
    fill(G[0], G[MAX], INF);
    
    for(int i=0; i<MAX; i++) {
      G[i][i] = 0;
    }
    
    V = 0;
    for(int i=0; i<n; i++) {
      cin >> x >> y >> c;
      V = max(V, max(x, y));
      G[x][y] = G[y][x] = c;
    }

    V++;
    
    for(int k=0; k<V; k++) {
      for(int i=0; i<V; i++) {
	for(int j=0; j<V; j++) {
	  G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
	}
      }
    }
    
    int sum, ans = INF, id;
    
    for(int i=0; i<V; i++) {
      sum = 0;
      for(int j=0; j<V; j++) {
	sum += G[i][j];
      }
      if(ans > sum) {
	ans = sum;
	id = i;
      }
    }
    
    cout << id << " " << ans << endl;
  }
  
  return 0;
}