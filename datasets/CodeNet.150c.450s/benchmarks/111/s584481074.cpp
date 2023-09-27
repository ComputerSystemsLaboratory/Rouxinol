#include<iostream>
#include<vector>
using namespace std;

typedef long long int integer;

integer dp[108][21];

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  dp[0][v[0]] = 1;
  for (int i = 1; i < N - 1; i++) {
    for (int j = 0; j < 21; j++) {
      if (j + v[i] <= 20) {
        dp[i][j+v[i]] += dp[i-1][j];
      }

      if (j - v[i] >= 0) {
        dp[i][j-v[i]] += dp[i-1][j];
      }
    }
  }

  cout << dp[N - 2][v[N-1]] << endl;
}