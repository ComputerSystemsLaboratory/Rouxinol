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

class Graph
{
public:
  int solve();
};

int Graph::solve()
{
  int n;
  cin >> n;
  
  vector<vector<int>> adj( n + 1, vector<int>( n + 1, 0 ) );
  
  for ( auto i = 0; i < n; ++i )
    {
      int u;
      int k;
      int v;
      cin >> u;
      cin >> k;
      for ( auto j = 0; j < k; ++j )
        {
          cin >> v;
          adj[u][v] = 1;
        }
    }

  for ( auto i = 1; i <= n; ++i )
    {
      for ( auto j = 1; j <= n; ++j )
        {
          if ( j > 1 ) cout << " ";
          cout << adj[i][j];
        }
      cout << endl;
    }
  
  return 0;
}

int main()
{
  Graph g;

  g.solve();

  return 0;
}