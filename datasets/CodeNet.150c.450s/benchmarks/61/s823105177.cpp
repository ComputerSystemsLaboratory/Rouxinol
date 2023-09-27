#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int main() {

  while ( true ) {
    int n, a, b, c, x;
    cin >> n >> a >> b >> c >> x;
    if ( n == 0 ) break;
    
    vector<int> ys(n);
    for ( int i = 0; i < n; i++ ) {
      cin >> ys[ i ];
    }
    
    bool success = false;
    int index = 0;
    for ( int i = 0; i <= 10000; i++ ) {
      if ( x == ys[ index ] ) {
	index++;
      }
      if ( index == n ) {
	cout << i << endl;
	success = true;
	break;
      }
      x = ( a * x + b ) % c;
    }
    if ( !success ) {
      cout << -1 << endl;
    }    
  }  
}