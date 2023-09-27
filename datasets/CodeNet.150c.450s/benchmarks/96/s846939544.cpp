#include <cstdio>
#include <cstdlib>
#define STR_MAX 1025

int main () {
  int n;
  int data[ 10 ][ 6 ] = {
    { 0,   0,   0,   0,   0,   0 },
    { 5, '.', ',', '!', '?', ' ' },
    { 3, 'a', 'b', 'c',   0,   0 },
    { 3, 'd', 'e', 'f',   0,   0 },
    { 3, 'g', 'h', 'i',   0,   0 },
    { 3, 'j', 'k', 'l',   0,   0 },
    { 3, 'm', 'n', 'o',   0,   0 },
    { 4, 'p', 'q', 'r', 's',   0 },
    { 3, 't', 'u', 'v',   0,   0 },
    { 4, 'w', 'x', 'y', 'z',   0 }
  };
  scanf( "%d", &n );
  for( int i = 0; i < n; i++ ) {
    char instr[ STR_MAX ];
    char outstr[ STR_MAX ];
    int si = 0;
    int counter = 1;
    int tmp = 0;
    scanf( "%s", instr );
    for( int j = 0; instr[ j ] != '\0'; j++ ) {
      if( instr[ j ] == '0' ) {
        if( counter != 1 ){
          outstr[ si++ ] = tmp;
        }
        counter = 1;
        continue;
      }
      if( counter == data[ instr[ j ] - '0' ][ 0 ] + 1 ) {
        counter = 1;
      }
      tmp = data[ instr[ j ] - '0' ][ counter++ ];
    }
    outstr[ si++ ] = '\0';
    puts( outstr );
  }

  return EXIT_SUCCESS;
}