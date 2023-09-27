#include <iostream>
using namespace std;

int main() {

  while( true ) {

    long long int n;
    cin >> n;
    if ( n == 0 ) break;

    char d[256];
    for ( long long int i = 0; i < 256; i++ ) {
      d[i] = i;
    }

    for ( long long int i = 0; i < n; i++ ) {
      char in, out;
      cin >> in >> out;
      d[in] = out;
    }

    long long int m;
    cin >> m;

    for ( long long int i = 0; i < m; i++ ) {
      char in;
      cin >> in;
      cout << d[in];
    }
    cout << endl;

  }

  return 0;

}