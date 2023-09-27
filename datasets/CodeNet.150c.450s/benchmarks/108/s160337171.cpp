#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;
#define int ll

int g[105][105], d[105], n;

void bfs() {
  queue<int> q;
  q.push(0);
  fill(d, d + n, -1);
  d[0] = 0; 

  while(!q.empty()) {
    int que = q.front();
    q.pop();
    for (int i = 0; i < n; i++) {
      if (g[que][i] && d[i] == -1) {
        d[i] = d[que] + 1;
        q.push(i);
      }
    }
  }
}

signed main(void) {
  int u, k, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v;
      g[u-1][v-1] = 1;
    }
  }

  bfs();
  for (int i = 0; i < n; i++) {
    cout << i+1 << " " << d[i] << endl;
  }
  return 0;
}