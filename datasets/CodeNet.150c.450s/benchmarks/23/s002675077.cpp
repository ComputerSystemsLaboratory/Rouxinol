#include <bits/stdc++.h>

#define REP( i, n) for( int i = 0; i < (n); ++i)
#define FOR( i, a, b) for( int i = (a); i < (b); ++i)

#define pb push_back

const int INF = 100100100;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

int dp[44];

ll f( int n){

  if( dp[n] ) return dp[n];
  else dp[n] = f(n-1)+f(n-2);
  
  return dp[n];
}

int main(){

  int x;
  REP( i, 44){
    dp[i] = 0;
  }

  dp[0] = 1;
  dp[1] = 1;

  cin >> x;
  cout << f(x) << endl;

}