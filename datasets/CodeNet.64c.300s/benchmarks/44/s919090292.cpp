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
const int INF = 1e6;
int main(void){
  int n;
  int cost[10][10];
  while(cin>>n){
    if(n==0) break;
    REP(i,10)REP(j,10) cost[i][j] = INF;
    REP(i,n){
      int a,b,c;
      cin>>a>>b>>c;
      cost[a][b] = cost[b][a] = c;
    }
    REP(k,10)REP(i,10)REP(j,10)cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
    int ans = INF;
    int ansi;
    REP(i,10){
      int tmp=0;
      REP(j,10)tmp+=(cost[i][j]!=INF&&i!=j)?cost[i][j]:0;
      if(tmp!=0&&ans>tmp){
        ans = tmp;
        ansi = i;
      }
    }
    cout<<ansi<<" "<<ans<<endl;
  }

  return 0;
}