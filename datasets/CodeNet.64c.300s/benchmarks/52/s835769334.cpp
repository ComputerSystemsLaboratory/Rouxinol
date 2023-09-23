#include <iostream>
using namespace std;
int main( void )
{
  int n,s;
  while( 1 ){
    int ret = 0;
    cin>>n>>s;
    if( n==0 && s==0 ) break;
    for( int i=0; i < (1<<10); i++ ){
      int a=1,b=0,c=0;
      for( int j=0; j<10; j++ ){
        if( i & a ){ b += j; c++; }
        a <<= 1;
      }
      if( c == n && b == s ) ret++;
    }
    cout << ret << endl;
  }
  return 0;
}