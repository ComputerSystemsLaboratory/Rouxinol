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

class DisjointSet
{
public:
  int solve();
  int root( vector<int>& t, int id );
  int unite( vector<int>& t, int x, int y );
  int same( vector<int>& t, int x, int y );
};

int DisjointSet::root( vector<int>& t, int id )
{
  int p;
  p = t[id];
  while ( p != id )
    {
      id = p;
      p = t[id];
    }
  return p;
}

int DisjointSet::unite( vector<int>& t, int x, int y )
{
  int xp, yp;
  xp = root( t, x );
  yp = root( t, y );

  if ( xp != yp )
    t[xp] = yp;
  
  return 0;
}

int DisjointSet::same( vector<int>& t, int x, int y )
{
  if ( root( t, x ) == root( t, y ) )
    return 1;
  else
    return 0;
}

int DisjointSet::solve()
{
  int n, q;
  cin >> n >> q;

  vector<int> t( n );

  for ( auto i = 0; i < n; ++i )
    t[i] = i;

  for ( auto i = 0; i < q; ++i )
    {
      int com, x, y;
      cin >> com >> x >> y;

      if ( com == 0 )
        unite( t, x, y );
      else
        cout << same( t, x, y) << endl;
    }
  
  return 0;
}

int main()
{
  DisjointSet ds;

  ds.solve();

  return 0;
}