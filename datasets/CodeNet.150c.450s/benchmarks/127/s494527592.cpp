#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

/** Application main entry point. */
int
main (
  int     argc,
  char  * argv[ ]
  )
{
  int n;

  scanf ( "%d", &n );
  while ( n-- )
  {
    set<string> lis;
    char s[ 128 ], *p, *e;

    scanf ( " %s", s );
    e = s + strlen ( s );
    for ( p = s; p != e; ++p )
    {
      string h ( s, p - s );
      string t ( p, e - p );

      lis.insert ( h + t );
      lis.insert ( t + h );
      reverse ( t.begin ( ), t.end ( ) );
      lis.insert ( h + t );
      lis.insert ( t + h );
      reverse ( h.begin ( ), h.end ( ) );
      reverse ( t.begin ( ), t.end ( ) );
      lis.insert ( h + t );
      lis.insert ( t + h );
      reverse ( t.begin ( ), t.end ( ) );
      lis.insert ( h + t );
      lis.insert ( t + h );
    }

    printf ( "%zu\n", lis.size ( ) );
  }

  return ( 0 );
}