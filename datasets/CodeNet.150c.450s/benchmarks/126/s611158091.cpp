#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)

int a, b;
int n;
int maze[22][22];
int x, y;
int dp[22][22];

int main()
{
  while(cin >> a >> b, a){
    rep(i, a) rep(j, b) maze[i][j] = false;
    rep(i, a) rep(j, b) dp[i][j] = 0;
    cin >> n;
    rep(i, n){
      cin >> x >> y;
      maze[x - 1][y - 1] = true;
    }

    dp[0][0] = 1;
    rep(i, a) rep(j, b){
      if(!maze[i + 1][j]) dp[i + 1][j] += dp[i][j];
      if(!maze[i][j + 1]) dp[i][j + 1] += dp[i][j];
    }

    cout << dp[a - 1][b - 1] << endl;
  }

  return 0;
}