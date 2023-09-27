#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int e = 1;
  while(1){
    int z = 0, y = 0, x = 0;
    int min_m = 1000000000;
    cin >> e;
    if(e == 0) break;
    // cout << "e: " << e << endl;
    while( e - pow(y,2) >= 0){
      z = 0;
      while(e - y*y - z*z*z >= 0){
        x = e - y*y - z*z*z;
        int m = x + y + z;
        // cout << "x" << x << "y" << y << "z" << z << endl;
        if (m < min_m){
          min_m = m;
        }
        z++;
      }
      y++;
    }
    cout << min_m << endl;
  }
}