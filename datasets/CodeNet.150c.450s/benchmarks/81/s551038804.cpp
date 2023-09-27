#include <bits/stdc++.h>

using namespace std;

int N, M;
int d[15][15];

bool read() {
  cin >> M;
  if (M == 0) return false;
  for (int i = 0; i <= 10; i++) {
    for (int j = 0; j <= 10; j++) {
      d[i][j] = 1<<20;
    }
    d[i][i] = 0;
  }
  N = 0;
  int s, e, m;
  for (int i = 0; i < M; i++) {
    cin >> s >> e >> m;
    d[s][e] = m;
    d[e][s] = m;
    N = max(N, s);
    N = max(N, e);
  }
  return true;
}

void floyd(int n) {
  for (int k = 0; k < n; k++)
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
}

void solve() {
  floyd(N+1);
  int dmin = 1<<20, idx = 0;
  for (int i = 0; i <= N; i++) {
    int dis = 0;
    for (int j = 0; j <= N; j++) {
      dis += d[i][j];
    }
    if (dis < dmin) dmin = dis, idx = i;
  }
  cout << idx << ' ' << dmin << endl;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  while (read()) {
    solve();
  }
  return 0;
}