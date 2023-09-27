#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>
#include <map>

using namespace std;

int main() {

  while ( true ) {
    int n;
    scanf( "%d\n", &n );
    if ( n == 0 ) break;

    map<char, char> table;
    for ( int i = 0; i < n; i++ ) {
      char key, val;
      scanf( "%c %c\n", &key, &val );
      table[ key ] = val;
    }
    int m;
    scanf( "%d\n", &m );
    for ( int i = 0; i < m; i++ ) {
      char ch;
      scanf( "%c\n", &ch );
      if ( table.count( ch ) > 0 ) {
	printf( "%c", table[ ch ] );
      } else {
	printf( "%c", ch );
      }
    }
    printf( "\n" );
  }  
}