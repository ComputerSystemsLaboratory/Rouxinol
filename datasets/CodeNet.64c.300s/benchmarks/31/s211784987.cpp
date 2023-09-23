#include <iostream>
using namespace std;

int main() {

  bool flag[31] = {};

  for ( long long int i = 0; i < 28; i++ ) {

    long long int in;
    cin >> in;
    flag[in] = true;

  }

  for ( long long int i = 1; i <= 30; i++ ) {
    if ( flag[i] == false ) cout << i << endl;
  }

  return 0;

}