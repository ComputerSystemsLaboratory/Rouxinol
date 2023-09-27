// ------------------------------------
// Date:2018/ 3/ 2
// Problem:AOJ DPL Longest Increasing Subsequence 1_D.cpp
//
// ------------------------------------

#include <bits/stdc++.h>

using namespace std;

#define EACH(i,a) for (auto&& i : a)
#define FOR(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define RFOR(i,a,b) for(int i=(int)b-1;i>=(int)a;--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define debug(x) cerr << #x << ":" << x << endl

typedef long long ll;

//static const int MOD = 1000000007;

int main()
{
  int n;
  int a[101010];
  // dp[num]:num番目までのLISの長さ
  int dp[101010];

  memset(a, 0, sizeof(a));
  scanf("%d", &n);
  fill_n(dp, n, 1e9+1);
  REP(i, n) {
    scanf("%d", &a[i]);
  }
  
  REP(i, n) {
    *lower_bound(dp, dp+n, a[i]) = a[i];
  }
  printf("%d\n", distance(dp, lower_bound(dp, dp + n, 1e9+1)));
  /*
  REP(i, n) {
    printf("dp[%d] = %d\n", i, dp[i]);
  }
   */
  return 0;
}


