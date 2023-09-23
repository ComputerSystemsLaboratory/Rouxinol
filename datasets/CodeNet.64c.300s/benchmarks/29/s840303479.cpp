#include <math.h>
#include <iostream>
using namespace std;
int main() {
  int ene;
  while( cin >> ene && ene>0){
    int min = 1000000;
    for( int z=0; z<=100; z++) {
      int xy = ene - z*z*z;
      if( xy >= 0)
	for( int y=0; y<=10000; y++) {
	  int x = xy - y*y;
	  if( x>=0)
	    if( x+y+z<min) min = x+y+z;
	}
    }
    cout << min << endl;
  }
}
	