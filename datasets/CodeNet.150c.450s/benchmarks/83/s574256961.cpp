#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <sstream>
#include <string>
#include <utility>
#include <map>
#include <memory>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <array>

using namespace std;

class Knapsack
{
public:
  int n, maxw;
  vector<int> v,w;
  vector<vector<int>> dp;
  Knapsack(){}
  Knapsack( int n, int w ) : n(n), maxw(w), v(n), w(n), dp(n+1, vector<int>(w+1)) {}
  int solve();
};

int Knapsack::solve()
{
  for ( auto j = 0; j <= maxw; ++j )
    dp[0][j] = 0;
  
  for ( auto i = 0; i <= n; ++i )
    dp[i][0] = 0;

  for ( auto i = 0; i < n; ++i )
    for ( auto j = 1; j <= maxw; ++j )
      if ( j >= w[i] )
        dp[i+1][j] = max( dp[i][j], dp[i][j-w[i]] + v[i] );
      else
        dp[i+1][j] = dp[i][j];
  
  cout << dp[n][maxw] << endl;
  
  return 0;
}

int main()
{
  int n, w;
  cin >> n >> w;

  Knapsack k( n, w );

  for ( auto i = 0; i < n; ++i )
    cin >> k.v[i] >> k.w[i];

  k.solve();

  return 0;
}