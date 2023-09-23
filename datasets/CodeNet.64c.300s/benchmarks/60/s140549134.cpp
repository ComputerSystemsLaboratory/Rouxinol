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
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
bool work[17][17];
int memo[17][17];
int C(int x, int y){
  if(x==0||y==0) return 0;
  if(x==1&&y==1) return 1;
  if(work[x][y]) return 0;
  if(memo[x][y]!=-1) return memo[x][y];
  return (C(x-1,y) + C(x,y-1));
}
int main(void){
  int a,b;
  while(cin>>a>>b){
    if(a==0) break;
    memset(work,0,sizeof(work));
    memset(memo,-1,sizeof(memo));
    int n,x,y;
    cin>>n;
    REP(i,n){
      cin>>x>>y;
      work[x][y]=true;
    }
    cout<<C(a,b)<<endl;
  }
  return 0;
}