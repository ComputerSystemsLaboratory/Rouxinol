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

const long long mod = 1000000007;

class Power
{
public:
  int m, n;
  Power(){}
  Power( int m, int n ) : m(m), n(n) {}
  int solve();
  long long pwr( int n );
};

long long Power::pwr( int x )
{
  long long ret;

  if ( x == 1 )
    ret = m;
  else if ( x % 2 )
    {
      ret = pwr( x / 2 );
      ret = ret * ret % mod;
      ret = ret * m  % mod;
    }
  else
    {
      ret = pwr( x / 2 );
      ret = ret * ret % mod;
    }

  return ret;
}

int Power::solve()
{
  cout << pwr( n ) << endl;

  return 0;
}

int main()
{
  int m, n;
  cin >> m >> n;

  Power p(m, n);

  p.solve();

  return 0;
}