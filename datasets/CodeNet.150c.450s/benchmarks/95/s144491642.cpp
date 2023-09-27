#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
  while( 1 ) {
    int n;
    bool state = false;
    bool lstate = false;
    bool rstate = false;
    int counter = 0;
    cin >> n;
    if( !n ) {
      break;
    }
    for( int i = 0; i < n; i++ ) {
      string s;
      cin >> s;
      if( s[ 0 ] == 'l' ) {
        if( s[ 1 ] == 'u' ) {
          lstate = true;
          if( !state && rstate ) {
            counter++;
            state = true;
          }
        } else {
          lstate = false;
          if( state && !rstate ) {
            counter++;
            state = false;
          }
        }
      } else { // r
        if( s[ 1 ] == 'u' ) {
          rstate = true;
          if( !state && lstate ) {
            counter++;
            state = true;
          }
        } else {
          rstate = false;
          if( state && !lstate ) {
            counter++;
            state = false;
          }
        }
      }
    }
    cout << counter << endl;
  }

  return EXIT_SUCCESS;
}