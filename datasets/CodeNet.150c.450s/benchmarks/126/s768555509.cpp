#include <bits/stdc++.h>
using namespace std;

int dp[20][20];
int cnt;
int a, b;
int mx[2] = {0,1};
int my[2] = {1,0};

int solve(int x, int y){
  int ret = 0;
  if(dp[y][x] != -1){
    return dp[y][x];
  }

  for(int i = 0; i < 2; i++){
    int nx = mx[i] + x, ny = my[i] + y;
    if(nx >= 1 && ny >= 1 && nx <= a && ny <= b){
      ret += solve(nx,ny);
    }
  }
  return dp[y][x] = ret;
}

int main(){

  while(1){
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    int n;
    cin >> n;

    memset(dp,-1,sizeof(dp));

    dp[b][a] = 1;
    for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      dp[y][x] = 0;
    }

    int ans = solve(1,1);
    cout << ans << endl;
  }

}