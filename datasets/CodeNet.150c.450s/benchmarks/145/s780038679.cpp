#include <iostream>
#include <string>
#include <map>

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  map < string, int >
    wordTable;
  string  longest = "";
  string  popular = "";
  int     freqctr = 0;

  while ( true )
  {
    string __tmp;

    if ( !( cin >> __tmp ) ) break;

    if ( wordTable.count ( __tmp ) )
    {
      wordTable[ __tmp ] = wordTable[ __tmp ] + 1;
      if ( wordTable[ __tmp ] > freqctr )
      {
        freqctr = wordTable[ __tmp ];
        popular = __tmp;
      }
    }
    else
    {
      wordTable[ __tmp ] = 1;
    }

    if ( __tmp.length ( ) > longest.length ( ) )
    {
      longest = __tmp;
    }
  }

  cout << popular << " " << longest << endl;

  return ( 0 );
}