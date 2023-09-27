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

class PriorityQueue
{
public:
  vector<int> q;
  int solve();
  int insert( int x );
  int extractMax();
  int maxHeapify( int i );
};

int PriorityQueue::solve()
{
  string com;
  int a;

  q.push_back( 0 );

  while ( ( cin >> com ) && com !=  "end" )
    {
      if ( com == "insert" )
        {
          cin >> a;
          insert( a );
        }
      else
        {
          cout << extractMax() << endl;
        }
    }
    
  return 0;
}

int PriorityQueue::insert( int x )
{
  q.push_back( x );
  maxHeapify( q.size() - 1 );
  return 0;
}

int PriorityQueue::extractMax()
{
  int ret = q[1];
  q[1] = -1;

  int p = 1;
  int l = p * 2;
  int r = l + 1;

  while ( l < (int)q.size() )
    {
      if ( r < (int)q.size() )
        {
          if ( q[l] > q[r] )
            {
              swap( q[p], q[l]);
              p = l;
            }
          else
            {
              swap( q[p], q[r] );
              p = r;
            }
          l = p * 2;
          r = l + 1;
        }
      else
        {
          swap( q[p], q[l] );
          p = l;
          l = p * 2;
          r = l + 1;
        }
    }
  return ret;
}

int PriorityQueue::maxHeapify( int i )
{
  int p = i / 2;

  while ( p > 0 && q[p] < q[i] )
    {
      swap( q[p], q[i] );
      i = p;
      p = i / 2;
    }
  
  return 0;
}

int main()
{
  PriorityQueue pq;

  pq.solve();

  return 0;
}