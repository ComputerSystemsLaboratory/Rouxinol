#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n; cin >> n;
  int num = 100000;
  for ( int i = 0; i < n; i++ ) {
    int result = (int)(num*1.05) % 1000;
    if ( result == 0 ) num *= 1.05;
    else num = num * 1.05 + 1000 - result;
  }
  cout << num << endl;
  return 0;
}