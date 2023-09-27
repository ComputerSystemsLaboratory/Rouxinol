#include <iostream>

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int table[ 11 ][ 50 ] = { };

  for ( int i = 0; i < 0x400; ++i )   /* 0x400: (10000000000)_2 (10 zeros) */
  {
    int sum = 0;
    int ctr = 0;
    int cur = -1;

    while ( true )
    {
      int __tmp = i >> ++cur;

      if ( !__tmp ) break;
      if ( __tmp & 1 )
      {
        sum += cur;
        ++ctr;
      }
    }

    table[ ctr ][ sum ]++;
  }

  while ( true )
  {
    int n, s;

    cin >> n >> s;
    if ( n == 0 && s == 0 ) break ;

    cout
      << ( n >= 0 && n <= 10
           && s >= 0 && s < 50 ? table[ n ][ s ]
                                : 0 ) << endl;
  }

  return ( 0 );
}