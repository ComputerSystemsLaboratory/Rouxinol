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
bool grid[21][21];
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};

int main(void){
  int N,M;
  while(cin>>N){
    if(N==0) break;
    int px,py,l,r=-1;
    int x=10, y=10;
    char d;
    memset(grid,0,sizeof(grid));
    REP(i,N){
      cin>>px>>py;
      grid[py][px] = true;
    }
    grid[y][x] = false;
    cin>>M;
    REP(i,M){
      cin>>d>>l;
      if(d=='N') r = 0;
      else if(d=='E') r=1;
      else if(d=='S') r=2;
      else if(d=='W') r=3;
      else cout<<"ERROR"<<endl;
      REP(k,l){
        x+=dx[r];
        y+=dy[r];
        grid[y][x] = false;
      }
    }
    bool yes = true;
    REP(y,21)REP(x,21)if(grid[y][x]) yes=false;
    if(yes) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}