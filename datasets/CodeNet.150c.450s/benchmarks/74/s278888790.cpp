#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>

#define rep(i, n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define eps 1e-14
#define INF 1e9

using namespace std;

int c[30];
int dp[50001];

signed main(){
  int n, m;
  cin >> n >> m;
  rep(i, m){
    cin >> c[i];
  }
  
  rep(i, 50001){
    dp[i] = INF;
  }
  
  // dp[i] := i円払うときの最小の枚数
  dp[0] = 0;
  rep(i, m){    
    for(int j = 0 ; j + c[i] <= n ; j++){
      dp[j+c[i]] = min(dp[j + c[i]], dp[j] + 1);
    }
  }

  cout << dp[n] << endl;
}
