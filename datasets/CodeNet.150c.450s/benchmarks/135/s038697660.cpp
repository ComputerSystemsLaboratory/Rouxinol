#include <cstdio>
#include <algorithm>

#define N 1500

static
int my[ N * N ];

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int i;

  for ( ; ; )
  {
    int px[ N + 1 ], py[ N + 1 ];
    /** Allocated in Heap Memory Area:
     * int my[ N * N ]; */
    int x1, x2, y1, y2;
    int res = 0;
    int n, m;

    scanf ( "%d%d", &n, &m );
    if ( !( n | m ) ) break ;

    px[ 0 ] = 0; py[ 0 ] = 0;
    for ( i = 1; i <= n; ++i )
    {
      scanf ( "%d", px + i );
      px[ i ] += px[ i - 1 ];
    }
    for ( i = 1; i <= m; ++i )
    {
      scanf ( "%d", py + i );
      py[ i ] += py[ i - 1 ];
    }

    i = 0;
    for ( y1 = 0;       y1 <= m; ++y1 )
    for ( y2 = y1 + 1;  y2 <= m; ++y2 )
    {
      my[ i++ ] = py[ y2 ] - py[ y1 ];
    }
    sort ( my, my + i );

    for ( x1 = 0;       x1 <= n; ++x1 )
    for ( x2 = x1 + 1;  x2 <= n; ++x2 )
    {
      const int dx = px[ x2 ] - px[ x1 ];

      res += upper_bound ( my, my + i, dx ) - lower_bound ( my, my + i, dx );
    }

    printf ( "%d\n", res );
  }

  return ( 0 );
}