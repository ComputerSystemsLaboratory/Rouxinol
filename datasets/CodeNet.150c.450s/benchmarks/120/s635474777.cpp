#include <bits/stdc++.h>

using namespace std;

int R, C;
int a[11][10010];
bool turn[11];

int ans;

int senbei()
{
  int ret = 0;
  for(int i = 0; i < C; i++){
    int cnt = 0;
    for(int j = 0; j < R; j++){
      if(turn[j] && a[j][i] == 0 || !turn[j] && a[j][i] == 1) cnt++;
    }
    ret += max(cnt, R - cnt);
  }
  return ret;
}

void solve(int r)
{
  if(r == R){
    ans = max(ans, senbei());
    return;
  }
  
  turn[r] = true;
  solve(r + 1);
  
  turn[r] = false;
  solve(r + 1);
}

int main()
{
  while(cin >> R >> C, R || C){
    for(int i = 0; i < R; i++){
      for(int j = 0; j < C; j++) cin >> a[i][j];
    }
  
    fill(turn, turn + 11, false);
    ans = -1;
    solve(0);

    cout << ans << endl;
  }
  
  return 0;
}