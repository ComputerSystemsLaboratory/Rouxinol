#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  long long int input, l;

  while( true ) {

    cin >> input >> l;

    if ( input == 0 && l == 0 ) break;

    vector< long long int > a;
    a.push_back( input );

    for ( int i = 0; true; i++ ) {
      long long int c = a[i];

      vector< int > v;
      for ( int j = 0; j < l; j++ ) {
	v.push_back( c % 10 );
	c /= 10;
      }

      sort( v.begin(), v.end() );

      long long int ma = 0;
      long long int mi = 0;

      for ( int j = 0; j < l; j++ ) {
	ma = ma * 10 + v[ v.size() - 1 - j ];
	mi = mi * 10 + v[ j ];
      }

      a.push_back( ma - mi );

      bool flag = false;
      for ( int j = 0; j < a.size() - 1; j++ ) {
	if ( a[j] == a[ a.size() - 1 ] ) {
	  cout << j << " " << a[j] << " " << a.size() - j - 1 << endl;
	  flag = true;
	  break;
	}
      }
      if ( flag ) break;

    }

  }

  return 0;

}