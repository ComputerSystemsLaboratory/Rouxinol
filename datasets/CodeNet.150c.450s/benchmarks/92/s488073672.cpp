#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n1,n2,total;
  while ( cin >> n1 >> n2 ) {
    total = n1 + n2;
    int n = 0;
    while (1) {
      if ( total < 1 ) break;
      total /= 10;
      n++;
    }
    cout << n << endl;
  }
  return 0;
}