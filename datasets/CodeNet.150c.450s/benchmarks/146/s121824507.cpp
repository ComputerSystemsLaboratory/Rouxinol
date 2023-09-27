#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int n;
  cin >> n;

  for ( int i = 0; i < n; i++ ) {

    double x[4],y[4];
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];

    if ( x[0] == x[1] || x[2] == x[3] ) {

      if ( x[0] == x[1] && x[2] == x[3] ) {
	cout << "YES" << endl;
      }else {
	cout << "NO" << endl;
      }

    }else {

      if ( abs(( y[1] - y[0] ) / ( x[1] - x[0] ) - ( y[3] - y[2] ) / ( x[3] - x[2] )) < 0.000000001 ) {
	cout << "YES" << endl;
      }else {
	cout << "NO" << endl;
      }

    }

  }

  return 0;

}