#include <iostream>
#include <algorithm>
using namespace std;
int main( void )
{
  while( 1 ){
    int n, a;
    cin >> n;
    if( n == 0 ) break;
    int minv = 1001;
    int maxv = -1;
    int s = 0;
    for( int i=0; i<n; i++ ){
      cin >> a;
      s += a;
      minv = min( minv, a );
      maxv = max( maxv, a );
    }
    cout << (s - minv - maxv) / (n - 2) << endl;
  }
}