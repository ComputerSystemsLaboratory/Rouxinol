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

class Edge
{
public:
  int w;
  int u;
  int v;
  Edge(){}
  Edge( int w, int u, int v ) : w(w), u(u), v(v) {}
  bool operator<( const Edge& rhs ) const { return w < rhs.w; }
};

class UnionFind
{
public:
  vector<int> par;
  vector<int> dep;
  UnionFind(){}
  UnionFind( int n ) : par(n), dep(n, 1)
  {
    for ( auto i = 0; i < n; ++i )
      par[i] = i;
  }
  int findSet( int x );
  void unite( int x, int y );
  bool same( int x, int y );
};

int UnionFind::findSet( int x )
{
  if ( par[x] != x )
    par[x] = findSet( par[x] );
  
  return par[x];
}

void UnionFind::unite( int x, int y )
{
  x = findSet( x );
  y = findSet( y );

  if ( x == y ) return;

  if ( dep[x] < dep[y] )
    {
      par[x] = y;
      dep[y] += dep[x];
    }
  else
    {
      par[y] = x;
      dep[x] += dep[y];
    }
}

bool UnionFind::same( int x, int y )
{
  return findSet( x ) == findSet( y );
}

int main()
{
  int nv, ne;
  cin >> nv >> ne;

  vector<Edge> edg( ne );
  
  for ( auto i = 0; i < ne; ++i )
    {
      int u, v, w;
      cin >> u >> v >> w;
      edg[i].u = u;
      edg[i].v = v;
      edg[i].w = w;
    }
  
  sort( edg.begin(), edg.end());

  UnionFind uf( nv );
  
  int mintw = 0;
  
  for ( auto i = 0; i < ne; ++i )
    {
      Edge e = edg[i];
      
      if ( ! uf.same( e.u, e.v ) )
        {
          mintw += e.w;
          uf.unite( e.u, e.v );
        }
    }

  cout << mintw << endl;
  
  return 0;
}