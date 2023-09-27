#include <iostream>
using namespace std;

int main() {

  while( true ) {

    long long int n;
    cin >> n;
    if ( n == 0 ) break;
    n = 1000 - n;

    long long int ans = 0;
    if ( n >= 500 ) {
      ans++;
      n -= 500;
    }
    ans += n / 100;
    n %= 100;

    if ( n >= 50 ) {
      ans++;
      n -= 50;
    }
    ans += n / 10;
    n %= 10;

    if ( n >= 5 ) {
      ans++;
      n -= 5;
    }
    ans += n / 1;

    cout << ans << endl;

  }

  return 0;

}