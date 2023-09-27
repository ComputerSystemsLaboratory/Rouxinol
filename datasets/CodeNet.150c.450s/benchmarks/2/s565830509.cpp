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

class QuickSort
{
public:
  int n;
  int a[100000];
  int solve();
  int partition( int p, int r );
};

int QuickSort::partition( int p, int r )
{
  int x = a[r];
  int i = p - 1;

  for ( int j = p; j < r; j++ )
    {
      if ( a[j] <= x )
        {
          ++i;
          swap( a[i], a[j] );
        }
    }
  swap( a[i+1], a[r]);
  
  return i+1;
}

int QuickSort::solve()
{
  cin >> n;

  for ( int i = 0; i < n; i++ )
    cin >> a[i];

  int b = partition(0, n-1);

  for ( int i = 0; i < n; i++ )
    {
      if ( i ) cout << " ";
      if ( i == b ) cout << "[";
      cout << a[i];
      if ( i == b ) cout << "]";
    }
  cout << endl;
  
  return 0;
}

int main()
{

  QuickSort qs;

  qs.solve();

  return 0;
}