#include <iostream>
#include <vector>
#include <queue>
#define eol '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  
  queue<int> que;
  vector< vector<int> > list(n+1);
  vector<int> d(n+1, -1);

  for (int i = 0; i < n; i++) {
    int u,k;
    cin >> u >> k;
    
    vector<int> row(k);
    for (int j = 0; j < k; j++) {
      cin >> row[j];
    }
    list[u] = row;
  }

  d[1] = 0;
  que.push(1);
  while(que.size()) {
    int v = que.front();
    que.pop();

    int dis = d[v];

    for (int i = 0; i < list[v].size(); i++) {
      int next = list[v][i];
      if (d[next] == -1) {
        d[next] = dis+1;
        que.push(next);
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << i << " " << d[i] << eol;
  }
  
  return 0;
}