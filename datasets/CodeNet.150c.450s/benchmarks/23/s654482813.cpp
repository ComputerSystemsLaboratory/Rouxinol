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
#include <array>

using namespace std;

class Fibonacci
{
public:
  array<int,45> f;
  int fib( int n );
  int init();
};

int Fibonacci::init()
{
  for ( auto& i : f )
    i = -1;

  f[0] = 1;
  f[1] = 1;

  return 0;
}

int Fibonacci::fib( int n )
{
  if ( f[n] > 0 )
    return f[n];

  int ret = fib( n - 1 ) + fib( n - 2 );
  f[n] = ret;

  return ret;
}

int main()
{
  int n;
  cin >> n;

  Fibonacci f;

  f.init();
  cout << f.fib( n ) << endl;

  return 0;
}