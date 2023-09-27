#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <cstdio>
#include <complex>
using namespace std;

int main() {
  int N , W;
  cin >> N >> W;
  vector<vector<int> > vs(N+1, vector<int>(W+1, -1));
  vs[0][0] = 0;
  for (int i = 1; i <= N; i++) {
    int v, w;
    cin >> v >> w;
    for (int j = 0; j <= W; j++) {
      vs[i][j] = max(vs[i-1][j], vs[i][j]);
      if (w + j > W || vs[i-1][j] < 0) continue;
      vs[i][j + w] = max(vs[i][j + w], vs[i-1][j] + v);
    }
  }
  int res = 0;

  for (int i = 0; i <= W; i++) {
    res = max(res, vs[N][i]);
  }
  cout << res << endl;
}