#include <cstdio>
#include <cstdlib>
#define FIELD_SIZE 21

int main () {
  while ( 1 ) {
    int n;
    scanf( "%d", &n );
    if ( !n ) { return EXIT_SUCCESS; }
    
    int field[ FIELD_SIZE ][ FIELD_SIZE ] = {0};
    for ( int i = 0; i < n; i++ ) {
      int x, y;
      scanf( "%d%d", &x, &y );
      field[ y ][ x ] = 1;
    }

    int m;
    char dir[ 2 ];
    int len;
    int px = 10, py = 10;
    int get_num = 0;
    scanf( "%d", &m );
    if ( field[ py ][ px ] ) {
      get_num++;
      field[ py ][ px ] = 0;
    }

    for ( int i = 0; i < m; i++ ) {
      scanf( "%s%d", dir, &len );
      for ( int j = 0; j < len; j++ ) {
          switch ( dir[ 0 ] ) {
            case 'W':
            px--;
            break;
          case 'S':
            py--;
            break;
          case 'E':
            px++;
            break;
          case 'N':
            py++;
            break;
        }
//        printf( "%d, %d: %d\n", px, py, field[ py ][ px ] );
        if ( field[ py ][ px ] ) {
          get_num++;
          field[ py ][ px ] = 0;
        }
      }
    }
    
    puts( get_num == n ? "Yes" : "No" );
  }
}