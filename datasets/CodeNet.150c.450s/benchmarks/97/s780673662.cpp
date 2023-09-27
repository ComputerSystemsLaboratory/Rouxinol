#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
typedef complex<double> P;
static const double EPS = 1e-8;
static const int INF = (int)1e8;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) for (int i=0; i<(int)(n); ++i)
#define FOREQ(i,k,n) for (int i=(k); i<=(int)(n); ++i)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define FIND(m,w) ((m).find(w)!=(m).end())
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int main(void){
  int N;
  while(cin>>N,N){
    int Mx=1,mx=0,My=1,my=0;
    vector<PII> point(N);
    REP(i,N-1){
      int n,d;
      cin>>n>>d;
      point[i+1] = PII(point[n].first+dx[d],point[n].second+dy[d]);
      Mx = max(point[i+1].first+1,Mx);
      mx = min(point[i+1].first,mx);
      My = max(point[i+1].second+1,My);
      my = min(point[i+1].second,my);
    }
    printf("%d %d\n",Mx-mx,My-my);
  }
  return 0;
}