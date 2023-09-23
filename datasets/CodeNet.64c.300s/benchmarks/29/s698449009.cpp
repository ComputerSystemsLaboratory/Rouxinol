#include <iostream>
using namespace std;

int main(){
  int e;
  while(1){
    cin >> e;
    if(e == 0) break;
    int z,y,x,min = 1000000000;

    for(z = 0; z*z*z <= e; z++){
      // cout << z << endl;
      for(y = 0; y*y + z*z*z <= e ; y++){
	x = e - y*y - z*z*z;
	if(x >= 0){
	  if(min > x + y + z) {
	    min = x + y + z;
	    //    cout << x << " " << y << " " << z << endl;; 
	  }
	}
      }
    }
    cout << min << endl;
  }

  return 0;
}