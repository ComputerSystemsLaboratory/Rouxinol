#include <bits/stdc++.h>
using namespace std;
 
int num[1000001];
 
void prime_num() {
  num[0] = 1;
  num[1] = 1;
  for ( int i = 2; i * i  < 1000001; i++ ) {
    if ( num[i] == 0 ) {
      for ( int j = i * 2; j < 1000001; j += i ) {
    num[j] = 1;
      }
    }
  }
}
 
int main() {
  int n;
  prime_num();
  while ( cin >> n ) {
    int cnt = 0;
    for ( int i = 2; i  <= n; i++ ) {
      if ( num[i] == 0 ) cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}