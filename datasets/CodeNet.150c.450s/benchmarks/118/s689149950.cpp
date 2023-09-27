#include <cstdio>

using namespace std;

int
main (
  )
{
  int n;

  scanf ( "%d", &n );
  while ( n-- )
  {
    int y, m, d;
    int res = 0;

    scanf ( "%d%d%d", &y, &m, &d );
    while ( y != 1000 || m != 1 || d != 1 )
    {
      ++d;

      if ( y % 3 == 0 )
      {
        if ( d > 20 )
        {
          d = 1;
          ++m;
        }
      }
      else
      {
        if ( m % 2 == 0 )
        {
          if ( d > 19 )
          {
            d = 1;
            ++m;
          }
        }
        else
        {
          if ( d > 20 )
          {
            d = 1;
            ++m;
          }
        }
      }

      if ( m > 10 )
      {
        ++y;
        m = 1;
      }

      ++res;
    }

    printf ( "%d\n", res );
  }

  return ( 0 );
}