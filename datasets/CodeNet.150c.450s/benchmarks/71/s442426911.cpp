#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n; 
  while ( cin >> n ) {
    int cnt = 0;
    for ( int i = 0; i < 10; i++ ) {
      for ( int j = 0; j < 10; j++ ) {
    for ( int k = 0; k < 10; k++ ) {
      int l = n - i - j - k;
      if ( l >= 0 && l < 10 && i + j + k + l == n ) cnt++;
    }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}