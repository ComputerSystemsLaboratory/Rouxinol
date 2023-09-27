#include <iostream>
using namespace std;

bool hantei( double x1, double y1, double x2, double y2, double x3, double y3 ) {
  if ( (x1-x2)*(y3-y2) > (y1-y2)*(x3-x2) ) return true;
  return false;
}

int main() {

  double x1,y1,x2,y2,x3,y3,xp,yp;

  while( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp ) {

    for ( int i = 0; i < 3; i++ ) {
      if ( hantei( x1, y1, x2, y2, x3, y3 ) != hantei( x1, y1, x2, y2, xp, yp ) ) {
	cout << "NO" << endl;
	break;
      }
      if ( i != 2 ) {
	double k;
	k = x1;
	x1 = x2;
	x2 = x3;
	x3 = k;
	k = y1;
	y1 = y2;
	y2 = y3;
	y3 = k;
      }else {
	cout << "YES" << endl;
      }
    }

  }

  return 0;

}