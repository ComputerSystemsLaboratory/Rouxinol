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

class LISubsequence
{
public:
  int n;
  vector<int> a;
  vector<int> dp;
  LISubsequence(){}
  LISubsequence( int n ) : n(n), a(n) {}
  int solve();
};

int LISubsequence::solve()
{

  dp.push_back( a[0] );

  
  for ( auto i = 1; i < n; ++i )
    {
      if ( dp[dp.size() - 1] < a[i] )
        {
          dp.push_back( a[i] );
        }
      else
        {
          auto it = lower_bound( dp.begin(), dp.end(), a[i] );
          *it = a[i];
        }
    }

  cout << dp.size() << endl;
  
  return 0;
}

int main()
{
  int n;
  cin >> n;

  LISubsequence lis(n);

  for ( auto i = 0; i < n; ++i )
    cin >> lis.a[i];

  lis.solve();

  return 0;
}