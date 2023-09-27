#include <iostream>
#include <cmath>
using namespace std;
int E;
int main(){
  while(cin >> E && E>0){
    int m = 1000000;
    for (int z=0; z*z*z<=E; z++){
      //if(z >= m) break;
        for(int y=0; y*y<= E-z*z*z;y++){
	 //if (y+z >= m) break;
	    int x = E - z*z*z - y*y;
	    if (x >= 0){
	      if(x+y+z < m){
		m = x+y+z;
	      }
	    }
      }
    }
    cout << m << endl;
  }
}