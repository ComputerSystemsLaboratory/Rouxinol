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
int MAX_N = 1000001;
int main(void){
  int dp[MAX_N];
  int dp2[MAX_N];
  vector<int> four;
  REP(i,MAX_N) dp[i] = INF;
  REP(i,MAX_N) dp2[i] = INF;
  dp[0] = 0;
  dp2[0] = 0;
  for(int i=1; i*(i+1)*(i+2)/6<=MAX_N; i++){
    four.push_back(i*(i+1)*(i+2)/6);
  }
  REP(i,four.size())FOR(j,four[i],MAX_N){
    dp[j] = min(dp[j],dp[j-four[i]]+1);
    if(four[i]%2) dp2[j] = min(dp2[j],dp2[j-four[i]]+1);
  }
  int N;
  while(cin>>N,N)cout<<dp[N]<<" "<<dp2[N]<<endl;
  return 0;
}