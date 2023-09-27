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

class MaxHeap
{
public:
  vector<int> a;
  int solve();
  int maxHeapify( int x );
  int buildMaxHeap();
};

int MaxHeap::maxHeapify( int x )
{
  int l = x * 2;
  int r = l + 1;
  int s = a.size();
  int largest;
  
  if ( l < s && a[l] > a[x] )
    largest = l;
  else
    largest = x;

  if ( r < s && a[r] > a[largest] )
    largest = r;

  if ( largest != x )
    {
      swap( a[x], a[largest] );
      maxHeapify( largest );
    }
       
  return 0;
}

int MaxHeap::buildMaxHeap()
{
  int s = a.size() - 1;

  for ( auto i = s / 2; i >= 1; --i )
    maxHeapify( i );
  
  return 0;
}

int MaxHeap::solve()
{
  int n, x;
  cin >> n;

  a.push_back( 0 );
  
  for ( auto i = 0; i < n; ++i )
    {
      cin >> x;
      a.push_back( x );
    }
  
  buildMaxHeap();
  
  for ( auto i = 1; i <= n; ++i )
    cout << " " << a[i];

  cout << endl;
  
  return 0;
}

int main()
{
  MaxHeap mh;

  mh.solve();

  return 0;
}