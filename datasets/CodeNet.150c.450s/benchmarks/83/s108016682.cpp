#include <iostream>

using namespace std;

int main() {
  int N, W;
  int w[110];
  int v[110];
  int d[110][10010];

  cin >> N >> W;

  for (int i = 0; i < N; i++) {
    cin >> v[i] >> w[i];
  }
  for (int j = 0; j <= W; j++) {
    d[0][j] = 0;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= W; j++) {
      if (j >= w[i]) {
        d[i+1][j] = max(d[i][j-w[i]] + v[i], d[i][j]);
      } else {
        d[i+1][j] = d[i][j];
      }
    }
  }
  cout  << d[N][W] << endl;
}

