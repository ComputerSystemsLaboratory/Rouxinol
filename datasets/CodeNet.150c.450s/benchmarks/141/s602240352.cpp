#include <iostream>
using namespace std;
int main( void )
{
  double x1,y1,x2,y2,x3,y3,xp,yp,s1,s2,s3;
  while( 1 ){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
    if( cin.eof() ) break;
    s1 = (x2-x1)*(yp-y1) - (xp-x1)*(y2-y1);
    s2 = (x3-x2)*(yp-y2) - (xp-x2)*(y3-y2);
    s3 = (x1-x3)*(yp-y3) - (xp-x3)*(y1-y3);
    if     ( s1 < 0 && s2 < 0 && s3 < 0 ) cout << "YES" << endl;
    else if( s1 > 0 && s2 > 0 && s3 > 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}