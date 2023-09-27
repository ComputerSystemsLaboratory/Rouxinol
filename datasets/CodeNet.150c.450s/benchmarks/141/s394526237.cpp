#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <cmath>
#define INF 100000000
using namespace std;
typedef double d;
bool isintersect(d x1,d x2, d y1 , d y2 , d px, d py , d qx, d qy)
{
  return ((py-y1)*(x1-x2) + (x1 - px)*(y1-y2))*((qy-y1)*(x1-x2) + (x1 - qx)*(y1-y2)) >= 0;
}
int main(){
  d x1,y1,x2,y2,x3,y3,xp,yp;
  while( cin >>  x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp )
    {
      if( isintersect(x1,x2,y1,y2,xp,yp,x3,y3) &&
	  isintersect(x1,x3,y1,y3,xp,yp,x2,y2) &&
	  isintersect(x3,x2,y3,y2,xp,yp,x1,y1))cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  return 0;
}