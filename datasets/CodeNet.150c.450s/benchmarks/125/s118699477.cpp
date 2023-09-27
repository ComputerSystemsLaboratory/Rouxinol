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

class DFS
{
public:
  int n;
  int solve();
  int dfs( int v, int t, vector<vector<int>>& adj, vector<int>& d, vector<int>& f );
};

int DFS::dfs( int v, int t, vector<vector<int>>& adj, vector<int>& d, vector<int>& f )
{
  if ( d[v] )
    return t;
  else
    d[v] = t++;

  for ( auto i = 1; i <= n; ++i )
    if ( adj[v][i] )
      t = dfs( i, t, adj, d, f );

  f[v] = t;

  return ++t;
}

int DFS::solve()
{
  cin >> n;

  vector<vector<int>> adj(n+1, vector<int>(n+1, 0));
  vector<int> d(n+1,0);
  vector<int> f(n+1,0);

  for ( auto i = 0; i < n; ++i )
    {
      int x, k;
      cin >> x;
      cin >> k;
      for ( auto j = 0; j < k; ++j )
        {
          int y;
          cin >> y;
          adj[x][y] = 1;
        }
    }

  int t = 1;
  
  for ( auto i = 1; i <= n; ++i )
    t = dfs( i, t, adj, d, f );

  for ( auto i = 1; i <= n; ++i )
    cout << i << " " << d[i] << " " << f[i] << endl;
  
  return 0;
}

int main()
{
  DFS d;

  d.solve();

  return 0;
}