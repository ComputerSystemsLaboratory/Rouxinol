#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cstdlib>
#include <typeinfo>
#include <list>
#include <stdio.h>
#include <math.h>

using namespace std;

const int MAX_N = 101;
const int MAX_W = 10001;

int main() {
  int n, w;
  scanf("%d %d", &n, &w);
  vector<int> values(MAX_N);
  vector<int> weights(MAX_N);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &values[i], &weights[i]);
  }

  vector<vector<int>> dp(MAX_N, vector<int>(MAX_W, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= w; j++) {
      if (weights[i] > j) {
        dp[i + 1][j] = dp[i][j];
      } else {
        dp[i + 1][j] = max(dp[i][j], dp[i][j - weights[i]] + values[i]);
      }
    }
  }
  printf("%d\n", dp[n][w]);
  return 0;
}