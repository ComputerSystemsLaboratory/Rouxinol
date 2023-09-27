#include <bits/stdc++.h>

using namespace std;

int dp[20][20];
bool cross[20][20];
int a, b;

int solve(int x, int y)
{
  if(x < 0 || a <= x || y < 0 || b <= y) return 0;
  if(cross[x][y]) return 0;
  if(x == a-1 && y == b-1) return 1;
  if(~dp[x][y]) return dp[x][y];
  return dp[x][y] = solve(x + 1, y) + solve(x, y + 1);
}

int main()
{
  while(cin >> a >> b, a || b){
    memset(dp, -1, sizeof(dp));
    memset(cross, false, sizeof(cross));
    int n; cin >> n;
    for(int i = 0; i < n; i++){
      int x, y; cin >> x >> y;
      cross[--x][--y] = true;
    }
    cout << solve(0, 0) << endl;
  }
  return 0;
}