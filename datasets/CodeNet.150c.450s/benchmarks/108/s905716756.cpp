#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> M(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    int node;
    int d;
    cin >> node >> d;
    node--;

    for (int j = 0; j < d; j++) {
      int tmp;
      cin >> tmp;
      tmp--;
      M[i][tmp] = 1;
    }
  }

  vector<int> res(n, -1);
  vector<int> e(n);
  res[0] = 0;

  queue<int> q;
  q.push(0);

  while (!q.empty()) {
    int num = q.front();
    q.pop();

    int cnt = res[num] + 1;

    for (int i = 0; i < M[num].size(); i++) {
      if (M[num][i] == 0) { continue; }
      if (e[i] == 1) { continue; }
      q.push(i);
      e[i]   = 1;
      res[i] = cnt;
    }
  }
  res[0] = 0;

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << res[i] << endl;
  }
}
