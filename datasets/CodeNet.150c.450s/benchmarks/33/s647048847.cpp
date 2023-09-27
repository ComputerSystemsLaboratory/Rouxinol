#include <iostream>
#include <cstdlib>

using namespace std;

int f( int p, int x ) {
  return p * ( 100 + x ) / 100;
}

int main() {
  while( 1 ) {
    int x, y, s;
    int tmpmax = 0;
    cin >> x >> y >> s;
    if( !( x | y | s ) ) { break; }
    for( int p1 = 1; p1 < s; p1++ ) {
      for( int p2 = 1; p2 < s; p2++ ) {
        if( f( p1, x ) + f( p2, x ) == s ) {
          tmpmax = max( tmpmax, f( p1, y ) + f( p2, y ) );
        }
      }
    }
    cout << tmpmax << endl;
  }
  return EXIT_SUCCESS;
}