#include <iostream>
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

class Alloc
{
public:
  int n, k;
  int w[100000];
  int solve();
  int maxcnt( int p );
};

int Alloc::solve()
{

  cin >> n >> k;

  for ( int i = 0; i < n; i++ )
    {
      cin >> w[i];
    }

  int a = 0;
  int b = 1000000000;

  while ( a + 1 != b )
    {
      int c = (a + b) / 2;
      
      if ( maxcnt( c ) == n )
        b = c;
      else
        a = c;
    }

  cout << b << endl;
      
  return 0;
}

int Alloc::maxcnt( int p )
{
  int s = 0;
  int j = 0;
  
  for ( int i = 0; i < k; i++ )
    {
      while ( s + w[j] <= p  && j < n )
        {
          s += w[j];
          j++;
        }

      if ( j == n ) return n;
      
      s = 0;
    }
  
  return j;
}

int main( void )
{
  
  Alloc al;

  al.solve();

  return 0;
}