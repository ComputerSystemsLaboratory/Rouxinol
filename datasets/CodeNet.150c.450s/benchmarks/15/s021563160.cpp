#include <iostream>
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

class LinearSearch
{
public:
  int solve( int n, int s[], int q, int t[] );
  bool search( int x, int n, int a[] );
};

bool LinearSearch::search( int x, int n, int a[] )
{
  for ( int i = 0; i < n; i++ )
    {
      if ( x == a[i] )
        return true;
    }
      
  return false;
}

int LinearSearch::solve( int n, int s[], int q, int t[] )
{
  int cnt = 0;

  for ( int i = 0; i < q; i++ )
    {
      if ( search( t[i], n, s ) )
        cnt++;
    }
  return cnt;
}

int main( void )
{
  int n, s[10000], q, t[500];

  cin >> n;

  for ( int i = 0; i < n; i++ )
    cin >> s[i];
  
  cin >> q;

  for ( int i = 0; i < q; i++ )
    cin >> t[i];
  
  LinearSearch ls;

  cout << ls.solve(n, s, q, t) << endl;
  
  return 0;
}