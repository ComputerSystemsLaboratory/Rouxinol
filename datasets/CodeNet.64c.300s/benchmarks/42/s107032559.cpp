#include <iostream>
using namespace std;

int main() {

  while( true ) {

    long long int n;
    cin >> n;
    if ( n == 0 ) break;

    long long int p[21][21] = {};

    for ( long long int i = 0; i < n; i++ ) {

      long long int x, y;
      cin >> x >> y;
      p[x][y]++;

    }

    long long int m;
    cin >> m;
    if ( m == 0 ) break;

    int dx[4] = {  0,  1,  0, -1 };
    int dy[4] = {  1,  0, -1,  0 };

    long long int cnt = 0;

    long long int x = 10;
    long long int y = 10;
    cnt += p[x][y];
    p[x][y] = 0;

    for ( long long int i = 0; i < m; i++ ) {

      char d;
      long long int l;
      cin >> d >> l;

      long long int dr;
      if ( d == 'N' ) {
	dr = 0;
      }else if ( d == 'E' ) {
	dr = 1;
      }else if ( d == 'S' ) {
	dr = 2;
      }else {
	dr = 3;
      }
      for ( long long int j = 0; j < l; j++ ) {
	x += dx[dr];
	y += dy[dr];
	cnt += p[x][y];
	p[x][y] = 0;
      }

    }

    if ( cnt == n ) {
      cout << "Yes" << endl;
    }else {
      cout << "No" << endl;
    }

  }

  return 0;

}