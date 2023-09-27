#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
template<class T> void pp(T a, T b){ for(T i = a; i != b; ++i) cout << *i << ' '; cout << endl; }

#define INF (1<<29)

int N;
int d[200];
int dp[1000010][2];

void init(){
  int n;
  rep(n,200) d[n] = n * (n+1) * (n+2) / 6;
}


int main(){
  int i,j;

  init();

  // pp(d,d+200);

  rep(i,1000010) rep(j,2) dp[i][j] = INF;

  dp[0][0] = dp[0][1] = 0;
  rep(i,1000010) for(j = 1; d[j] <= i+1; j++){
    if(i - d[j] >= 0){
      dp[i][0] = min(dp[i][0], dp[i-d[j]][0] + 1);
      if(d[j] % 2 == 1){
        dp[i][1] = min(dp[i][1], dp[i-d[j]][1] + 1);
      }
    }
  }


  while(1){
    scanf("%d",&N);
    if(N == 0) break;

    printf("%d %d\n",dp[N][0],dp[N][1]);
  }

  return 0;
}