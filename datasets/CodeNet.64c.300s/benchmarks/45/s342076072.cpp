#include <iostream>

using namespace std;

int main() {

  while ( true ) {
    int N, M, P;
    cin >> N >> M >> P;
    if ( N == 0 ) break;    
    
    int sum = 0, hit;
    for ( int i = 1; i <= N; i++ ) {
      int val;
      cin >> val;
      sum += val;
      if ( i == M ) {
	hit = val;
      }
    }
    const int ans = ( hit == 0 ? 0 : sum * ( 100 - P ) / hit );
    cout << ans << endl;
  }  
}