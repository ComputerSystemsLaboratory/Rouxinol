#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)

int a, b;
int n;
bool maze[22][22];
int x, y;
int dp[22][22];

inline bool check(int hx, int hy){ return 0 <= hx && hx < a && 0 <= hy && hy < b; }

int rec(int s, int t)
{
  if(dp[s][t] > 0) return dp[s][t];
  if(s == 0 && t == 0) return dp[s][t] = 1;
  int ret = 0;
  if(check(s - 1, t) && !maze[s - 1][t]) ret += rec(s - 1, t);
  if(check(s, t - 1) && !maze[s][t - 1]) ret += rec(s, t - 1);
  return dp[s][t] = ret;
}

int main()
{
  while(cin >> a >> b, a){
    rep(i, a) rep(j, b) maze[i][j] = false;
    cin >> n;
    rep(i, n){
      cin >> x >> y;
      maze[x - 1][y - 1] = true;
    }

    rep(i, a) rep(j, b) dp[i][j] = -1;
    cout << rec(a - 1, b - 1) << endl;
  }

  return 0;
}