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

class LCSubseq
{
public:
  int solve( const string x, const string y );
};

int LCSubseq::solve( const string x, const string y )
{
  vector<vector<int>> dp( 1 + x.size(), vector<int>( 1 + y.size(), 0 ) );
  
  for ( auto i = 0; i < (int)x.size(); ++i )
    for( auto j = 0; j < (int)y.size(); ++j )
      {
        if ( x[i] == y[j] )
          dp[i+1][j+1] = dp[i][j] + 1;
        else
          dp[i+1][j+1] = max( dp[i+1][j], dp[i][j+1] );
      }
  
  cout << dp[x.size()][y.size()] << endl;
  
  return 0;
}

int main()
{
  int n;
  cin >> n;

  LCSubseq l;

  string x, y;
  
  for ( auto i = 0; i < n; ++i )
    {
      cin >> x;
      cin >> y;
      l.solve( x, y );
    }
  
  return 0;
}