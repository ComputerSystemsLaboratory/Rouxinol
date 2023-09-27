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
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int W, H;
int c[50][50];
bool visited[50][50];
int vy[8] = {-1,-1,0,1,1,1,0,-1};
int vx[8] = {0,1,1,1,0,-1,-1,-1};
void calc(int y, int x) {
  if(y < 0 || y >= H || x < 0 || x >= W) return;
  if(visited[y][x] || c[y][x] == 0) return;
  visited[y][x] = true;
  FOR(i,0,8) calc(y+vy[i],x+vx[i]);
  return;
}
int main()
{
  while(cin >> W >> H, (W || H)) {
    CLR(visited);
    FOR(y,0,H) FOR(x,0,W) cin >> c[y][x];
    int ans = 0;
    FOR(y,0,H) {
      FOR(x,0,W) {
        if(visited[y][x] || c[y][x] == 0) continue;
        calc(y, x);
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}