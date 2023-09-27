#include <iostream>
using namespace std;

const int MAX_N = 100;
int to[MAX_N][MAX_N];
int ans[MAX_N][2];
bool visited[MAX_N];
int n = 1;

void dfs(int x) {
  if (visited[x]) return;
  visited[x] = true;

  ans[x][0] = n++;
  for (int i=0; to[x][i] != -1; i++) {
    dfs(to[x][i]);
  }
  ans[x][1] = n++;
}

int main() {
  int N;
  cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      to[i][j] = -1;
    }
    ans[i][0] = ans[i][1] = -1;
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

  for (int i=0; i<N; i++) {
    if (!visited[i]) dfs(i);
  }
  for (int i=0; i<N; i++) {
    cout << i+1 << " " << ans[i][0] << " " << ans[i][1] << endl;
  }
  return 0;
}