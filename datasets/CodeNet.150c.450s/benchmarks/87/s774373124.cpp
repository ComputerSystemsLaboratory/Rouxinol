#include <iostream>
#include <vector>
using namespace std;

int main() {

  while( true ) {

    long long int h;
    cin >> h;
    if ( h == 0 ) break;

    vector< vector< long long int > > v;

    for ( long long int y = 0; y < h; y++ ) {

      vector< long long int > w;
      w.push_back( 0 );

      for ( long long int x = 0; x < 5; x++ ) {

	long long int in;
	cin >> in;
	w.push_back( in );

      }

      w.push_back( 0 );

      v.push_back( w );

    }

    long long int ans = 0;

    while( true ) {

      bool f = false;

      for ( long long int y = 0; y < h; y++ ) {

	long long int cnt = 0;
	long long int num = 0;

	for ( long long int x = 0; x < 7; x++ ) {

	  if ( v[y][x] != num ) {
	    if ( cnt >= 3 && num != 0 ) {
	      ans += cnt * num;
	      f = true;
	      for ( long long int k = 0; k < cnt; k++ ) {
		v[y][x-k-1] = 0;
	      }
	    }
	    cnt = 1;
	    num = v[y][x];
	  }else {
	    cnt++;
	  }

	}

      }

      if ( f == false ) {
	cout << ans << endl;
	break;
      }

      for ( long long int x = 1; x <= 5; x++ ) {

	long long int m = -1;

	for ( long long int y = h - 1; y >= 0; y-- ) {

	  if ( v[y][x] == 0 && m == -1 ) {
	    m = y;
	  }
	  if ( v[y][x] != 0 && m != -1 ) {
	    v[m][x] = v[y][x];
	    v[y][x] = 0;
	    m--;
	  }

	}

      }

    }

  }

  return 0;

}