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
// #include <array>

using namespace std;

class MSTree
{
public:
  int solve();
};

int MSTree::solve()
{
  int n;
  cin >> n;
  
  vector<vector<int>> adj(n, vector<int>(n));
  list<int> t, vt;

  for ( auto i = 0; i < n; ++i )
    for ( auto j = 0; j < n; ++j )
      cin >> adj[i][j];

  t.push_back( 0 );

  for ( auto i = 1; i < n; ++i )
    vt.push_back( i );

  int w = 0;

  while ( vt.size() )
    {
      int mw = 4000;
      list<int>::iterator itm;
      
      for ( auto ita = t.begin(); ita != t.end(); ++ita )
        for ( auto itb = vt.begin(); itb != vt.end(); ++itb )
          {
            if ( adj[*ita][*itb] >= 0 && mw > adj[*ita][*itb] )
              {
                itm = itb;
                mw = adj[*ita][*itb];
              }
          }
      
      w += mw;
      t.push_back( *itm );
      vt.erase( itm );
    }

  cout << w << endl;
    
  return 0;
}

int main()
{
  MSTree m;

  m.solve();

  return 0;
}