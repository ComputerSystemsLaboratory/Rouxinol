#include <stdio.h>
#define N 10
 
int main( void ) {
  int i, j;
  int m[ N ];
  int ansI;
 
  for( i = 0; i < N; i++ )
    scanf( "%d", &m[ i ] );

  for( i = 0; i < 3; i++ ) {
    ansI = 0;
    for( j = 1; j < N; j++ ) {
      if( m[ ansI ] < m[ j ] ) {
        ansI = j;
      }
    }
    printf( "%d\n", m[ ansI ] );
    m[ ansI ] = 0;
  }

  return( 0 );
}