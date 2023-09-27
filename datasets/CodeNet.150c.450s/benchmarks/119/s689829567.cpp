#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
const int dx[8] = {0,1,1,1,0,-1,-1,-1};
const int dy[8] = {1,1,0,-1,-1,-1,0,1};
int w,h,grid[51][51];
void s(int x, int y){
  grid[y][x] = 0;
  REP(r,8){
    if(x+dx[r]>=0&&x+dx[r]<w&&y+dy[r]>=0&&y+dy[r]<h&&grid[y+dy[r]][x+dx[r]]){
      s(x+dx[r],y+dy[r]);
    }
  }
} 


int main(void){
  while(cin>>w>>h){
    if(w==0) break;
    REP(y,h)
      REP(x,w)
        cin>>grid[y][x];
    int c = 0;
    REP(y,h)
      REP(x,w)
        if(grid[y][x]){
          c++;
          s(x,y);
        }
    cout<<c<<endl;
  }
  return 0;
}