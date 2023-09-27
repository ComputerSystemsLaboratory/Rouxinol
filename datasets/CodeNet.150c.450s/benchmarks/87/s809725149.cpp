#include <iostream>
#include <cstdlib>

using namespace std;

/*
void po( int b[ 10 ][ 5 ] ) {
  for( int i = 0; i < 10; i++) {
    for( int j = 0; j < 5; j++ ) {
      cout << b[ i ][ j ] << " " << flush;
    }
    cout << endl;
  }
  cout << "---" << endl;
}
*/

int del( int b[ 10 ][ 5 ], int h ) {
  int point = 0;
  for( int i = 9; i > 9 - h; i--) {
    int seqv = -1;
    int seqn = 0;
    for( int j = 0; j < 5; j++ ) {
      if( b[ i ][ j ] == seqv ) {
        seqn++;
      } else {
        if( seqn >= 3 ) {
          point += ( seqv * seqn );
          for( int k = 0; k < seqn; k++ ) {
            b[ i ][ j - k - 1 ] = -1;
          }
        }
        seqn = 1;
        seqv = b[ i ][ j ];
      }
    }
    if( seqn >= 3 ) {
      point += ( seqv * seqn );
      for( int k = 0; k < seqn; k++ ) {
        b[ i ][ 5 - k - 1 ] = -1;
      }
    }
  }
  
  for( int i = 9; i > 9 - h; i--) {
    for( int j = 0; j < 5; j++ ) {
//      cout << "I: " << i << " J: " << j << " P: " << point << endl;
//      po( b );
      if( b[ i ][ j ] == -1 ) {
        while( 1 ) {
          if( b[ i ][ j ] == -1 ) {
            for( int k = i; k >= 0; k-- ) {
              b[ k ][ j ] = b[ k - 1 ][ j ];
            }
            b[ 0 ][ j ] = 0;
          } else {
            break;
          }
        }
      }
    }
  }

  return point;
}


int main() {
  while( 1 ) {
    int b[ 10 ][ 5 ] = { 0 };
    int h;
    cin >> h;
    if( h == 0 ) { break; }
    for( int i = 9 - h + 1; i < 10; i++) {
      for( int j = 0; j < 5; j++ ) {
        cin >> b[ i ][ j ];
      }
    }
    int total = 0;
    while( 1 ) {
      int p = del( b, h );
      if( p == 0 ) { break; }
      total += p;
    }

    cout << total << endl;
  }
  return EXIT_SUCCESS;
}