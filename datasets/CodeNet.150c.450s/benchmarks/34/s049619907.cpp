#include<bits/stdc++.h>
using namespace std;

int dp[31];
int n;

int solve( int now ) {
  if( n == now ) return 1;
  if( dp[now] ) return dp[now];

  int sum = 0;
  for(int i=1; i<=3; i++) {
    if( now + i <= n ) sum += solve( now + i );
  }

  return dp[now] = sum;
}

int main()
{
  while( cin >> n, n ) {
    fill_n(dp, 31, 0);
    int ans = solve( 0 );
    if( ans % 3650 == 0 ) {
      cout << ans / 3650 << endl;
    } else {
      cout << ans / 3650 + 1 << endl;
    }
  }
}