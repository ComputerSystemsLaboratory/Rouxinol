#include <iostream>
#include <vector>
using namespace std;

int f(int n)
{
  return n*(n+1)*(n+2)/6;
}

int main()
{
  static const int M = 1000000;
  static int tetra[200];
  int tetra_size = 0;
  for (int i = 1; f(i) <= M; i++) {
    tetra[tetra_size++] = f(i);
  }

  static int dp[M+1], odd_dp[M+1];
  fill_n(dp+1, M, 1000000);
  fill_n(odd_dp+1, M, 1000000);
  for (int i = 0; i < tetra_size; i++) {
    for (int j = tetra[i]; j <= M; j++) {
      dp[j] = min(dp[j], dp[j-tetra[i]] + 1);
    }
    if (tetra[i] % 2 == 1) {
      for (int j = tetra[i]; j <= M; j++) {
        odd_dp[j] = min(odd_dp[j], odd_dp[j-tetra[i]] + 1);
      }
    }
  }
  int N;
  while (cin >> N && N != 0) {
    cout << dp[N] << ' ' << odd_dp[N] << endl;
  }
  return 0;
}