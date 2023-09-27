#include <iostream>
#include <queue>

int d[110];

int main() {
  int n;
  std::cin >> n;
  int G[110][110];
  for(int i=0; i<n; ++i) {
    for(int j=0; j<n; ++j) G[i][j] = 0;
  }

  for(int i=0; i<n; ++i) {
    d[i] = -1;
  }

  for(int i=0; i<n; ++i) {
    int u, k;
    std::cin >> u >> k;
    u--;
    for(int j=0; j<k; ++j) {
      int v;
      std::cin >> v;
      v--;
      G[u][v] = 1;
    }
  }

  std::queue<int> que;
  que.push(0);
  int dist = 0;
  d[0] = 0;

  while(!que.empty()) {
    // キューから一番最初を取り出す
    int u = que.front();
    que.pop();

    for(int v=0; v<n; ++v) {
      if(G[u][v] == 1 && d[v] == -1) {
        que.push(v);
        d[v] = d[u]+1;
      }
    }
  }

  for(int i=0; i<n; ++i) {
    std::cout << i+1 << " " << d[i] << std::endl;
  }
}
