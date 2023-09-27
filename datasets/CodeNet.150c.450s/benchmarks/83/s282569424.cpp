#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;
  
  vector<int> v(N);
  vector<int> w(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i] >> w[i];
  }

  vector<vector<int> > DP(N);
  for (int i = 0; i < N; i++) {
    DP[i].resize(W + 1);
    fill(DP[i].begin(), DP[i].end(), 0);
  }

  DP[0][w[0]] = v[0];
  for (int i = 1; i < N; i++) {
    for (int j = 0; j <= W; j++) {
      if (j < w[i]) {
	DP[i][j] = DP[i - 1][j];
      } else {
	DP[i][j] = max(DP[i - 1][j - w[i]] + v[i], DP[i - 1][j]);
      }
    }
  }
  
  int maxVal = 0;
  for (int i = 0; i <= W; i++) {
    maxVal = max(DP[N - 1][i], maxVal);
  }
  cout << maxVal << endl;
  
  return 0;
}