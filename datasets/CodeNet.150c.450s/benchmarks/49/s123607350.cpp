#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
 
  while( true ) {
    long long int n, input;
    cin >> n;
 
    if ( n == 0 ) break;
 
    vector< long long int > s;
 
    for ( long long int i = 0; i < n; i++ ) {
 
      cin >> input;
      s.push_back( input );
 
    }
 
    sort( s.begin(), s.end() );
 
    long long int ans = 0;
 
    for ( long long int i = 1; i < n - 1; i++ ) {
 
      ans += s[i];
 
    }
 
    cout << ans / ( n - 2 ) << endl;
 
  }
 
  return 0;
 
}