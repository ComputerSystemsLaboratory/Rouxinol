#include <iostream>
using namespace std;

int main() {

  while( true ) {

  long long int n;
  cin >> n;
  if ( n == 0 ) break;

  long long int a = 0, b = 0;
  for ( long long int i = 0; i < n; i++ ) {

    long long int in_a, in_b;
    cin >> in_a >> in_b;

    if ( in_a > in_b ) {
      a += in_a + in_b;
    }else if ( in_a < in_b ) {
      b += in_a + in_b;
    }else {
      a += in_a;
      b += in_b;
    }

  }

  cout << a << " " << b << endl;

  }

  return 0;

}