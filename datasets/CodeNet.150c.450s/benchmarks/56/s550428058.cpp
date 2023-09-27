#include <iostream>
using namespace std;

int main() {

  long long int n;
  cin >> n;

  long long int sum = 0;
  long long int mi, ma;

  for ( long long int i = 0; i < n; i++ ) {

    long long int in;
    cin >> in;
    if ( i == 0 ) {
      mi = in;
      ma = in;
    }
    mi = min( mi, in );
    ma = max( ma, in );
    sum += in;

  }

  cout << mi << " " << ma << " " << sum << endl;

  return 0;

}