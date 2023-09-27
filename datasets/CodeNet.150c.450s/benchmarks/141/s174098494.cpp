#include <iostream>

using namespace std;

typedef double d;

d cross ( d x1, d y1, d x2, d y2 )
{
  return (x1 * y2) - (y1 * x2);
}

int main ( void )
{
  d x[3], y[3], xp, yp;
  
  while( cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp )
  {
     d ret[3];
     for ( int i = 0; i < 3; ++i )
     {
        int nx = (i + 1) % 3;
        ret[i] = cross(xp - x[i], yp - y[i], x[nx] - x[i], y[nx] - y[i]);
     }
     if ( (ret[0] < 0 && ret[1] < 0 && ret[2] < 0) ||
          (ret[0] > 0 && ret[1] > 0 && ret[2] > 0) )
     {
        cout << "YES" << endl;
     }
     else
     {
        cout << "NO" << endl;
     }
  }
  return 0;
}