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

class RSQuery
{
public:
  int solve();
  void updateST( vector<int> &st, int ix );
  int getSum( vector<int> &st, int x, int y , int ix, int l, int r );
};

void RSQuery::updateST( vector<int> &st, int ix )
{
  if ( ix == 0 ) return;
  int p = (ix - 1) / 2;
  
  while ( true )
    {
      st[p] = st[2 * p + 1] + st[2 * p + 2];
      if ( p == 0 ) break;
      p = (p - 1) / 2;
    }

  return;
}

int RSQuery::getSum( vector<int> &st, int x, int y , int ix, int l, int r )
{
  if ( r <= x || y <= l ) return 0;
  if ( x <= l && r <= y )
    return st[ix];
  else
    return getSum( st, x, y, 2 * ix + 1, l, (l + r) / 2 ) + getSum(st, x, y, 2 * ix + 2, (l + r) / 2, r );
  return 0;
}

int RSQuery::solve()
{

  int n, q, mn;

  cin >> n >> q;

  for ( mn = 1; mn < n; mn *= 2 );

  vector<int> st( 2 * mn , 0 );

  for ( auto i = 0; i < q; ++i )
    {
      int com, x, y;
      cin >> com >> x >> y;
      if ( com == 0 )
        {
          st[ mn - 2 + x ] += y;
          updateST( st, mn - 2 + x );
        }
      else
        cout << getSum( st, x - 1, y, 0, 0, mn ) << endl;
    }

  return 0;
}

int main()
{
  RSQuery rsq;

  rsq.solve();

  return 0;
}