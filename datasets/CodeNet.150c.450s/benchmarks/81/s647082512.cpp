#include <bits/stdc++.h>
using namespace std;

#define INF 1e6

struct WarshallFloyd {
  vector<vector<int>> d;
  int v;

  WarshallFloyd(int n) : v(n), d(n, vector<int>(n, INF)) {
    for(int i = 0; i < v; ++i) d[i][i] = 0;
  }

  void add(int from, int to, int cost) {
    d[from][to] = cost;
    d[to][from] = cost;
  }

  void make() {
    for(int k = 0; k < v; ++k) {
      for(int i = 0; i < v; ++i) {
        for(int j = 0; j < v; ++j) {
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
      }
    }
  }

  int dist(int i, int j) {
    return d[i][j];
  }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while(cin >> n, n != 0) {
    WarshallFloyd wf(10);
    for(int i = 0; i < n; ++i) {
      int a, b, c;
      cin >> a >> b >> c;
      wf.add(a, b, c);
    }
    wf.make();

    int num = 0;
    while(wf.dist(0, num) != INF) ++num;

    pair<int, int> ans(INF, -1);
    for(int i = 0; i < num; ++i) {
      int sum = 0;
      for(int j = 0; j < num; ++j) {
        sum += wf.dist(i, j);
      }
      ans = min(ans, {sum, i});
    }
    cout << ans.second << " " << ans.first << endl;
  }
}
