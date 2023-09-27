#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<array>

using namespace std;

int n, s;

int count( int x, int d, int z )
{
  int ret = 0;
  
  if ( z < 0 )
    return 0;

  if ( x == n )
    if ( d == z )
      return 1;
    else
      return 0;

  for ( int i = d + 1; i <= 9; ++i )
    ret += count( x + 1, i, z - d );

  return ret;
}

int main()
{
  while( cin >> n >> s && ( n != 0 || s != 0 ) )
    {
      int ret = 0;
      
      for ( int i = 0; i <= 9 ; ++i )
        ret += count( 1, i, s );
      
      cout << ret << endl;
    }
  
  return 0;
}