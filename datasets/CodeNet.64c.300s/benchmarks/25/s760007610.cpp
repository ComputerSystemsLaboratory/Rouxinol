#include <iostream>
using namespace std;
int main( void )
{
  int a[4],b[4],hit,blow;
  while( 1 ){
    for( int i=0; i<4; i++ ) cin >> a[i];
    for( int i=0; i<4; i++ ) cin >> b[i];
    if( cin.eof() ) break;
    hit=0;
    blow=0;
    for( int i=0; i<4; i++ ) if( a[i] == b[i] ) hit++;
    for( int i=0; i<4; i++ ) for( int j=0; j<4; j++ )
      if( a[i] == b[j] ) blow++;
    blow -= hit;
    cout << hit << ' ' << blow << endl;
  }
  return 0;
}