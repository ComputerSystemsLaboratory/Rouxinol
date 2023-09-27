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

using namespace std;

class MCMult
{
public:
  vector<vector<int>> mat;
  int solve();
};

int MCMult::solve()
{
  int ms = mat.size();
  vector<vector<int>> dp(ms, vector<int>(ms, 0));

  for ( auto i = 0; i < ms - 1; ++i )
    dp[i][i+1] = mat[i][0] * mat[i][1] * mat[i+1][1];

  for ( auto k = 2; k < ms; ++k )
    {
      for ( auto i = 0; i + k < ms; ++i )
        {
          int ret = dp[i+1][i+k] + mat[i][0] * mat[i][1] * mat[i+k][1];
          ret = min( ret, dp[i][i+k-1] + mat[i+k][0] * mat[i+k][1] * mat[i][0]);
          
          for ( auto j = i + 1; j < i + k - 1; ++j )
            {
              ret = min( ret, dp[i][j] + dp[j+1][i+k] + mat[i][0] * mat[j][1] * mat[i+k][1]);
            }
          dp[i][i+k] = ret;
        }
    }

  cout << dp[0][ms-1] << endl;
  
  return 0;
}

int main()
{
  int n;
  cin >> n;

  MCMult m;

  for ( int i = 0; i < n; ++i )
    {
      int x;
      vector<int> v;
      
      cin >> x;
      v.push_back( x );
      cin >> x;
      v.push_back( x );
      
      m.mat.push_back( v );
    }
  
  m.solve();

  return 0;
}