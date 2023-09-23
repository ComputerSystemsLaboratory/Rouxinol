#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0; i < N; i++)
#define int long long
signed main()
{
  int N;
  int data[105];
  int point;
  cin >> N;--N;
  Rep(i,N)cin >> data[i];
  cin >> point;
  int dp[105][25] = {0};
  dp[0][data[0]] = 1;
  for(int i = 1; i < N; i++) {
    Rep(j,21) {
      if(j + data[i] <= 20) {
	dp[i][j] += dp[i - 1][j + data[i]];
      }
      if(j - data[i] >= 0) {
	dp[i][j] += dp[i - 1][j - data[i]];
      }
    }
  }
  cout << dp[N - 1][point] << endl;
  return 0;
}