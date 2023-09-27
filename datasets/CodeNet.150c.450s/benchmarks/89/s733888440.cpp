#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool flag[1000000] = {};

int main() {

  vector< long long int > sosu;

  for ( long long int i = 2; i < 1000000; i++ ) {
    if ( flag[i] == false ) {
      for ( long long int j = 1; j * i < 1000000; j++ ) {
	flag[ j * i ] = true;
	sosu.push_back( i );
      }
    }
  }

  long long int a, d, n;

  while( true ) {

    cin >> a >> d >> n;

    if ( a == 0 && d == 0 && n == 0 ) break;

    long long int cnt = 1;

    while( true ) {

      if ( binary_search( sosu.begin(), sosu.end(), a ) ) {
	if ( cnt == n ) {
	  cout << a << endl;
	  break;
	}
	cnt++;
      }
      a += d;

    }

  }

  return 0;

}