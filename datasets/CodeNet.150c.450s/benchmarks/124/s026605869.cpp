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

class SSSPath
{
public:
  vector<int> v;
  int solve();
};

int SSSPath::solve()
{
  int n;
  cin >> n;

  const int infty = 200000;
  vector<int> d( n, infty );
  
  d[0] = 0;

  vector<vector<int>> adj( n, vector<int>( n, -1 ) );


  for ( auto i = 0; i < n; ++i )
    {
      int u, v, k, c;
      cin >> u >> k;
      for ( auto j = 0; j < k; ++j )
        {
          cin >> v >> c;
          adj[u][v] = c;
        }
    }

  vector<int> sv( n, true );

  while ( true )
    {
      int md = infty;
      int u;
      
      for ( auto i = 0; i < n; ++i )
        {
          if ( sv[i] && d[i] < md )
            {
              u = i;
              md = d[i];
            }
        }

      if ( md == infty ) break;

      sv[u] = false;
      
      for ( auto i = 0; i < n; ++i )
        {
          if ( sv[i] && adj[u][i] >= 0 )
            {
              if ( d[u] + adj[u][i] < d[i] )
                {
                  d[i] = d[u] + adj[u][i];
                  
                }
            }
          
        }
    }

  for ( auto i = 0; i < n; ++i )
    {
      cout << i << " " << d[i] << endl;
    }
  
  return 0;
}

int main()
{
  SSSPath s;

  s.solve();

  return 0;
}