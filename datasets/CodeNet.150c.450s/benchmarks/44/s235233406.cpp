#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[5],b[5];
  while ( cin >> a[1] >> a[2] >> a[3] >> a[4]
	  >> b[1] >> b[2] >> b[3] >> b[4] ) {
    int h = 0,bb = 0;
    for ( int i = 1; i < 5; i++ ) {
      if ( a[i] == b[i] ) h++;
    }

    for ( int i = 1; i < 5; i++ ) {
      for ( int j = 1; j < 5; j++ ) {
	if ( i != j && a[i] == b[j] ) bb++;
      }
    }
    cout << h << " " << bb << endl;
  }
  return 0;
}