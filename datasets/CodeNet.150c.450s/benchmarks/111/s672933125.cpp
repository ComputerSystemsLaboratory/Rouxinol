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

int main(void){
  long long dp[101][21]={0};
  int N;
  cin>>N;
  N--;
  int array[101];
  int sum;
  REP(i,N) cin>>array[i];
  cin>>sum;
  dp[0][array[0]] = 1;
  for(int i=1; i<N; i++){
    int k = array[i];
    for(int j = 0; j+k<=20; j++){
      dp[i][j+k] += dp[i-1][j];
    }
    for(int j= 20; j-k>=0; j--){
      dp[i][j-k] += dp[i-1][j];
    }
  }
  cout<<dp[N-1][sum]<<endl;
  return 0;
}