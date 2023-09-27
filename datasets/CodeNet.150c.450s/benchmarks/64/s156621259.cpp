#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<vector<bool > >dp(25,vector<bool>(2005,false));
  int N;
  cin >> N;
  int A[25];
  dp[0][0] = true;
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < 2005; j++) {
      if(dp[i][j] == false)continue;
      if(j + A[i] < 2005) {
	dp[i + 1][j + A[i]] = true;
      }
      dp[i + 1][j] = true;
    }
  }
  int q,m;
  cin >> q;
  while(q--) {
    cin >> m;
    if(dp[N][m] == true)cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}