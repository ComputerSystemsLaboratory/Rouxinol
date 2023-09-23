#include <iostream>
#include <algorithm>
#include <limits>

#define MAXNUM  ( 5000 )

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  while ( true )
  {
    int N;
    int maxiVal = numeric_limits < int >::min ( );
    int testVal = 0;

    cin >> N;
    if ( N == 0 ) break;

    for ( int i = 0; i < N; ++i )
    {
      int __tmp;

      cin      >> __tmp;
      testVal  += __tmp;
      maxiVal   = max ( maxiVal, testVal );

      if ( testVal < 0 ) testVal = 0;
    }

    cout << maxiVal << endl;
  }

  return ( 0 );
}