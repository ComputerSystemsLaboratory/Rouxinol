#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  int h, w;
  while(cin >> w >> h) {
    if(h == 0 && w == 0) return 0;
    int n; cin >> n;
    int ng[h][w]; CLR(ng);
    FOR(i,0,n) {
      int a, b; cin >> a >> b;
      --a;--b;
      ng[b][a] = true;
    }
    ll dp[h][w]; CLR(dp);
    FOR(y,0,h) {
      if(!ng[y][0]) dp[y][0] = 1;
      else break;
    }
    FOR(x,0,w) {
      if(!ng[0][x]) dp[0][x] = 1;
      else break;
    }
    FOR(y,1,h) {
      FOR(x,1,w) {
        if(ng[y][x]) continue;
        dp[y][x] = dp[y-1][x] + dp[y][x-1];
      }
    }
    cout << dp[h-1][w-1] << endl;
  }
  return 0;
}