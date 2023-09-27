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

class Friend
{
public:
  int solve();
  void setGroup( vector<vector<int>>& adj, vector<int>& group, int u, int grpid );
};

void Friend::setGroup( vector<vector<int>>& adj, vector<int>& group, int u, int grpid )
{
  if ( group[u] ) return;
  
  group[u] = grpid;
  
  int n = adj[u].size();
  
  for ( auto i = 0; i < n; ++i )
    {
      int v = adj[u][i];
      setGroup( adj, group, v, grpid );
    }

  return;
}

int Friend::solve()
{
  int n, m;
  cin >> n >> m;
  
  vector<vector<int>> adj( n );

  for ( auto i = 0; i < m; ++i )
    {
      int u, v;
      cin >> u >> v;
      adj[u].push_back( v );
      adj[v].push_back( u );
    }

  int grpid = 1;

  vector<int> group( n, 0 );

  for ( auto i = 0; i < n; ++i )
    {
      if ( group[i] == 0)
        {
          setGroup( adj, group, i, grpid++ );
        }
    }
  
  int q;
  cin >> q;

  
  for ( auto i = 0; i < q; ++i )
    {
      int u, v;
      cin >> u >> v;
      
      if ( group[u] == group[v] )
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
  
  return 0;
}

int main()
{
  Friend f;

  f.solve();

  return 0;
}