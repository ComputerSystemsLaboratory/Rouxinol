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

const int infty = 2000000000;

class Inversions
{
public:
  void msort( vector<int>& ar, int left, int right, long long& cnt );
  void merge( vector<int>& ar, int left, int mid, int right, long long& cnt );
  int solve();
};

void Inversions::msort( vector<int>& ar, int left, int right, long long& cnt )
{
  if ( left + 1 < right )
    {
      int mid = ( left + right ) / 2;

      msort( ar, left, mid, cnt );
      msort( ar, mid, right, cnt );
      merge( ar, left, mid, right, cnt );
    }
}

void Inversions::merge( vector<int>& ar, int left, int mid, int right, long long& cnt )
{
  int n1 = mid - left;
  int n2 = right - mid;

  vector<int> l( n1 + 1 );
  vector<int> r( n2 + 1 );

  for ( auto i = 0; i < n1; ++i )
    l[i] = ar[left + i];
  
  for ( auto i = 0; i < n2; ++i )
    r[i] = ar[mid + i];

  l[n1] = infty;
  r[n2] = infty;

  int x = 0;
  int y = 0;

  for ( auto i = left; i < right; ++i )
    {
      if ( l[x] <= r[y] )
        ar[i] = l[x++];
      else
        {
          ar[i] = r[y++];
          cnt += n1 - x;
        }
    }
}

int Inversions::solve()
{
  int n;
  cin >> n;

  vector<int> a( n );

  long long cnt = 0;
  
  for ( auto i = 0; i < n; ++i )
    cin >> a[i];

  msort( a, 0, n, cnt );
  
  cout << cnt << endl;
  
  return 0;
}

int main()
{

  Inversions inv;

  inv.solve();

  return 0;
}