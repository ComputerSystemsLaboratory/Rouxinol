#include <cstdio>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

int
main (
  int   argc,
  char *argv[ ]
  )
{
  set<string> lis;
  int st = 0;
  int n, m;

  scanf ( "%d", &n );
  while ( n-- )
  {
    char s[ 11 ];

    scanf ( " %s", s );
    lis.insert ( s );
  }

  scanf ( "%d", &m );
  while ( m-- )
  {
    char s[ 11 ];

    scanf ( " %s", s );
    if ( lis.find ( s ) == lis.end ( ) )
    {
      printf ( "Unknown %s\n", s );
    }
    else
    {
      printf ( "%s by %s\n", ( st ? "Closed" : "Opened" ), s );
      st = !st;
    }
  }

  return ( EXIT_SUCCESS );
}