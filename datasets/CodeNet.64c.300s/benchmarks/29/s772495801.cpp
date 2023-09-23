#include <iostream>

using namespace std;

int main(){
  int e,ee,m,x,y,z;
  while (true){
    cin >> e;
    if (!e)
      break;
    x = 0;
    y = 0;
    z = 0;
    m = e;
    while(e>=z*z*z){
      ee = e;
      ee -= z*z*z;
      y = 0;
      while(ee>=y*y)
	y++;
      y--;
      ee -= y*y;
      x = ee;
      if (m>x+y+z)
	m = x+y+z;
      z++;
    }
    z--;
    cout << m << endl;
  }
  return 0;
}