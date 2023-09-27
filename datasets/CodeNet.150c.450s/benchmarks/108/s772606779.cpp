#include <iostream>
#include <queue>
using namespace std;

const int MAX_N = 100;
int to[MAX_N][MAX_N];
int ans[MAX_N];
bool visited[MAX_N];

int main() {
  int N;
  cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      to[i][j] = -1;
    }
    ans[i] = -1;
    visited[i] = false;
  }
  for (int i=0; i<N; i++) {
    int tmp, n;
    cin >> tmp >> n;
    for (int j=0; j<n; j++) {
      int t;
      cin >> t; t--;
      to[i][j] = t;
    }
  }

  queue<pair<int, int> > que;
  que.push(make_pair(0, 0));
  while (!que.empty()) {
    pair<int, int> tmp = que.front(); que.pop();
    int x = tmp.first, depth = tmp.second;
    if (ans[x] == -1) {
      ans[x] = depth;
    } else {
      continue;
    }
    for (int i=0; to[x][i] != -1; i++) {
      que.push(make_pair(to[x][i], depth + 1));
    }
  }

  for (int i=0; i<N; i++) {
    cout << i+1 << " " << ans[i] << endl;
  }
  return 0;
}