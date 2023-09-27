#include <iostream>
#include <math.h>
using namespace std;
int e;
int main(){
  for(;;){
    cin >> e ;;
    int m = e;
    if(e == 0) break;
    for(int y=0; y*y <= e; y++){
      for(int z=0; y*y + z*z*z <= e; z++){
        int x = e - z*z*z - y*y;
        if( x + y + z < m){
          m = x+y+z;
        }
      }
    }
    cout << m << endl;
  }
}