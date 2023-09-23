#include <iostream>
using namespace std;

int main() {

  long long int n;
  cin >> n;

  for ( long long int i = 1; i <= n; i++ ) {

    if ( i % 3 == 0 ) {
      cout << " " << i;
      continue;
    }

    long long int j = i;
    while( j ) {

      if ( j % 10 == 3 ) {
	cout << " " << i;
	break;
      }
      j /= 10;

    }

  }

  cout << endl;

  return 0;

}