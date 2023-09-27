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

class SearchNum
{
public:
  int n;
  int q;
  int a[20];
  int solve();
  bool search( int ix, int sum, int g );
};

int SearchNum::solve()
{
  cin >> n;
  for ( int i = 0; i < n; i++ )
    {
      cin >> a[i];
    }
  cin >> q;
  for ( int i = 0; i < q; i++ )
    {
      int m;
      cin >> m;
      if ( search( 0, 0, m ) )
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }

  
  return 0;
}

bool SearchNum::search( int ix, int sum, int g )
{
  if ( ix == n )
    return false;

  if ( sum == g )
    return true;
  
  if ( a[ix] + sum == g )
    return true;

  return search( ix+1, sum, g ) || search( ix+1, sum+a[ix], g );
}

int main()
{
  SearchNum sn;

  sn.solve();
  
  return 0;
}