#include <cstdio>

#define N 32

using namespace std;

static int l;

int maxValue (
  int a
  )
{
  int s[ 10 ] = { 999999999 };
  int p, i;
  int res = 0;

  while ( a )
  {
    ++s[ a % 10 ];
    a /= 10;
  }

  p = 9;
  for ( i = 0; i < l; ++i )
  {
    for ( ; s[ p ] == 0; --p ) ; 
    res = res * 10 + p;
    --s[ p ];
  }

  return ( res );
}

int minValue (
  int a
  )
{
  int s[ 10 ] = { };
  int p, i;
  int res = 0;

  while ( a )
  {
    ++s[ a % 10 ];
    a /= 10;
  }

  p = 1;
  for ( i = 0; i < l; ++i )
  {
    for ( ; s[ p ] == 0; ++p ) ; 
    if ( p >= 10 ) break ;
    res = res * 10 + p;
    --s[ p ];
  }

  return ( res );
}

int
main (
  )
{
  int i, j;

  for ( ; ; )
  {
    int a[ N ];

    scanf ( "%d%d", &a[ 0 ], &l );
    if ( !( a[ 0 ] | l ) ) break ;

    for ( i = 1; ; ++i )
    {
      a[ i ] = maxValue ( a[ i - 1 ] ) - minValue ( a[ i - 1 ] );
      for ( j = 0; j < i; ++j )
      {
        if ( a[ j ] == a[ i ] ) break ;
      }
      if ( j != i )
      {
        printf ( "%d %d %d\n", j, a[ i ], i - j );
        break ;
      }
    }
  }

  return ( 0 );
}