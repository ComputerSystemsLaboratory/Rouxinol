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
const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,-1,0,1};
int x[201];
int y[201];
int main(void){
  int N,n,d;
  while(cin>>N){
    if(N==0) break;
    int max_x=0, max_y=0, min_x=0, min_y = 0;
    FOR(i,1,N){
      cin>>n>>d;
      x[i] = x[n] +dx[d];
      y[i] = y[n] +dy[d];
      max_x = max(max_x,x[i]);
      min_x = min(min_x,x[i]);
      max_y = max(max_y,y[i]);
      min_y = min(min_y,y[i]);
    }
    printf("%d %d\n",max_x-min_x+1,max_y-min_y+1);
  }
  return 0;
}