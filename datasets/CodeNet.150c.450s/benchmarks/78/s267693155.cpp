#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> tetra;
vector<int> oddTetra;
int dp[1000000];
int oddDp[1000000];
int N;

const int MAX = 1000000;

void initialize() {
  for (int i = 1;;i++) {
    int n = i * (i + 1) * (i + 2) / 6;
    if (n > MAX) {
      break;
    }
    tetra.push_back(n);
    if (n % 2 == 1) {
      oddTetra.push_back(n);
    }
  }
  fill(dp, dp + 1000000, MAX);
  fill(oddDp, oddDp + 1000000, MAX);
  /*
  for (int i = 0; i < tetra.size(); i++) {
    printf("%d\n", tetra[i]);
  }
  */
}

void solve() {
  dp[0] = oddDp[0] = 0;
  for (int i = 1; i < MAX; i++) {
    for (int j = 0; j < tetra.size(); j++) {
      if (tetra[j] > i) {
        break;
      }
      dp[i] = min(dp[i], 1 + dp[i - tetra[j]]);
    }
    for (int j = 0; j < oddTetra.size(); j++) {
      if (oddTetra[j] > i) {
        break;
      }
      oddDp[i] = min(oddDp[i], 1 + oddDp[i - oddTetra[j]]);
    }
  }
}

int main() {
  initialize();
  solve();
  while (true) {
    scanf("%d ", &N);
    if (N == 0) {
      break;
    }
    printf("%d %d\n", dp[N], oddDp[N]);
  }
}