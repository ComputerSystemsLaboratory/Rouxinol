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

class BFSearch
{
public:
  int solve();
};

int BFSearch::solve()
{
  int n;
  cin >> n;

  vector<vector<int>> adj( n + 1, vector<int>( n + 1, -1));

  int u, k, v;

  for ( auto j = 0; j < n; ++j )
    {
      cin >> u >> k;

      for ( auto i = 0; i < k; ++i )
        {
          cin >> v;
          adj[u][v] = 1;
        }
    }
  
  queue<int> q;
  vector<int> d(n + 1, -1);

  u = 1;
  d[u] = 0;
  q.push(u);

  while ( !q.empty() )
    {
      u = q.front();
      
      for ( auto i = 1; i <= n; ++i )
        {
          if ( adj[u][i] == 1 && d[i] == -1 )
            {
              d[i] = d[u] + 1;
              q.push( i );
            }
        }
      
      q.pop();
    }
  
  for ( auto i = 1; i <= n; ++i )
    cout << i << " " << d[i] << endl;
  
  return 0;
}

int main()
{
  BFSearch b;

  b.solve();

  return 0;
}