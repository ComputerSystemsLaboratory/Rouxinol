#include <iostream>
#include <algorithm>

#define MAXINUM   ( 100 + 1 )

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int input[ MAXINUM ] = { 0 };
  int countMax = 0;

  while ( true )
  {
    int __tmp;
    
    if ( !( cin >> __tmp ) ) break;
    countMax = max ( countMax, ++input[ __tmp ] );
  }
  if ( countMax == 0 )  return ( 0 );

  for ( int i = 0; i < MAXINUM; ++i )
  {
    if ( input[ i ] == countMax )
    {
      cout << i << endl;
    }
  }

  return ( 0 );
}