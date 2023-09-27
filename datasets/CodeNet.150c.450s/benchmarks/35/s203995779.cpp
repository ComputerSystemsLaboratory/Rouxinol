#include <iostream>
#include <algorithm>
using namespace std;
int main( void )
{
  int n,prev,d[5001],ret;
  while( 1 ){
    cin >> n;
    if( n==0 ) break;
    cin >> d[0];
    ret = d[0];
    for( int i=1; i<n; i++ ){
      cin >> d[i];
      for( int j=0; j<i; j++ ) d[j] += d[i];
      ret = max( *max_element( d, d+i+1 ), ret );
    }
    cout << ret << endl;
  }
  return 0;
}