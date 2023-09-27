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

#define INF (1<<29)

int N;
int a[1010],dp[2][1000010];

void make(){
  int n;
  for(n = 1; n <= 1000; n++) a[n] = n * (n+1) * (n+2) / 6;
}

int main(){
  int i,j,k;

  make();

  rep(i,2) rep(j,1000010) dp[i][j] = INF;

  dp[0][0] = dp[1][0] = 0;
  for(i = 1; a[i] <= 1000000 && i < 1010; i++){
    for(j = 0; j <= 1000000; j++){
      if(j - a[i] >= 0) dp[0][j] = min(dp[0][j], dp[0][j - a[i]] + 1);
      if(a[i] % 2 == 1 && j - a[i] >= 0) dp[1][j] = min(dp[1][j], dp[1][j - a[i]] + 1);
    }
  }

  for(;;){
    scanf("%d",&N); if(N == 0) break;
    cout << dp[0][N] << ' ' << dp[1][N] << endl;
  }

  return 0;
}