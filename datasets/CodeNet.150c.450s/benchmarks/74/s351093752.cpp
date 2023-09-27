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

class Coin
{
public:
  int n, m;
  vector<int> c;
  vector<vector<int>> dp;
  Coin(){}
  Coin( int n, int m ) : n(n), m(m), c(m), dp(m, vector<int>(n+1)) {}
  int solve();
};

int Coin::solve()
{
  for ( auto i = 0; i <= n; ++i )
    dp[0][i] = i;

  for ( auto i = 0; i < m; ++i )
    dp[i][0] = 0;

  sort( c.begin(), c.end() );

  for ( auto i = 1; i < m; ++i )
    {
      for ( auto j = 1; j <= n; ++j )
        {
          int mc = dp[i-1][j];

          if ( j >= c[i] )
            {
              mc = min( mc, dp[i-1][j-c[i]] + 1 );
              mc = min( mc, dp[i][j-c[i]] + 1 );
            }

          dp[i][j] = mc;
        }
    }
  
  cout << dp[m-1][n] << endl;
  
  return 0;
}

int main()
{
  int n, m;
  cin >> n >> m;

  Coin c(n, m);

  for ( auto i = 0; i < m; ++i )
    cin >> c.c[i];

  c.solve();

  return 0;
}