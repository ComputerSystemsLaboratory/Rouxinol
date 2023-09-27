#include <iostream>
using namespace std;
int main( void )
{
  while( 1 ){
    int n,p,d[55],b,i;
    cin >> n >> p;
    if( n == 0 ) break;
    for( i=0; i<n; i++ ){
      d[i] = 0;
    }
    b = p;
    i = 0;
    while( 1 ){
      if( b > 0 ){
        d[i]++;
        b--;
        if( d[i] == p ){
          cout << i << endl;
          break;
        }
      } else if( d[i] > 0 ) {
        b = d[i];
        d[i] = 0;
      }
      i = (i+1) % n;
    }
  }
}