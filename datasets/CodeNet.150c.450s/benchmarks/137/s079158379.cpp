#include <iostream>
#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <sstream>
#include <string>
#include <utility>
#include <map>
#include <memory>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;

class Dictionary
{
public:
  list<string> dic[390625];
  int solve();
  int hash( string s );
  int ctov( char c );
};

int Dictionary::solve()
{
  int n;
  cin >> n;

  string cmd, dat;
  
  for ( int i = 0; i < n; i++ )
    {
      cin >> cmd >> dat;

      if ( cmd == "insert" )
        {
          dic[hash( dat )].push_back( dat );
        }
      else if ( cmd == "find" )
        {
          list<string> t = dic[hash( dat )];
          list<string>::iterator it;
          
          for ( it = t.begin(); it != t.end(); it++ )
            {
              if ( *it == dat )
                {
                  cout << "yes" << endl;
                  break;
                }
            }
          if ( it == t.end() )
            cout << "no" << endl;
        }
    }  
  
  return 0;
}

int Dictionary::hash( string s )
{
  if ( s.size() == 1 )
    return ctov( s[0] );
  else if ( s.size() == 2 )
    return ctov( s[0] ) + ctov( s[1] ) * 5;
  else if ( s.size() == 3 )
    return ctov( s[0] ) + ctov( s[1] ) * 5 + ctov( s[2] ) * 25;
  else if ( s.size() == 4 )
    return ctov( s[0] ) + ctov( s[1] ) * 5 + ctov( s[2] ) * 25 + ctov( s[3] ) * 125;
  else if ( s.size() == 5 )
    return ctov( s[0] ) + ctov( s[1] ) * 5 + ctov( s[2] ) * 25 + ctov( s[3] ) * 125 + ctov( s[4] ) * 625;
  else if ( s.size() == 6 )
    return ctov( s[0] ) + ctov( s[1] ) * 5 + ctov( s[2] ) * 25 + ctov( s[3] ) * 125 + ctov( s[4] ) * 625 + ctov( s[5] ) * 3125;
  else if ( s.size() == 7 )
    return ctov( s[0] ) + ctov( s[1] ) * 5 + ctov( s[2] ) * 25 + ctov( s[3] ) * 125 + ctov( s[4] ) * 625 + ctov( s[5] ) * 3125 + ctov( s[6] ) * 15625;
  else
    return ctov( s[0] ) + ctov( s[1] ) * 5 + ctov( s[2] ) * 25 + ctov( s[3] ) * 125 + ctov( s[4] ) * 625 + ctov( s[5] ) * 3125 + ctov( s[6] ) * 15625 + ctov( s[7] ) * 78125;
}

int Dictionary::ctov( char c )
{
  if ( c == 'A' )
    return 1;
  else if ( c == 'C' )
    return 2;
  else if ( c == 'G' )
    return 3;
  else if ( c == 'T' )
    return 4;
  else
    return 0;
}

int main( void )
{

  Dictionary *d = new Dictionary();
  d->solve();
  return 0;
}