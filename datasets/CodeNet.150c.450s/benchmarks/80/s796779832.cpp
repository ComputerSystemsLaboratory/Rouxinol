#include <iostream>
using namespace std;

int main() {

  long long int s[2] = {0};

  for ( long long int x = 0; x < 2; x++ ) {
    for ( long long int i = 0; i < 4; i++ ) {
      long long int in;
      cin >> in;
      s[x] += in;
    }
  }

  if ( s[0] > s[1] ) {
    cout << s[0] << endl;
  }else {
    cout << s[1] << endl;
  }

  return 0;

}