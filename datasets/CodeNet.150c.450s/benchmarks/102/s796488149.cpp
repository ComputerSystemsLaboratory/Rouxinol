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
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;
int H, W;
bool visited[20][20];
int calc(vector<string> &vs, int y, int x) {
  if(y < 0 || y >= H || x < 0 || x >= W) return 0;
  if(visited[y][x] || vs[y][x] == '#') return 0;
  visited[y][x] = true;
  int ret = 1;
  ret += calc(vs, y+1,x);
  ret += calc(vs, y-1,x);
  ret += calc(vs, y,x+1);
  ret += calc(vs, y,x-1);
  return ret;
}

int main()
{
  while(cin >> W >> H) {
    if(W == 0) return 0;
    vector<string> vs(H);
    FOR(i,0,H) cin >> vs[i];
    int sx, sy;
    FOR(y,0,H) {
      FOR(x,0,W) {
        if(vs[y][x] == '@') {
          sx = x;
          sy = y;
        }
      }
    }
    FOR(i,0,H) FOR(j,0,W) visited[i][j] = false;
    cout << calc(vs, sy, sx) << endl;
  }
  return 0;
}