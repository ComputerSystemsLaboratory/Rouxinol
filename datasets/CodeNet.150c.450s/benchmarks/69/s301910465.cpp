#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  int data[10];
  cin >> n;
  while ( n > 0 ) {
    n--;
    int flag = 1;
    for ( int i = 0; i < 10; i++ ) cin >> data[i];
    int b = 0,c = 0;
    for ( int i = 0; i < 10; i++ ) {
      if ( b < data[i] ) b = data[i];
      else if ( c < data[i] ) c = data[i];
      else flag = 0;
    }
    if ( flag ) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}