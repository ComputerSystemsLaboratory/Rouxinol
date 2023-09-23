#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n; cin >> n;
  for ( int i = 0; i < n; i++ ) {
    int a,b,c; cin >> a >> b >> c;
    bool flag = 0;
    if ( a + b > c && b + c > a && c + a > b ) {
      if ( a * a == b * b + c * c ||
       b * b == c * c + a * a ||
       c * c == a * a + b * b ) flag = 1;
    }
    if ( flag ) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}