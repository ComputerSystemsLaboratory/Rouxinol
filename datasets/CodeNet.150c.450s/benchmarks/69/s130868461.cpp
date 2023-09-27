#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;

int x[10];

bool check( int i, int l, int r )
{
  bool retl = false, retr = false;
  
  if ( i == 10 )
    return true;

  if ( x[i] > l )
    retl = check( i+1, x[i], r );
  
  if ( x[i] > r )
    retr =  check( i+1, l, x[i] );

  return ( retl || retr );
}

int main()
{
  int n;
  cin >> n;
  
  for ( int i = 0; i < n; ++i )
    {
      for ( int j = 0; j < 10; ++j )
        {
          cin >> x[j];
        }
      if ( check( 1, x[0], -1 ) )
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  
  return 0;
}