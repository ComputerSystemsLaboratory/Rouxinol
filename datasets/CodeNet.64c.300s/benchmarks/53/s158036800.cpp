#include <iostream>
using namespace std;

int main() {

  long long int a, b, c;
  cin >> a >> b >> c;

  long long int ans = 0;

  for ( long long int i = a; i <= b; i++ ) {

    if ( ( c % i ) == 0 ) ans++;

  }

  cout << ans << endl;

  return 0;

}