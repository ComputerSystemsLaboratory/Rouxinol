#include <iostream>
using namespace std;
int main( void )
{
  int w,n;
  int a[32],b[32],r[32];
  char c;
  cin >> w >> n;
  for( int i=0; i<n; i++ ) cin >> a[i] >> c >> b[i];
  for( int i=1; i<=w; i++ ) {
    int d=i;
    for( int j=n-1; j>=0; j-- ){
      if( a[j] == d ) d = b[j];
      else if( b[j] == d ) d = a[j];
    }
    r[i] = d;
  }
  for( int i=1; i<=w; i++ ) cout << r[i] << endl;
  return 0;
}