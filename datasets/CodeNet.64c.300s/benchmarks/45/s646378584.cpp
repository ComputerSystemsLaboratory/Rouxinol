#include <iostream>
#include <cstdlib>

#define TN_MAX 101

using namespace std;

int main () {
  while( 1 ) {
    int n, m, p;
    int sum = 0;
    int tn[ TN_MAX ];
    cin >> n >> m >> p;
    if ( !n && !m && !p ) {
      return EXIT_SUCCESS;
    }
    for( int i = 1; i <= n; i++ ) {
      cin >> tn[ i ];
      sum += tn[ i ];
    }
    if( tn[ m ] == 0 ){
      cout << 0 << endl;
    }else{
      int o = sum * ( 100 - p ) / tn[ m ];
      cout << o << endl;
    }
  }
}