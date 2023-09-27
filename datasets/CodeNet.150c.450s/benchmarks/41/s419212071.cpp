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

class APSPath
{
public:
  int solve();
};

int APSPath::solve()
{
  const int infty = 2147483647;
  
  int vn, en;
  cin >> vn >> en;

  vector<vector<int>> adj (vn, vector<int>(vn, infty));

  for ( auto i = 0; i < en; ++i )
    {
      int u, v;
      cin >> u >> v;
      cin >> adj[u][v];
    }

  for ( auto i = 0; i < vn; ++i )
    adj[i][i] = 0;
  
  for ( auto k = 0; k < vn; ++k )
    {
      for ( auto i = 0; i < vn; ++i )
        {
          for ( auto j = 0; j < vn; ++j )
            {
              if ( adj[i][j] > adj[i][k] + adj[k][j] && adj[i][k] != infty && adj[k][j] != infty )
                adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }

  for ( auto i = 0; i < vn; ++i )
    if ( adj[i][i] < 0 )
      {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
      }

  for ( auto i = 0; i < vn; ++i )
    {
      for ( auto j = 0; j < vn; ++j )
        {
          if ( j ) cout << " ";
          if ( adj[i][j] == infty )
            cout << "INF";
          else
            cout << adj[i][j];
        }
      cout << endl;
    }
  
  return 0;
}

int main()
{
  APSPath apsp;

  apsp.solve();

  return 0;
}